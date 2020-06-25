#ifndef _configuration_h
#define _configuration_h

/**
 * @file	configuration.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

#include "register.h"

class Configuration : public Register<>
{
public:
    enum class Preamble : unsigned char 
    {
        SEVEN = 0,
        FIVE,
        THREE
    }; /* enum: Preamble */

    enum class Speed : unsigned char
    {
        _10,
        _100
    }; /* enum: Speed */

    enum class Interface : unsigned char 
    {
        GMII,
        MII
    }; /* enum: Interface */

    void preamble(Preamble value);
    Preamble preamble();

    void receive_machine(bool value);
    bool receive_machine();

    void transmit_machine(bool value);
    bool transmit_machine();

    void link(bool value);
    bool link();

    void full_duplex(bool value);
    bool full_duplex();

    void loopback(bool value);
    bool loopback();

    void speed(Speed value);
    Speed speed();

    void interface(Interface value);
    Interface interface();

    void bursting(bool value);
    bool bursting();

    void jabber(bool value);
    bool jabber();

    void watchdog(bool value);
    bool watchdog();

    void forwarding(bool value);
    bool forwarding();

}; /* class: Configuration */


#endif /* define: configuration_h */