#include "emac_ksz9021.h"
#include "emac_phy.h"

namespace emac::ksz9021
{

void init()
{
    phy::device_set(1);
    phy::speed_set(phy::Speed::L4_60_100_MDC_L4_42);
}

void reset()
{
    auto control = phy::read(address_basic_control);

    control |= 0x8000;

    phy::write(address_basic_control, control);
}

void link_wait()
{
    while((phy::read(address_basic_status) & 0x4) == false); // poll link up
}

Link link_params()
{
    Link link;

    auto phy = phy::read(address_phy_control);

    if (phy & 0x8) link.duplex = Duplex::FULL;
    else link.duplex = Duplex::HALF;

    if (phy & 0x10) link.speed = Speed::_10_BASE_T;
    else if (phy & 0x20) link.speed = Speed::_100_BASE_T;
    else if (phy & 0x40) link.speed = Speed::_1000_BASE_T;

    return link;
}

}; /* namespace: emac::ksz9021 */
