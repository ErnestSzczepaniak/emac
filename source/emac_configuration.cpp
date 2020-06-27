#include "emac_configuration.h"

void Emac_configuration::preamble(Preamble value)
{
    set(value, 0, 2);
}

Emac_configuration::Preamble Emac_configuration::preamble()
{
    return get<Preamble>(0, 2);
}

void Emac_configuration::receive_machine(bool value)
{
    set(value, 2, 1);
}

bool Emac_configuration::receive_machine()
{
    return get(2, 1);
}

void Emac_configuration::transmit_machine(bool value)
{
    set(value, 3, 1);
}

bool Emac_configuration::transmit_machine()
{
    return get(3, 1);
}

void Emac_configuration::defferal_check(bool value)
{
    set(value, 4, 1);
}

bool Emac_configuration::defferal_check()
{
    return get(4, 1);
}

void Emac_configuration::back_off_limit(Back_off_limit value)
{
    set(value, 5, 2);
}

Emac_configuration::Back_off_limit Emac_configuration::back_off_limit()
{
    return get<Back_off_limit>(5, 2);
}

void Emac_configuration::strip_pad_crc_all(bool value)
{
    set(value, 7, 1);
}

bool Emac_configuration::strip_pad_crc_all()
{
    return get(7, 1);
}

void Emac_configuration::link(bool value)
{
    set(value, 8, 1);
}

bool Emac_configuration::link()
{
    return get(8, 1);
}

void Emac_configuration::half_duplex_retransmission(bool value)
{
    set(!value, 9, 1);
}   

bool Emac_configuration::half_duplex_retransmission()
{
    return !get(9, 1);
}

void Emac_configuration::crc_check(bool value)
{
    set(value, 10, 1);
}

bool Emac_configuration::crc_check()
{
    return get(10, 1);
}

void Emac_configuration::duplex(Duplex value)
{
    set(value, 11, 1);
}

Emac_configuration::Duplex Emac_configuration::duplex()
{
    return get<Duplex>(11, 1);
}

void Emac_configuration::loopback(bool value)
{
    set(value, 12, 1);
}

bool Emac_configuration::loopback()
{
    return get(12, 1);
}

void Emac_configuration::half_duplex_reception(bool value)
{
    set(!value, 13, 1);
}

bool Emac_configuration::half_duplex_reception()
{
    return !get(13, 1);
}

void Emac_configuration::speed(Speed value)
{
    if (value == Speed::_1000_BASE_T)
    {
        set(false, 15, 1);
    }
    else
    {
        set(true, 15, 1);
        set(value, 14, 1);
    }
}

Emac_configuration::Speed Emac_configuration::speed()
{
    if (get(15, 1) == 0) return Speed::_1000_BASE_T;
    else return get<Speed>(14, 1);
}

void Emac_configuration::half_duplex_ignore_crs(bool value)
{
    set(value, 16, 1);
}

bool Emac_configuration::half_duplex_ignore_crs()
{
    return get(16, 1);
}

void Emac_configuration::interframe_gap(Interframe_gap value)
{
    set(value, 17, 3);
}

Emac_configuration::Interframe_gap Emac_configuration::interframe_gap()
{
    return get<Interframe_gap>(17, 3);
}

void Emac_configuration::jumbo_enable(bool value)
{
    set(value, 20, 1);
}

bool Emac_configuration::jumbo_enable()
{
    return get(20, 1);
}

void Emac_configuration::half_duplex_bursting(bool value)
{
    set(value, 21, 1);
}

bool Emac_configuration::half_duplex_bursting()
{
    return get(21, 1);
}

void Emac_configuration::transmitter_jabber(bool value) // inverse
{
    set(!value, 22, 1);
}

bool Emac_configuration::transmitter_jabber()
{
    return !get(22, 1);
}

void Emac_configuration::receiver_watchdog(bool value) // inverse
{
    set(!value, 23, 1);
}

bool Emac_configuration::receiver_watchdog()
{
    return !get(23, 1);
}

void Emac_configuration::phy_forwarding(bool value)
{
    set(value, 24, 1);
}

bool Emac_configuration::phy_forwarding()
{
    return get(24, 1);
}

void Emac_configuration::strip_crc_ethertype(bool value)
{
    set(value, 25, 1);
}

bool Emac_configuration::strip_crc_ethertype()
{
    return get(25, 1);
}

void Emac_configuration::giant_enable(bool value)
{
    set(value, 27, 1);
}

bool Emac_configuration::giant_enable()
{
    return get(27, 1);
}