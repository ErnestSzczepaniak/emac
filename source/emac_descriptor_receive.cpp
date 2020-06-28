#include "emac_descriptor_receive.h"

bool Emac_descriptor_receive::is_error_destination_address_filter()
{
    return get(30, 1);
}

int Emac_descriptor_receive::length()
{
    return get(16, 14);
}

bool Emac_descriptor_receive::is_error_descriptor()
{
    return get(14, 1);
}

bool Emac_descriptor_receive::is_error_source_address_filter()
{
    return get(13, 1);
}

bool Emac_descriptor_receive::is_error_length()
{
    return get(12, 1);
}

bool Emac_descriptor_receive::is_error_overflow()
{
    return get(11, 1);
}

bool Emac_descriptor_receive::is_frame_vlan()
{
    return get(10, 1);
}

void Emac_descriptor_receive::first(bool value)
{
    set(value, 9, 1);
}

bool Emac_descriptor_receive::is_first()
{
    return get(9, 1);
}

void Emac_descriptor_receive::last(bool value)
{
    set(value, 8, 1);
}

bool Emac_descriptor_receive::is_last()
{
    return get(8, 1);
}

bool Emac_descriptor_receive::is_available_timestamp()
{
    return get(7, 1);
}

bool Emac_descriptor_receive::is_error_collision_late()
{
    return get(6, 1);
}

bool Emac_descriptor_receive::is_frame_ethernet()
{
    return get(5, 1);
}

bool Emac_descriptor_receive::is_error_watchdog_timeout()
{
    return get(4, 1);
}

bool Emac_descriptor_receive::is_error_receive()
{
    return get(3, 1);
}

bool Emac_descriptor_receive::is_error_dribble()
{
    return get(2, 1);
}

bool Emac_descriptor_receive::is_error_crc()
{
    return get(1, 1);
}

bool Emac_descriptor_receive::is_available_extended_status()
{
    return get(0, 1);
}
