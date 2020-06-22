#include "dma_operation.h"

void Dma_operation::receive(bool value)
{
    set(value, 1, 1);
}

bool Dma_operation::receive()
{
    return get(1, 1);
}

void Dma_operation::transmit(bool value)
{
    set(value, 13, 1);
}

bool Dma_operation::transmit()
{
    return get(13, 1);
}

void Dma_operation::full_start(bool value)
{
    set(value, 21, 1);
}

bool Dma_operation::full_start()
{
    return get(21, 1);
}
