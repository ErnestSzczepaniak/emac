#include "emac_dma_descriptor_transmitt.h"
#include "emac_register.h"

namespace emac::dma::descriptor
{

void Transmitt::enable_interrupt(bool value)
{
    _set(_descriptor, value, 30, 1);
}

bool Transmitt::is_enabled_interrupt()
{
    return _get<bool>(_descriptor, 30, 1);
}

void Transmitt::last(bool value)
{
    _set(_descriptor, value, 29, 1, 0);
}

bool Transmitt::is_last()
{
    return _get<bool>(_descriptor, 29, 1, 0);
}

void Transmitt::first(bool value)
{
    _set(_descriptor, value, 28, 1, 0);
}

bool Transmitt::is_first()
{
    return _get<bool>(_descriptor, 28, 1, 0);
}

void Transmitt::enable_crc(bool value) // inverse
{
    _set(_descriptor, !value, 27, 1, 0);
}   

bool Transmitt::is_enabled_crc()
{
    return !_get<bool>(_descriptor, 27, 1, 0);
}

void Transmitt::enable_padding(bool value) //inverse
{
    _set(_descriptor, !value, 26, 1, 0);
}

bool Transmitt::is_enabled_padding()
{
    return !_get<bool>(_descriptor, 26, 1, 0);
}

void Transmitt::enable_timestamp(bool value)
{
    _set(_descriptor, value, 25, 1);
}

bool Transmitt::is_enabled_timestamp()
{
    return _get<bool>(_descriptor, 25, 1);
}

void Transmitt::crc_offload(Crc_offload value)
{
    _set(_descriptor, value, 22, 2, 0);
}

Transmitt::Crc_offload Transmitt::crc_offload()
{
    return _get<Crc_offload>(_descriptor, 22, 2, 0);
}

void Transmitt::ring_end(bool value)
{
    return _set(_descriptor, value, 21, 1, 0);
}

bool Transmitt::is_ring_end()
{
    return _get<bool>(_descriptor, 21, 1, 0);
}

void Transmitt::chained(bool value)
{
    _set(_descriptor, value, 20, 1, 0);
}

bool Transmitt::is_chained()
{
    return _get<bool>(_descriptor, 20, 1, 0);
}

bool Transmitt::is_available_timestamp()
{
    return _get<bool>(_descriptor, 17, 1);
}

bool Transmitt::is_error_header()
{
    return _get<bool>(_descriptor, 16, 1);
}

bool Transmitt::is_error_jabber_timeout()
{
    return _get<bool>(_descriptor, 14, 1);
}

bool Transmitt::is_frame_flushed()
{
    return _get<bool>(_descriptor, 13, 1);
}

bool Transmitt::is_error_ip_payload()
{
    return _get<bool>(_descriptor, 12, 1);
}

bool Transmitt::is_error_carrier_loss()
{
    return _get<bool>(_descriptor, 11, 1);
}

bool Transmitt::is_error_carrier_none()
{
    return _get<bool>(_descriptor, 10, 1);
}

bool Transmitt::is_error_collision_late()
{
    return _get<bool>(_descriptor, 9, 1);
}

bool Transmitt::is_error_collision_excessive()
{
    return _get<bool>(_descriptor, 8, 1);
}

bool Transmitt::is_frame_vlan()
{
    return _get<bool>(_descriptor, 7, 1);
}

int Transmitt::count_collision()
{
    return _get<bool>(_descriptor, 3, 4);
}

bool Transmitt::is_error_deferral_excessive()
{
    return _get<bool>(_descriptor, 2, 1);
}

bool Transmitt::is_error_underflow()
{
    return _get<bool>(_descriptor, 1, 1);
}

bool Transmitt::is_error_half_duplex_deferred()
{
    return _get<bool>(_descriptor, 0, 1);
}

}; /* namespace: emac::dma::descriptor */
