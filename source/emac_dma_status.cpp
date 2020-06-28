#include "emac_dma_status.h"

Emac_dma_status::Emac_dma_status(unsigned int base) : Emac_register(base)
{

}

bool Emac_dma_status::transmission_complete()
{
    return get(0, 1);
}

bool Emac_dma_status::transmission_stopped()
{
    return get(1, 1);
}

bool Emac_dma_status::next_descriptor_transmit_owned_by_host()
{
    return get(2, 1);
}

bool Emac_dma_status::jabber_timer_expired()
{
    return get(3, 1);
}

bool Emac_dma_status::buffer_overflow()
{
    return get(4, 1);
}

bool Emac_dma_status::buffer_underflow()
{
    return get(5, 1);
}

bool Emac_dma_status::reception_complete()
{
    return get(6, 1);
}

bool Emac_dma_status::next_descriptor_receive_owned_by_host()
{
    return get(7, 1);
}

bool Emac_dma_status::state_stopped()
{
    return get(8, 1);
}

bool Emac_dma_status::jumbo_received()
{
    return get(9, 1);
}

bool Emac_dma_status::fifo_transfered()
{
    return get(10, 1);
}

bool Emac_dma_status::error_bus()
{
    return get(13, 1);
}

bool Emac_dma_status::packed_filled()
{
    return get(14, 1);
}

bool Emac_dma_status::abnormal_interrupt_summary()
{
    return get(15, 1);
}

bool Emac_dma_status::normal_interrupt_summary()
{
    return get(16, 1);
}

Emac_dma_status::State_receive Emac_dma_status::state_receive()
{
    return get<State_receive>(17, 2);
}

Emac_dma_status::State_transmit Emac_dma_status::state_transmi()
{
    return get<State_transmit>(20, 2);
}

bool Emac_dma_status::error_bus_type()
{
    return get(23, 3);
}

bool Emac_dma_status::interrupt_gmac_line()
{
    return get(26, 1);
}

bool Emac_dma_status::interrupt_gmac_mmc()
{
    return get(27, 1);
}

bool Emac_dma_status::interrupt_timestamp()
{
    return get(29, 1);
}

bool Emac_dma_status::interrupt_gmac_lpi()
{
    return get(30, 1);
}
