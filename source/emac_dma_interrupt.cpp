#include "emac_dma_interrupt.h"
#include "emac_register.h"

namespace emac::dma::interrupt
{

void transmit_enable(bool value)
{
    _set(base, value, 0, 1);
}

void transmit_stopped_enable(bool value)
{
    _set(base, value, 1, 1);
}

void transmit_buffer_unavailable_enable(bool value)
{
    _set(base, value, 2, 1);
}

void transmit_jabber_timeout_enable(bool value)
{
    _set(base, value, 3, 1);
}

void transmit_overflow_enable(bool value)
{
    _set(base, value, 4, 1);
}

void transmit_underflow_enable(bool value)
{
    _set(base, value, 5, 1);
}

void receive_enable(bool value)
{
    _set(base, value, 6, 1);
}

void receive_buffer_unavailable_enable(bool value)
{
    _set(base, value, 7, 1);
}

void receive_stopped_enable(bool value)
{
    _set(base, value, 8, 1);
}

void receive_watchdog_enable(bool value)
{
    _set(base, value, 9, 1);
}

void transmit_early_enable(bool value)
{
    _set(base, value, 10, 1);
}

void error_bus_enable(bool value)
{
    _set(base, value, 13, 1);
}

void receive_early_enable(bool value)
{
    _set(base, value, 14, 1);
}

void abnormal_enable(bool value)
{
    _set(base, value, 15, 1);
}

void normal_enable(bool value)
{
    _set(base, value, 16, 1);
}

}; /* namespace: emac::dma::interrupt::mask */
