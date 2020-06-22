#ifdef build_platform_host

#define CATCH_CONFIG_MAIN
#include "build.h"
#include "test.h"

#else

#include "string.h"
#include "build.h"
#include "phy_control.h"
#include "phy_data.h"
#include "phy_status.h"
#include "configuration.h"
#include "descriptor_tx.h"
#include "dma_address_transmit.h"
#include "dma_operation.h"
#include "dma_bus.h"

int main()
{
    unsigned int base = 0xFF702000;

    auto * configuration = (Configuration *) (base + 0);
    auto * phy_control = (Phy_control *) (base + 0x10);
    auto * phy_data = (Phy_data *) (base + 0x14);
    auto * phy_status = (Phy_status *) (base + 0xd8);
    auto * dma_bus = (Dma_bus *) (base + 0x1000	);
    auto * dma_address_transmit = (Dma_address_transmit *) (base + 0x1010);
    auto * dma_operation = (Dma_operation *) (base + 0x1018);

    

    phy_control->number_device(1);
    phy_control->direction(Phy_control::Direction::READ);
    phy_control->number_register(27);

    bool link = false;
    while(!link)
    {
        phy_control->busy(true);
        while(phy_control->busy() == true);

        link = phy_data->get() & 0x1;
    }

    configuration->
    configuration->preamble(Configuration::Preamble::SEVEN);
    configuration->transmit_machine(true);
    auto up = configuration->link();
    configuration->full_duplex(true);
    configuration->speed(Configuration::Speed::_100);
    configuration->interface(Configuration::Interface::GMII);
    configuration->forwarding(true);

    auto mode = phy_status->mode();
    auto speed = phy_status->speed();
    bool ll = phy_status->link();

    // dma_bus->reset(true);
    dma_bus->descriptor(Dma_bus::Descriptor::EXTENDED);
    dma_bus->beats(32);


    unsigned char buffer[64];
    Descriptor_tx desc;

    desc.own(true);
    desc.last(true);
    desc.first(true);
    desc.crc(true);
    desc.padding(true);
    desc.crc_insertion(Descriptor_tx::Crc_insertion::IP_HEADER_PAYLOAD_PSEUDOHEADER);
    desc.ring_end(true);

    memset(buffer, 0xee, 64);
    desc.pointer(0, buffer);
    //desc.pointer(1, buffer);
    desc.size(0, 32);
    //desc.size(1, 32);

    dma_address_transmit->set(&desc);

    dma_operation->transmit(true);

    desc.own(true);

    while(1);
}

#endif
