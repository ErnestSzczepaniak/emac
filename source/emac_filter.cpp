#include "emac_filter.h"

void Emac_filter::all_pass(bool value)
{
    set(value, 0, 1);
}

bool Emac_filter::all_pass()
{
    return get(0, 1);
}

void Emac_filter::destination_unicast_type(Type value)
{
    set(value, 1, 1);
}

Emac_filter::Type Emac_filter::destination_unicast_type()
{
    return get<Type>(1, 1);
}

void Emac_filter::destination_multicast_type(Type value)
{
    set(value, 2, 1);
}

Emac_filter::Type Emac_filter::destination_multicast_type()
{
    return get<Type>(2, 1);
}

void Emac_filter::destination_invert(bool value)
{
    set(value, 3, 1);
}

bool Emac_filter::destination_invert()
{
    return get(3, 1);
}

void Emac_filter::destination_multicast(bool value) //invers
{
    set(!value, 4, 1);
}

bool Emac_filter::destination_multicast()
{
    return !get(4, 1);
}

void Emac_filter::broadcast(bool value)
{
    set(value, 5, 1);
}

bool Emac_filter::broadcast()
{
    return get(5, 1);
}

void Emac_filter::control(Control value)
{
    set(value, 6, 2);
}

Emac_filter::Control Emac_filter::control()
{
    return get<Control>(6, 2);
}

void Emac_filter::source_invert(bool value)
{
    set(value, 8, 1);
}

bool Emac_filter::source_invert()
{
    return get(8, 1);
}

void Emac_filter::source(bool value)
{
    set(value, 9, 1);
}

bool Emac_filter::source()
{
    return get(9, 1);
}

void Emac_filter::source_type(Type value)
{
    set(value, 10, 1);
}

Emac_filter::Type Emac_filter::source_type()
{
    return get<Type>(10, 1);
}

void Emac_filter::non_vlan(bool value)
{
    set(value, 16, 1);
}

bool Emac_filter::non_vlan()
{
    return get(16, 1);
}

void Emac_filter::non_layer(bool value)
{
    set(value, 20, 1);
}

bool Emac_filter::non_layer()
{
    return get(20, 1);
}

void Emac_filter::non_protocol(bool value)
{
    set(value, 21, 1);
}

bool Emac_filter::non_protocol()
{
    return get(21, 1);
}

void Emac_filter::all_receive(bool value)
{
    set(value, 31, 1);
}

bool Emac_filter::all_receive()
{
    return get(31, 1);
}