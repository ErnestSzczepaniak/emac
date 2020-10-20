#include "emac_dma_descriptor_receive.h"
#include "emac_register.h"

namespace emac::dma::descriptor
{

Receive::Receive()
{
    for (int i = 0; i < 4; i++) _descriptor[i] = 0;
}

bool Receive::is_error_destination_address_filter()
{
    return _get<bool>(_descriptor, 30, 1);
}

int Receive::length()
{
    return _get<int>(_descriptor, 16, 14);
}

bool Receive::is_error_descriptor()
{
    return _get<bool>(_descriptor, 14, 1);
}

bool Receive::is_error_source_address_filter()
{
    return _get<bool>(_descriptor, 13, 1);
}

bool Receive::is_error_length()
{
    return _get<bool>(_descriptor, 12, 1);
}

bool Receive::is_error_overflow()
{
    return _get<bool>(_descriptor, 11, 1);
}

bool Receive::is_frame_vlan()
{
    return _get<bool>(_descriptor, 10, 1);
}

void Receive::first(bool value)
{
    _set(_descriptor, value, 9, 1);
}

bool Receive::is_first()
{
    return _get<bool>(_descriptor, 9, 1);
}

void Receive::last(bool value)
{
    _set(_descriptor, value, 8, 1);
}

bool Receive::is_last()
{
    return _get<bool>(_descriptor, 8, 1);
}

bool Receive::is_available_timestamp()
{
    return _get<bool>(_descriptor, 7, 1);
}

bool Receive::is_error_collision_late()
{
    return _get<bool>(_descriptor, 6, 1);
}

bool Receive::is_frame_ethernet()
{
    return _get<bool>(_descriptor, 5, 1);
}

bool Receive::is_error_watchdog_timeout()
{
    return _get<bool>(_descriptor, 4, 1);
}

bool Receive::is_error_receive()
{
    return _get<bool>(_descriptor, 3, 1);
}

bool Receive::is_error_dribble()
{
    return _get<bool>(_descriptor, 2, 1);
}

bool Receive::is_error_crc()
{
    return _get<bool>(_descriptor, 1, 1);
}

bool Receive::is_available_extended_status()
{
    return _get<bool>(_descriptor, 0, 1);
}

void Receive::ring_end(bool value)
{
    _set(_descriptor, value, 15, 1, 1);
}

bool Receive::ring_end()
{
    return _get<bool>(_descriptor, 15, 1, 1);
}

}; /* namespace: emac::dma::descriptor */
