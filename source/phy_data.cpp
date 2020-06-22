#include "phy_data.h"

unsigned short int Phy_data::get()
{
    return Register::get<unsigned short int>(0, 16);
}

void Phy_data::set(unsigned short int value)
{
    Register::set(value, 0, 16);
}
