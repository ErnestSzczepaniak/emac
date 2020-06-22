#include "emac_interrupt_mask.h"

namespace emac::interrupt::mask
{

Mask::Mask(unsigned int address) : Value(address)
{

}

void Mask::rgmi(bool value)
{
    set(value, 0, 1);
}

bool Mask::rgmi()
{
    return get(0, 1);
}

bool Mask::link_status()
{
    return get(1, 1);
}

bool Mask::autonegotiation()
{
    return get(2, 1);
}

void Mask::timestamp(bool value)
{
    set(value, 9, 1);
}

bool Mask::timestamp()
{
    return get(9, 1);
}

void Mask::lpi(bool value)
{
    set(value, 10, 1);
}

bool Mask::lpi()
{
    return get(10, 1);
}

}; /* namespace: emac::interrupt::mask */
