#include "emac_phy.h"

Emac_phy::Emac_phy(unsigned int base) : Emac_register(base, 2)
{
    
}

void Emac_phy::device(int value)
{
    _device = value;
}

int Emac_phy::device()
{
    return _device;
}

void Emac_phy::speed(Speed value)
{
    _speed = value;
}

Emac_phy::Speed Emac_phy::speed()
{
    return _speed;
}

unsigned short int Emac_phy::read(int address)
{
    auto temp = get(0, 16, 0);

    temp |= 0x1; // busy
    temp &= ~0x2; // read
    temp &= ~0x3c;
    temp |= ((int) _speed) << 2;
    temp &= ~0x7c0;
    temp |= (address << 6);
    temp &= ~0xf8;
    temp |= _device << 11;

    set(temp, 0, 16, 0);

    while(get(0, 1, 0) == true);

    return get(0, 16, 1);
}

void Emac_phy::write(int address, unsigned short int value)
{
    auto temp = get(0, 16, 0);

    temp |= 0x1; // busy
    temp |= 0x2; // write
    temp &= ~0x3c;
    temp |= ((int) _speed) << 2;
    temp &= ~0x7c0;
    temp |= (address << 6);
    temp &= ~0xf8;
    temp |= _device << 11;

    set(value, 0, 16, 1);
    set(temp, 0, 16, 0);

    while(get(0, 1, 0) == true);
}