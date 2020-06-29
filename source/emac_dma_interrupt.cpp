#include "emac_dma_interrupt.h"

Emac_dma_interrupt::Emac_dma_interrupt(unsigned int base) : Emac_register(base)
{

}

void Emac_dma_interrupt::transmit(bool value)
{
    set(value, 0, 1);    
}

bool Emac_dma_interrupt::transmit()
{
    return get(0, 1);
}

void Emac_dma_interrupt::transmit_stopped(bool value)
{
    set(value, 1, 1);
}

bool Emac_dma_interrupt::transmit_stopped()
{
    return get(1, 1);
}

void Emac_dma_interrupt::transmit_buffer_unavailable(bool value)
{
    set(value, 2, 1);
}

bool Emac_dma_interrupt::transmit_buffer_unavailable()
{
    return get(2, 1);
}

void Emac_dma_interrupt::transmit_jabber_timeout(bool value)
{
    set(value, 3, 1);
}

bool Emac_dma_interrupt::transmit_jabber_timeout()
{
    return get(3, 1);
}

void Emac_dma_interrupt::transmit_overflow(bool value)
{
    set(value, 4, 1);
}

bool Emac_dma_interrupt::transmit_overflow()
{
    return get(4, 1);
}

void Emac_dma_interrupt::transmit_underflow(bool value)
{
    set(value, 5, 1);
}

bool Emac_dma_interrupt::transmit_underflow()
{
    return get(5, 1);
}

void Emac_dma_interrupt::receive(bool value)
{
    set(value, 6, 1);
}

bool Emac_dma_interrupt::receive()
{
    return get(6, 1);
}

void Emac_dma_interrupt::receive_buffer_unavailable(bool value)
{
    set(value, 7, 1);
}

bool Emac_dma_interrupt::receive_buffer_unavailable()
{
    return get(7, 1);
}

void Emac_dma_interrupt::receive_stopped(bool value)
{
    set(value, 8, 1);
}

bool Emac_dma_interrupt::receive_stopped()
{
    return get(8, 1);
}

void Emac_dma_interrupt::receive_watchdog(bool value)
{
    set(value, 9, 1);
}

bool Emac_dma_interrupt::receive_watchdog()
{
    return get(9, 1);
}

void Emac_dma_interrupt::transmit_early(bool value)
{
    set(value, 10, 1);
}

bool Emac_dma_interrupt::transmit_early()
{
    return get(10, 1);
}

void Emac_dma_interrupt::error_bus(bool value)
{
    set(value, 13, 1);
}

bool Emac_dma_interrupt::error_bus()
{
    return get(13, 1);
}

void Emac_dma_interrupt::receive_early(bool value)
{
    set(value, 14, 1);
}

bool Emac_dma_interrupt::receive_early()
{
    return get(14, 1);
}

void Emac_dma_interrupt::abnormal(bool value)
{
    set(value, 15, 1);
}

bool Emac_dma_interrupt::abnormal()
{
    return get(15, 1);
}

void Emac_dma_interrupt::normal(bool value)
{
    set(value, 16, 1);
}

bool Emac_dma_interrupt::normal()
{
    return get(16, 1);
}
