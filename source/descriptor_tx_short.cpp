#include "descriptor_tx_short.h"

Descriptor_tx_short::Descriptor_tx_short()
{
    reset();
}

void Descriptor_tx_short::own(bool value)
{
    set(value, 31, 1, 0);
}

bool Descriptor_tx_short::own()
{
    return get(31, 1, 0);
}

void Descriptor_tx_short::last(bool value)
{
    set(value, 30, 1, 1);
}

bool Descriptor_tx_short::last()
{
    return get(30, 1, 1);
}

void Descriptor_tx_short::first(bool value)
{
    set(value, 29, 1, 1);
}

bool Descriptor_tx_short::first()
{
    return get(29, 1, 1);
}

void Descriptor_tx_short::crc_insertion(Crc_insertion value)
{
    set(value, 27, 2, 1);
}

Descriptor_tx_short::Crc_insertion Descriptor_tx_short::crc_insertion()
{
    return get<Crc_insertion>(27, 2, 1);
}

void Descriptor_tx_short::crc(bool value) // invers
{
    set(!value, 26, 1, 1);
}

bool Descriptor_tx_short::crc()
{
    return !get(26, 1, 1);
}

void Descriptor_tx_short::ring_end(bool value)
{
    set(value, 25, 1, 1);
}

bool Descriptor_tx_short::ring_end()
{
    return get(25, 1, 1);
}

void Descriptor_tx_short::chain(bool value)
{
    set(value, 24, 1, 1);
}

bool Descriptor_tx_short::chain()
{
    return get(24, 1, 1);
}

void Descriptor_tx_short::padding(bool value) //invers
{
    set(!value, 23, 1, 1);
}

bool Descriptor_tx_short::padding()
{
    return !get(23, 1, 1);
}

void Descriptor_tx_short::size(int index, int value)
{
    if (index == 0) set(value, 0, 11, 1);
    else if (index == 1) set(value, 11, 11, 1);
}

int Descriptor_tx_short::size(int index)
{
    if (index == 0) return get(0, 11, 1);
    else if (index == 1) return get(11, 11, 1);
}

void Descriptor_tx_short::pointer(int index, void * pointer)
{
    set(pointer, 0, 32, index + 2);
}

void * Descriptor_tx_short::pointer(int index)
{
    return get<void *>(0, 32, index + 2);
}
