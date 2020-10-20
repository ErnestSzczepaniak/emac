#include "emac_interrupt_mask.h"
#include "emac_register.h"

namespace emac::interrupt::mask
{

void rgmii_link_changed_enable(bool value)
{
    _set(base, value, 0, 1);
}

}; /* namespace: emac::interrupt::mask */
