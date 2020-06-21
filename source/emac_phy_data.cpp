#include "emac_phy_data.h"

namespace emac::phy::data
{

Data::Data(unsigned int address) : Value(address)
{

}

void Data::set(unsigned short int value)
{
    Value::set(value, 0, 16);
}

unsigned short int Data::get()
{
    return Value::get<unsigned short int>(0, 16);
}

}; /* namespace: emac::phy::data */
