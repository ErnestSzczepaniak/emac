#include "emac_dma_operation.h"

Emac_dma_operation::Emac_dma_operation(unsigned int base) : Emac_register(base)
{

}

void Emac_dma_operation::receive(bool value)
{
    set(value, 1, 1);
}

bool Emac_dma_operation::receive()
{
    return get(1, 1);
}

void Emac_dma_operation::transmit(bool value)
{
    set(value, 13, 1);
}

bool Emac_dma_operation::transmit()
{
    return get(13, 1);
}

void Emac_dma_operation::full_start(bool value)
{
    set(value, 21, 1);
}

bool Emac_dma_operation::full_start()
{
    return get(21, 1);
}
