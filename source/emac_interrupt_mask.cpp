#include "emac_interrupt_mask.h"

Emac_interrupt_mask::Emac_interrupt_mask(unsigned int base) : Emac_register(base)
{

}

void Emac_interrupt_mask::rgmii(bool value)
{
    set(value, 0, 1);
}

bool Emac_interrupt_mask::rgmii()
{
    return get(0, 1);
}
