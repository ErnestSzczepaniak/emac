#include "emac.h"
#include "emac_register.h"

namespace emac
{

dma::descriptor::Transmitt _descriptor_tx;
dma::descriptor::Receive _descriptor_rx;
unsigned char _buffer[2048];

void init()
{
    _set(base_permodrst, true, 1, 1); // set emac to reset
    _set(base_manager_control, 0x1, 2, 2); // switch to rgmii
    _set(base_permodrst, false, 1, 1); // set emac out of reset

    ksz9021::init();

    ksz9021::reset();

    ksz9021::link_wait();

    auto [speed, duplex] = ksz9021::link_params();

    if (duplex == ksz9021::Duplex::FULL) configuration::full_duplex_enable(true);
    if (speed == ksz9021::Speed::_1000_BASE_T) configuration::speed_set(configuration::Speed::_1000_BASE_T);

    configuration::crc_check_enable(true);
    configuration::transmit_state_machine_enable(true);
    configuration::receive_state_machine_enable(true);

    interrupt::mask::rgmii_link_changed_enable(true);

    /* ---------------------------------------------| dma |--------------------------------------------- */

    _descriptor_tx.enable_crc(true);
    _descriptor_tx.enable_padding(true);
    _descriptor_tx.first(true); // musi byc przy tx
    _descriptor_tx.last(true);
    _descriptor_tx.ring_end(true);

    dma::descriptor::address::transmit_set(&_descriptor_tx);

    _descriptor_rx.size(0, 2048);
    _descriptor_rx.pointer(0, _buffer);
    _descriptor_rx.first(true); // nie musi byc przy rx
    _descriptor_rx.last(true);
    _descriptor_rx.ring_end(true);
    _descriptor_rx.own(true);

    dma::descriptor::address::receive_set(&_descriptor_rx);

    dma::operation::transmit_when_full_enable(true);

    dma::interrupt::normal_enable(true);
    dma::interrupt::receive_enable(true);

    dma::operation::transmit_operation_enable(true);
    dma::operation::receive_operation_enable(true);
}

void send(void * data, int size)
{
    _descriptor_tx.pointer(0, data);
    _descriptor_tx.size(0, size);
    // _descriptor_tx.enable_padding(false); // test

    _descriptor_tx.own(true);

    dma::poll::transmitt();

    while(_descriptor_tx.own() == true);
}

void interrupt_ack()
{
    dma::status::normal_interrupt_summary_set(true);
}

Result receive()
{
    return {_buffer, _descriptor_rx.length()};
}

void receive_ack()
{
    _descriptor_rx.own(true);

    dma::poll::receive();
}

}; /* namespace: emac */
