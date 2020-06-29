#include "emac.h"

Emac::Emac(unsigned int base)
:
configuration(base + 0x0),
filter(base + 0x4),
phy(base + 0x10),
dma(base + 0x1000)
{

}

void Emac::init()
{
    Emac_register manager_control(address_manager_control);
    Emac_register permodrst(address_permodrst);

    permodrst.set(true, 1, 1); // emac into reset

    manager_control.set(0x1, 2, 2); // physel to RGMII

    permodrst.set(false, 1, 1); // emac out of reset

    _init_descriptor_transmit();
    _init_descriptor_receive();

    // pobranie speed z ksz

    configuration.crc_check(true);
    configuration.duplex(Emac_configuration::Duplex::FULL);
    configuration.speed(Emac_configuration::Speed::_1000_BASE_T);
    configuration.transmit_machine(true);
    configuration.receive_machine(true);

    dma.address_descriptor_list_transmit.set(_descriptor_transmit.address());
    dma.address_descriptor_list_receive.set(_descriptor_receive.address());

    dma.operation.transmit_when_full(true);
    dma.operation.transmit(true);
    dma.operation.receive(true);
}

unsigned char * Emac::buffer_transmit(int index)
{
    return &_buffer_transmit[index][0];
}

void Emac::send(int index, int size)
{
    _descriptor_transmit.size(index, size);
    _descriptor_transmit.own(true);

    dma.poll_transmit.set(1);
}

/* ---------------------------------------------| info |--------------------------------------------- */

void Emac::_init_descriptor_transmit()
{
    _descriptor_transmit.reset();

    _descriptor_transmit.first(true);
    
    _descriptor_transmit.pointer(0, &_buffer_transmit[0][0]);
    _descriptor_transmit.pointer(1, &_buffer_transmit[1][0]);

    _descriptor_transmit.enable_crc(true);
    _descriptor_transmit.enable_padding(true);

    _descriptor_transmit.last(true);
    _descriptor_transmit.ring_end(true);
}

void Emac::_init_descriptor_receive()
{
    _descriptor_receive.reset();

    _descriptor_receive.size(0, 4096);
    _descriptor_receive.size(1, 4096);

    _descriptor_receive.pointer(0, &_buffer_receive[0][0]);
    _descriptor_receive.pointer(1, &_buffer_receive[1][0]);

    _descriptor_receive.ring_end(true);

    _descriptor_receive.own(true);
}
