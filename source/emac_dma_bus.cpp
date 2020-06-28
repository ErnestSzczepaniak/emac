#include "emac_dma_bus.h"

Emac_dma_bus::Emac_dma_bus(unsigned int base) : Emac_register(base)
{

}

void Emac_dma_bus::reset(bool value)
{
    set(value, 0, 1);
}

bool Emac_dma_bus::reset()
{
    return get(0, 1);
}

void Emac_dma_bus::descriptor_skip_words(int value)
{
    set(value, 2, 5);
}

int Emac_dma_bus::descriptor_skip_words()
{
    return get(2, 5);
}

void Emac_dma_bus::descriptor(Descriptor value)
{
    set(value, 7, 1);
}

Emac_dma_bus::Descriptor Emac_dma_bus::descriptor()
{
    return get<Descriptor>(7, 1);
}

void Emac_dma_bus::beats_transmit(Beats value)
{
    set(value, 8, 6);
}

Emac_dma_bus::Beats Emac_dma_bus::beats_transmit()
{
    return get<Beats>(8, 6);
}

void Emac_dma_bus::burst(Burst value)
{
    set(value, 16, 1);
}

Emac_dma_bus::Burst Emac_dma_bus::burst()
{
    return get<Burst>(16, 1);
}

void Emac_dma_bus::beats_receive(Beats value)
{       
    set(value, 17, 6);
}

Emac_dma_bus::Beats Emac_dma_bus::beats_receive()
{
    return get<Beats>(17, 6);
}

void Emac_dma_bus::beats_same_as_transmit(bool value)
{
    set(!value, 23, 1);
}

bool Emac_dma_bus::beats_same_as_transmit()
{
    return !get(23, 1);
}

void Emac_dma_bus::beats_multiply_by_eight(bool value)
{
    set(value, 24, 1);
}

bool Emac_dma_bus::beats_multiply_by_eight()
{
    return get(24, 1);
}

void Emac_dma_bus::beats_aligned(bool value)
{
    set(value, 25, 1);
}

bool Emac_dma_bus::beats_aligned()
{
    return get(25, 1);
}
