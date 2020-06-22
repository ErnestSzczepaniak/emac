#include "phy_control.h"

void Phy_control::busy(bool value)
{
    set(value, 0, 1);
}

bool Phy_control::busy()
{
    return get(0, 1);
}

void Phy_control::direction(Phy_control::Direction value)
{
    set(value, 1, 1);
}

Phy_control::Direction Phy_control::direction()
{
    return get<Direction>(1, 1);
}

void Phy_control::number_register(int value)
{
    set(value, 6, 5);
}

int Phy_control::number_register()
{
    return get(6, 5);
}

void Phy_control::number_device(int value)
{
    set(value, 11, 5);
}

int Phy_control::number_device()
{
    return get(11, 5);
}