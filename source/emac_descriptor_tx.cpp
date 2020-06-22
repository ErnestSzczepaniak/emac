#include "emac_descriptor_tx.h"
#include "emac_operations.h"

namespace emac::descriptor::tx
{

using namespace operations;

Tx::Tx()
:
_control(0),
_count(0),
_address_0(0),
_address_1(0)
{

}

void Tx::own(bool value)
{
    set(_control, value, 31, 1);
}

bool Tx::own()
{
    return get(_control, 31, 1);
}

void Tx::interrupt_completion(bool value)
{
    set(_control, value, 30, 1);
}

bool Tx::interrupt_completion()
{
    return get(_control, 30, 1);
}

void Tx::last(bool value)
{
    set(_control, value, 29, 1);
}

bool Tx::last()
{
    return get(_control, 29, 1);
}

void Tx::first(bool value)
{
    set(_control, value, 28, 1);
}

bool Tx::first()
{
    return get(_control, 28, 1);
}

void Tx::crc(bool value) // inverse
{
    set(_control, !value, 27, 1);
}   

bool Tx::crc()
{
    return !get(_control, 27, 1);
}

void Tx::padding(bool value) //inverse
{
    set(_control, !value, 26, 1);
}

bool Tx::padding()
{
    return !get(_control, 26, 1);
}

void Tx::timestamp(bool value)
{
    set(_control, value, 25, 1);
}

bool Tx::timestamp()
{
    return get(_control, 25, 1);
}

void Tx::crc_insertion(Crc_insertion value)
{
    set(_control, value, 22, 2);
}

Crc_insertion Tx::crc_insertion()
{
    return get<Crc_insertion>(_control, 22, 2);
}

void Tx::ring_end(bool value)
{
    set(_control, value, 21, 1);
}

bool Tx::ring_end()
{
    return get(_control, 21, 1);
}

void Tx::chain(bool value)
{
    set(_control, value, 20, 1);
}

bool Tx::chain()
{
    return get(_control, 20, 1);
}

bool Tx::timestamp_status()
{
    return get(_control, 17, 1);
}

bool Tx::error_summary()
{
    return get(_control, 15, 1);
}

void Tx::size(int index, int value)
{
    if (index == 0)
    {
        set(_count, value, 0, 13);
    }
    else if (index == 1)
    {
        set(_count, value, 16, 13);
    }
}

int Tx::size(int index)
{
    if (index == 0) return get(_count, 0, 13);
    else if (index == 1) return get(_count, 16, 13);

    return 0;
}

void Tx::pointer(int index, void * pointer)
{
    if (index == 0) _address_0 = (unsigned int) pointer;
    else if (index == 1) _address_1 = (unsigned int) pointer;
}

void * Tx::pointer(int index)
{
    if (index == 0) return (void *) _address_0;
    else if (index == 1) return (void *) _address_1;

    return nullptr;
}

}; /* namespace: emac::descriptor::tx */
