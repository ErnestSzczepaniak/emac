#include "configuration.h"

void Configuration::preamble(Preamble value)
{
    set(value, 0, 2);
}

Configuration::Preamble Configuration::preamble()
{
    return get<Preamble>(0, 2);
}

void Configuration::receive_machine(bool value)
{
    set(value, 2, 1);
}

bool Configuration::receive_machine()
{
    return get(2, 1);
}

void Configuration::transmit_machine(bool value)
{
    set(value, 3, 1);
}

bool Configuration::transmit_machine()
{
    return get(3, 1);
}

void Configuration::link(bool value)
{
    set(value, 8, 1);
}

bool Configuration::link()
{
    return get(8, 1);
}

void Configuration::full_duplex(bool value)
{
    set(value, 11, 1);
}

bool Configuration::full_duplex()
{
    return get(11, 1);
}

void Configuration::loopback(bool value)
{
    set(value, 12, 1);
}

bool Configuration::loopback()
{
    return get(12, 1);
}

void Configuration::speed(Speed value)
{
    set(value, 14, 1);
}

Configuration::Speed Configuration::speed()
{
    return get<Speed>(14, 1);
}

void Configuration::interface(Interface value)
{
    set(value, 15, 1);
}

Configuration::Interface Configuration::interface()
{
    return get<Interface>(15, 1);
}
void Configuration::bursting(bool value)
{
    set(value, 21, 1);
}

bool Configuration::bursting()
{
    return get(21, 1);
}

void Configuration::jabber(bool value) // inverse
{
    set(!value, 22, 1);
}

bool Configuration::jabber()
{
    return !get(22, 1);
}

void Configuration::watchdog(bool value) // inverse
{
    set(!value, 23, 1);
}

bool Configuration::watchdog()
{
    return !get(23, 1);
}

void Configuration::forwarding(bool value)
{
    set(value, 24, 1);
}

bool Configuration::forwarding()
{
    return get(24, 1);
}