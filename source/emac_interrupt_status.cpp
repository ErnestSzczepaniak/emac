#include "emac_interrupt_status.h"
#include "emac_register.h"

namespace emac::interrupt::status
{

bool rgmii_link_changed_get()
{
    return _get<bool>(base, 0, 1);
}

}; /* namespace: emac::interrupt::status */