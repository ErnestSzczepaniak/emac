#include "emac_dma.h"
#include "emac_register.h"

namespace emac::dma
{

Descriptor::Descriptor()
{
    for (int i = 0; i < 4; i++) _descriptor[i] = 0;
}

void Descriptor::own(bool value)
{
    _set(_descriptor, value, 31, 1, 0);
}

bool Descriptor::own()
{
    return _get<bool>(_descriptor, 31, 1);
}

bool Descriptor::error_summary()
{
    return _get<bool>(_descriptor, 15, 1);
}

void Descriptor::size(int index, int value)
{
    if (index == 0) _set(_descriptor, value, 0, 13, 1);
    else if (index == 1) _set(_descriptor, value, 16, 13, 1);
}

int Descriptor::size(int index)
{
    if (index == 0) return _get<int>(_descriptor, 0, 13, 1);
    else if (index == 1) return _get<int>(_descriptor, 16, 13, 1);

    return 0;
}

void Descriptor::pointer(int index, void * data)
{
    _set(_descriptor, data, 0, 32, index + 2);
}

void * Descriptor::pointer(int index)
{
    return _get<void *>(_descriptor, 0, 32, index + 1);
}

}; /* namespace: emac::dma */
