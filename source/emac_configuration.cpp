#include "emac_configuration.h"
#include "emac_register.h"

namespace emac::configuration
{

void preamble_length_set(Preamble value)
{
    _set(base, value, 0, 2);
}

void receive_state_machine_enable(bool value)
{
    _set(base, value, 2, 1);
}

void transmit_state_machine_enable(bool value)
{
    _set(base, value, 3, 1);
}

void defferal_check_enable(bool value)
{
    _set(base, value, 4, 1);
}

void back_off_limit_set(Back_off_limit value)
{
    _set(base, value, 5, 2);
}

void strip_pad_crc_enable(bool value)
{
    _set(base, value, 7, 1);
}

bool link_get()
{
    _get<bool>(base, 8, 1);
}

void half_duplex_one_transmission_enable(bool value)
{
    _set(base, value, 9, 1);
}   
void crc_check_enable(bool value)
{
    _set(base, value, 10, 1);
}

void full_duplex_enable(bool value)
{
    _set(base, value, 11, 1);
}

void loopback_enable(bool value)
{
    _set(base, value, 12, 1);
}

void half_duplex_reception_disable(bool value)
{
    _set(base, value, 13, 1);
}

void speed_set(Speed value)
{
    if (value == Speed::_1000_BASE_T)
    {
        _set(base, false, 15, 1);
    }
    else
    {
        _set(base, true, 15, 1);
        _set(base, value, 14, 1);
    }
}

void half_duplex_crs_disable(bool value)
{
    _set(base, value, 16, 1);
}

void interframe_gap_set(Interframe_gap value)
{
    _set(base, value, 17, 3);
}

void jumbo_frame_error_disable(bool value)
{
    _set(base, value, 20, 1);
}

void half_duplex_bursting_enable(bool value)
{
    _set(base, value, 21, 1);
}

void transmitter_jabber_timer_disable(bool value)
{
    _set(base, value, 22, 1);
}

void receiver_watchdog_disable(bool value)
{
    _set(base, value, 23, 1);
}

void phy_forwarding_enable(bool value)
{
    _set(base, value, 24, 1);
}

void strip_crc_ethertype_enable(bool value)
{
    _set(base, value, 25, 1);
}

void giant_frame_enable(bool value)
{
    _set(base, value, 27, 1);
}

}; /* namespace: emac::configuration */
