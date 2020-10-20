#include "emac_phy.h"
#include "emac_register.h"

namespace emac::phy
{

void device_set(int value)
{
    auto temp = _get<unsigned short int>(base, 0, 16, index_control);

    temp &= ~0xf8;
    temp |= value << 11;

    _set(base, temp, 0, 16, index_control);
}

void speed_set(Speed value)
{
    auto temp = _get<unsigned short int>(base, 0, 16, index_control);

    temp &= ~0x3c;
    temp |= ((int) value) << 2;

    _set(base, temp, 0, 16, index_control);
}

unsigned short int read(int address)
{
    auto temp = _get<unsigned short int>(base, 0, 16, index_control);

    temp |= 0x1; // busy
    temp &= ~0x2; // read
    temp &= ~0x7c0;
    temp |= (address << 6);

    _set(base, temp, 0, 16, index_control);

    while(_get<bool>(base, 0, 1, index_control) == true);

    return _get<unsigned short int>(base, 0, 16, index_data);
}

void write(int address, unsigned short int value)
{
    auto temp = _get<unsigned short int>(base, 0, 16, index_control);

    temp |= 0x1; // busy
    temp |= 0x2; // write
    temp &= ~0x7c0;
    temp |= (address << 6);

    _set(base, value, 0, 16, index_data);
    _set(base, temp, 0, 16, index_control);

    while(_get<bool>(base, 0, 1, 0) == true);
}

}; /* namespace: emac::phy */
