#include "emac_control_status.h"
#include "emac_register.h"

namespace emac::control::status
{

Duplex duplex_get()
{
    return _get<Duplex>(base, 0, 1);
}

Speed speed_get()
{
    return _get<Speed>(base, 1, 2);
}

bool link_get()
{
    return _get<bool>(base, 3, 1);
}


}; /* namespace: emac::control::status */
