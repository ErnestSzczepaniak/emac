#include "emac_phy_address.h"

namespace emac::phy::address
{

Address::Address(unsigned char address) : Value(address)
{


}
void Address::busy(bool value)
{
    set(value, 0, 1);
}

bool Address::busy()
{
    return get(0, 1);
}

void Address::operation(Operation value)
{
    set(value, 1, 1);
}

Operation Address::operation()
{
    return get<Operation>(1, 1);
}

void Address::speed(Speed value)
{
    set(value, 2, 4);
}

Speed Address::speed()
{
    return get<Speed>(2, 4);
}

void Address::number(int value)
{
    set(value, 6, 5);
}

int Address::number()
{
    return get(6, 5);
}

void Address::device(int value)
{
    set(value, 11, 5);
}

int Address::device()
{
    return get(11, 5);
}

}; /* namespace: emac::phy::address */
