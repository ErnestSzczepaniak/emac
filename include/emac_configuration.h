#ifndef _emac_configuration_h
#define _emac_configuration_h

/**
 * @file	emac_configuration.h
 * @author	en2
 * @date	21-06-2020
 * @brief	
 * @details	
**/

#include "emac_value.h"

namespace emac::configuration
{

enum class Preamble : unsigned char 
{
    SEVEN = 0,
    FIVE,
    THREE
}; /* enum: Preamble */

enum class Backoff_limit : unsigned char 
{
    MIN_10 = 0,
    MIN_8,
    MIN_4,
    MIN_1
}; /* enum: Backoff_limit */

enum class Tries : unsigned char 
{
    MULTIPLE = 0,
    ONE
}; /* enum: Tries */

enum class Speed : unsigned char 
{
    MBPS_10 = 0,
    MBPS_100
}; /* enum: Speed */

enum class Interface : unsigned char 
{
    GIGABIT = 0,
    SLOW_SPEED
}; /* enum: Interface */

enum class Gap : unsigned char 
{
    GAP_96 = 0,
    GAP_88,
    GAP_80,
    GAP_72,
    GAP_64,
    GAP_56,
    GAP_48,
    GAP_40
}; /* enum: Gap */

class Configuration : public value::Value
{
public:
    Configuration(unsigned int address);

    void preamble(Preamble value);
    Preamble preamble();

    void receive_state_machine(bool value);
    bool receive_state_machine();

    void transmit_state_machine(bool value);
    bool transmit_state_machine();

    void deferral_check(bool value);
    bool deferral_check();

    void backoff_limit(Backoff_limit value);
    Backoff_limit backoff_limit();
 
    void strip_by_size(bool value);
    bool strip_by_size();

    void link_up(bool value);
    bool link_up();

    void tries(Tries value);
    Tries tries();

    void checksum(bool value);
    bool checksum();

    void full_duplex(bool value);
    bool full_duplex();

    void loopback(bool value);
    bool loopback();

    void receive(bool value);
    bool receive();

    void speed(Speed value);
    Speed speed();

    void interface(Interface value);
    Interface interface();

    void report_carrier_sense(bool value);
    bool report_carrier_sense();

    void gap(Gap value);
    Gap gap();

    void report_jumbo_frames(bool value);
    bool report_jumbo_frames();

    void frame_burst(bool value);
    bool frame_burst();

    void timer_jabber(bool value);
    bool timer_jabber();

    void timer_watchdog(bool value);
    bool timer_watchdog();

    void phy_forwarding(bool value);
    bool phy_forwarding();

    void strip_by_type(bool value);
    bool strip_by_type();

    void giant_frames(bool value);
    bool giant_frames();

}; /* class: Configuration */

}; /* namespace: emac::configuration */

#endif /* define: emac_configuration_h */