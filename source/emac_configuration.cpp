#include "emac_configuration.h"

namespace emac::configuration
{

Configuration::Configuration(unsigned int address) : Value(address)
{

}

void Configuration::preamble(Preamble value)
{
    set(value, 0, 2);
}

Preamble Configuration::preamble()
{
    return get<Preamble>(0, 2);
}

void Configuration::receive_state_machine(bool value)
{
    set(value, 2, 1);
}

bool Configuration::receive_state_machine()
{
    return get(2, 1);
}

void Configuration::transmit_state_machine(bool value)
{
    set(value, 3, 1);
}

bool Configuration::transmit_state_machine()
{
    return get(3, 1);
}

void Configuration::deferral_check(bool value)
{
    set(value, 4, 1);
}

bool Configuration::deferral_check()
{
    return get(4, 1);
}

void Configuration::backoff_limit(Backoff_limit value)
{
    set(value, 5, 2);
}

Backoff_limit Configuration::backoff_limit()
{
    return get<Backoff_limit>(5, 2);
}

void Configuration::strip_by_size(bool value)
{
    set(value, 7, 1);
}

bool Configuration::strip_by_size()
{
    return get(7, 1);
}

void Configuration::link_up(bool value)
{
    set(value, 8, 1);
}

bool Configuration::link_up()
{
    return get(8, 1);
}

void Configuration::tries(Tries value)
{
    set(value, 9, 1);
}

Tries Configuration::tries()
{
    return get<Tries>(9, 1);
}

void Configuration::checksum(bool value)
{
    set(value, 10, 1);
}

bool Configuration::checksum()
{
    return get(10, 1);
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

void Configuration::receive(bool value)
{
    set(!value, 13, 1);
}

bool Configuration::receive()
{
    return !get(13, 1);
}

void Configuration::speed(Speed value)
{
    set(value, 14, 1);
}

Speed Configuration::speed()
{
    return get<Speed>(14, 1);
}

void Configuration::interface(Interface value)
{
    set(value, 15, 1);
}

Interface Configuration::interface()
{
    return get<Interface>(15, 1);
}

void Configuration::report_carrier_sense(bool value)
{
    set(!value, 16, 1);
}

bool Configuration::report_carrier_sense()
{
    return !get(16, 1);
}

void Configuration::gap(Gap value)
{
    set(value, 17, 3);
}

Gap Configuration::gap()
{
    return get<Gap>(17, 3);
}

void Configuration::report_jumbo_frames(bool value)
{
    set(!value, 20, 1);
}

bool Configuration::report_jumbo_frames()
{
    return !get(20, 1);
}

void Configuration::frame_burst(bool value)
{
    set(value, 21, 1);
}

bool Configuration::frame_burst()
{
    return get(21, 1);
}

void Configuration::timer_jabber(bool value)
{
    set(!value, 22, 1);
}

bool Configuration::timer_jabber()
{
    return !get(22, 1);
}

void Configuration::timer_watchdog(bool value)
{
    set(!value, 23, 1);
}

bool Configuration::timer_watchdog()
{
    return !get(23, 1);
}

void Configuration::phy_forwarding(bool value)
{
    set(value, 24, 1);
}

bool Configuration::phy_forwarding()
{
    return get(24, 1);
}

void Configuration::strip_by_type(bool value)
{
    set(value, 25, 1);
}

bool Configuration::strip_by_type()
{
    return get(25, 1);
}

void Configuration::giant_frames(bool value)
{
    set(value, 27, 1);
}

bool Configuration::giant_frames()
{
    return get(27, 1);
}
 
}; /* namespace: emac::configuration */



