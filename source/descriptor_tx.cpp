#include "descriptor_tx.h"

Descriptor_tx::Descriptor_tx()
{
    reset();
}

void Descriptor_tx::own(bool value)
{
    set(value, 31, 1, 0);
}

bool Descriptor_tx::own()
{
    return get(31, 1, 0);
}

void Descriptor_tx::last(bool value)
{
    set(value, 29, 1, 0);
}

bool Descriptor_tx::last()
{
    return get(29, 1, 0);
}

void Descriptor_tx::first(bool value)
{
    set(value, 28, 1, 0);
}

bool Descriptor_tx::first()
{
    return get(28, 1, 0);
}

void Descriptor_tx::crc(bool value) // inverse
{
    set(!value, 27, 1, 0);
}   

bool Descriptor_tx::crc()
{
    return !get(27, 1, 0);
}

void Descriptor_tx::padding(bool value) //inverse
{
    set(!value, 26, 1, 0);
}

bool Descriptor_tx::padding()
{
    return !get(26, 1, 0);
}

void Descriptor_tx::crc_insertion(Crc_insertion value)
{
    set(value, 22, 2, 0);
}

Descriptor_tx::Crc_insertion Descriptor_tx::crc_insertion()
{
    return get<Crc_insertion>(22, 2, 0);
}

void Descriptor_tx::ring_end(bool value)
{
    return set(value, 21, 1, 0);
}

bool Descriptor_tx::ring_end()
{
    return get(21, 1, 0);
}

void Descriptor_tx::chain(bool value)
{
    set(value, 20, 1, 0);
}

bool Descriptor_tx::chain()
{
    return get(20, 1, 0);
}

bool Descriptor_tx::error_summary()
{
    return get(15, 1, 0);
}

void Descriptor_tx::size(int index, int value)
{
    if (index == 0) set(value, 0, 13, 1);
    else if (index == 1) set(value, 16, 13, 1);
}

int Descriptor_tx::size(int index)
{
    if (index == 0) return get(0, 13, 1);
    else if (index == 1) return get(16, 13, 1);

    return 0;
}

void Descriptor_tx::pointer(int index, void * data)
{
    set(data, 0, 32, index + 2);
}

void * Descriptor_tx::pointer(int index)
{
    return get<void *>(0, 32, index + 1);
}