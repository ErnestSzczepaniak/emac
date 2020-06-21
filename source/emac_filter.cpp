#include "emac_filter.h"

namespace emac::filter
{

Filter::Filter(unsigned int address) : Value(address)
{

}

void Filter::all(bool value)
{
    set(value, 0, 1);
}

bool Filter::all()
{
    return get(0, 1);
}

void Filter::type_unicast(Type value)
{
    set(value, 1, 1);    
}

Type Filter::type_unicast()
{
    return get<Type>(1, 1);
}

void Filter::type_multicast(Type value)
{
    set(value, 2, 1);
}

Type Filter::type_multicast()
{
    return get<Type>(2, 1);
}

void Filter::inverse_destination(bool value)
{
    set(value, 3, 1);
}

bool Filter::inverse_destination()
{
    return get(3, 1);
}

void Filter::multicast(bool value)
{
    set(!value, 4, 1);
}

bool Filter::multicast()
{
    return !get(4, 1);
}

void Filter::broadcast(bool value)
{
    set(value, 5, 1);
}

bool Filter::broadcast()
{
    return get(5, 1);
}

void Filter::control(Type_control value)
{
    set(value, 6, 2);
}

Type_control Filter::control()
{
    return get<Type_control>(6, 2);
}

void Filter::inverse_source(bool value)
{
    set(value, 8, 1);
}

bool Filter::inverse_source()
{
    return get(8, 1);
}

void Filter::source(bool value)
{
    set(value, 9, 1);
}

bool Filter::source()
{
    return get(9, 1);
}

void Filter::vlan(bool value)
{
    set(value, 16, 1);
}

bool Filter::vlan()
{
    return get(16, 1);
}

void Filter::non_ip(bool value)
{
    set(value, 20, 1);
}

bool Filter::non_ip()
{
    return get(20, 1);
}

void Filter::non_protocol(bool value)
{
    set(value, 21, 1);
}

bool Filter::non_protocol()
{
    return get(21, 1);
}

void Filter::enable(bool value)
{
    set(!value, 31, 1);
}

bool Filter::enable()
{
    return !get(31, 1);
}

}; /* namespace: emac::filter */
