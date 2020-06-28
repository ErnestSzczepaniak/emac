#include "emac_register.h"

Emac_register::Emac_register(unsigned int address, int span)
:
_address((unsigned int *) address),
_span(span)
{
    
}

void Emac_register::address(unsigned int value)
{
    _address = (unsigned int *) value;
}

unsigned int Emac_register::address()
{
    return (unsigned int) _address;
}

void Emac_register::span(int value)
{
    _span = value;
}

int Emac_register::span()
{
    return _span;
}

void Emac_register::reset()
{
    for (int i = 0; i < _span; i++) _address[i] = 0;
}