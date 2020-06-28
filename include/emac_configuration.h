#ifndef _emac_configuration_h
#define _emac_configuration_h

/**
 * @file	emac_configuration.h
 * @author	en2
 * @date	27-06-2020
 * @brief	
 * @details	
**/

#include "emac_register.h"

class Emac_configuration : public Emac_register
{
public:
    enum class Preamble : unsigned char 
    {
        SEVEN = 0,
        FIVE,
        THREE
    }; /* enum: Preamble */

    enum class Back_off_limit : unsigned char
    {
        _10,
        _8,
        _4,
        _1
    }; /* enum: Back_off_limit */

    enum class Duplex : unsigned char
    {
        HALF,
        FULL
    }; /* enum: Duplex */

    enum class Speed : unsigned char
    {
        _10_BASE_T,
        _100_BASE_T,
        _1000_BASE_T
    }; /* enum: Speed */

    enum class Interframe_gap : unsigned char
    {
        _96,
        _88,
        _80,
        _72,
        _64,
        _56,
        _48,
        _40
    }; /* enum: Interframe_gap */

    Emac_configuration(unsigned int base);

    void preamble(Preamble value);
    Preamble preamble();

    void receive_machine(bool value);
    bool receive_machine();

    void transmit_machine(bool value);
    bool transmit_machine();

    void defferal_check(bool value);
    bool defferal_check();

    void back_off_limit(Back_off_limit value);
    Back_off_limit back_off_limit();

    void strip_pad_crc_all(bool value);
    bool strip_pad_crc_all();

    void link(bool value);
    bool link();

    void half_duplex_retransmission(bool value);
    bool half_duplex_retransmission();

    void crc_check(bool value);
    bool crc_check();

    void duplex(Duplex value);
    Duplex duplex();

    void loopback(bool value);
    bool loopback();

    void half_duplex_reception(bool value);
    bool half_duplex_reception();

    void speed(Speed value);
    Speed speed();

    void half_duplex_ignore_crs(bool value);
    bool half_duplex_ignore_crs();

    void interframe_gap(Interframe_gap value);
    Interframe_gap interframe_gap();

    void jumbo_enable(bool value);
    bool jumbo_enable();

    void half_duplex_bursting(bool value);
    bool half_duplex_bursting();

    void transmitter_jabber(bool value);
    bool transmitter_jabber();

    void receiver_watchdog(bool value);
    bool receiver_watchdog();

    void phy_forwarding(bool value);
    bool phy_forwarding();

    void strip_crc_ethertype(bool value);
    bool strip_crc_ethertype();

    void giant_enable(bool value);
    bool giant_enable();

}; /* class: Emac_configuration */

#endif /* define: emac_configuration_h */