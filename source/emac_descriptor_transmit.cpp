#include "emac_descriptor_transmit.h"



void Emac_descriptor_transmit::enable_interrupt(bool value)
{
    set(value, 30, 1);
}

bool Emac_descriptor_transmit::is_enabled_interrupt()
{
    return get(30, 1);
}

void Emac_descriptor_transmit::last(bool value)
{
    set(value, 29, 1, 0);
}

bool Emac_descriptor_transmit::is_last()
{
    return get(29, 1, 0);
}

void Emac_descriptor_transmit::first(bool value)
{
    set(value, 28, 1, 0);
}

bool Emac_descriptor_transmit::is_first()
{
    return get(28, 1, 0);
}

void Emac_descriptor_transmit::enable_crc(bool value) // inverse
{
    set(!value, 27, 1, 0);
}   

bool Emac_descriptor_transmit::is_enabled_crc()
{
    return !get(27, 1, 0);
}

void Emac_descriptor_transmit::enable_padding(bool value) //inverse
{
    set(!value, 26, 1, 0);
}

bool Emac_descriptor_transmit::is_enabled_padding()
{
    return !get(26, 1, 0);
}

void Emac_descriptor_transmit::enable_timestamp(bool value)
{
    set(value, 25, 1);
}

bool Emac_descriptor_transmit::is_enabled_timestamp()
{
    return get(25, 1);
}

void Emac_descriptor_transmit::crc_offload(Crc_offload value)
{
    set(value, 22, 2, 0);
}

Emac_descriptor_transmit::Crc_offload Emac_descriptor_transmit::crc_offload()
{
    return get<Crc_offload>(22, 2, 0);
}

void Emac_descriptor_transmit::ring_end(bool value)
{
    return set(value, 21, 1, 0);
}

bool Emac_descriptor_transmit::is_ring_end()
{
    return get(21, 1, 0);
}

void Emac_descriptor_transmit::chained(bool value)
{
    set(value, 20, 1, 0);
}

bool Emac_descriptor_transmit::is_chained()
{
    return get(20, 1, 0);
}

bool Emac_descriptor_transmit::is_available_timestamp()
{
    return get(17, 1);
}

bool Emac_descriptor_transmit::is_error_header()
{
    return get(16, 1);
}

bool Emac_descriptor_transmit::is_error_jabber_timeout()
{
    return get(14, 1);
}

bool Emac_descriptor_transmit::is_frame_flushed()
{
    return get(13, 1);
}

bool Emac_descriptor_transmit::is_error_ip_payload()
{
    return get(12, 1);
}

bool Emac_descriptor_transmit::is_error_carrier_loss()
{
    return get(11, 1);
}

bool Emac_descriptor_transmit::is_error_carrier_none()
{
    return get(10, 1);
}

bool Emac_descriptor_transmit::is_error_collision_late()
{
    return get(9, 1);
}

bool Emac_descriptor_transmit::is_error_collision_excessive()
{
    return get(8, 1);
}

bool Emac_descriptor_transmit::is_frame_vlan()
{
    return get(7, 1);
}

int Emac_descriptor_transmit::count_collision()
{
    return get(3, 4);
}

bool Emac_descriptor_transmit::is_error_deferral_excessive()
{
    return get(2, 1);
}

bool Emac_descriptor_transmit::is_error_underflow()
{
    return get(1, 1);
}

bool Emac_descriptor_transmit::is_error_half_duplex_deferred()
{
    return get(0, 1);
}