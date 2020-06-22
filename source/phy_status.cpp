#include "phy_status.h"

Phy_status::Mode Phy_status::mode()
{
    return get<Mode>(0, 1);
}

Phy_status::Speed Phy_status::speed()
{
    return get<Speed>(1, 2);
}

bool Phy_status::link()
{
    return get(3, 1);
}
