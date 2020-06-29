#include "emac_descriptor.h"

Emac_descriptor::Emac_descriptor() 
: 
Emac_register((unsigned int) _descriptor, 4)
{

}

unsigned int * Emac_descriptor::address()
{
    return _descriptor;
}

void Emac_descriptor::own(bool value)
{
    set(value, 31, 1, 0);
}

bool Emac_descriptor::own()
{
    return get(31, 1, 0);
}

bool Emac_descriptor::error_summary()
{
    return get(15, 1);
}

void Emac_descriptor::size(int index, int value)
{
    if (index == 0) set(value, 0, 13, 1);
    else if (index == 1) set(value, 16, 13, 1);
}

int Emac_descriptor::size(int index)
{
    if (index == 0) return get(0, 13, 1);
    else if (index == 1) return get(16, 13, 1);

    return 0;
}

void Emac_descriptor::pointer(int index, void * data)
{
    set(data, 0, 32, index + 2);
}

void * Emac_descriptor::pointer(int index)
{
    return get<void *>(0, 32, index + 1);
}