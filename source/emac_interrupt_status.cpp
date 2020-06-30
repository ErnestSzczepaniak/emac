#include "emac_interrupt_status.h"

Emac_interrupt_status::Emac_interrupt_status(unsigned int base) : Emac_register(base)
{

}

bool Emac_interrupt_status::rgmii()
{
    return get(0, 1);
}