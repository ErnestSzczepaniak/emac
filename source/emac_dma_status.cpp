#include "emac_dma_status.h"
#include "emac_register.h"

namespace emac::dma::status
{

bool transmission_complete()
{
    return _get<bool>(base, 0, 1);
}

bool transmission_stopped()
{
    return _get<bool>(base, 1, 1);
}

bool next_descriptor_transmit_owned_by_host()
{
    return _get<bool>(base, 2, 1);
}

bool jabber_timer_expired()
{
    return _get<bool>(base, 3, 1);
}

bool buffer_overflow()
{
    return _get<bool>(base, 4, 1);
}

bool buffer_underflow()
{
    return _get<bool>(base, 5, 1);
}

bool reception_complete()
{
    return _get<bool>(base, 6, 1);
}

bool next_descriptor_receive_owned_by_host()
{
    return _get<bool>(base, 7, 1);
}

bool state_stopped()
{
    return _get<bool>(base, 8, 1);
}

bool jumbo_received()
{
    return _get<bool>(base, 9, 1);
}

bool fifo_transfered()
{
    return _get<bool>(base, 10, 1);
}

bool error_bus()
{
    return _get<bool>(base, 13, 1);
}

bool packed_filled()
{
    return _get<bool>(base, 14, 1);
}

void abnormal_interrupt_summary_set(bool value)
{
    _set(base, value, 15, 1);
}

bool abnormal_interrupt_summary_get()
{
    return _get<bool>(base, 15, 1);
}

void normal_interrupt_summary_set(bool value)
{
    _set(base, value, 16, 1);
}

bool normal_interrupt_summary_get()
{
    return _get<bool>(base, 16, 1);
}

State_receive state_receive_get()
{
    return _get<State_receive>(base, 17, 2);
}

State_transmit state_transmi_get()
{
    return _get<State_transmit>(base, 20, 2);
}

bool error_bus_type()
{
    return _get<bool>(base, 23, 3);
}

bool interrupt_gmac_line_get()
{
    return _get<bool>(base, 26, 1);
}

bool interrupt_gmac_mmc_get()
{
    return _get<bool>(base, 27, 1);
}

bool interrupt_timestamp_get()
{
    return _get<bool>(base, 29, 1);
}

bool interrupt_gmac_lpi_get()
{
    return _get<bool>(base, 30, 1);
}

}; /* namespace: emac::dma::status */
