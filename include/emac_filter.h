#ifndef _emac_filter_h
#define _emac_filter_h

/**
 * @file	emac_filter.h
 * @author	en2
 * @date	27-06-2020
 * @brief	
 * @details	
**/

#include "emac_register.h"

class Emac_filter : public Emac_register
{
public:
    enum class Type : unsigned char
    {
        COMPARE,
        HASH
    }; /* enum: Type */

    enum class Control : unsigned char
    {
        ALL,
        PAUSE,
        PASSED_ADDRESS_FILTERING,
        FAILED_ADDRESS_FILTERING
    }; /* enum: Control */

    Emac_filter(unsigned int base);

    void all_pass(bool value);
    bool all_pass();

    void destination_unicast_type(Type value);
    Type destination_unicast_type();

    void destination_multicast_type(Type value);
    Type destination_multicast_type();

    void destination_invert(bool value);
    bool destination_invert();

    void destination_multicast(bool value); //inverse
    bool destination_multicast();

    void broadcast(bool value);
    bool broadcast();

    void control(Control value);
    Control control();

    void source_invert(bool value);
    bool source_invert();

    void source(bool value);
    bool source();

    void source_type(Type value);
    Type source_type();

    void non_vlan(bool value);
    bool non_vlan();

    void non_layer(bool value);
    bool non_layer();

    void non_protocol(bool value);
    bool non_protocol();

    void all_receive(bool value);
    bool all_receive();

}; /* class: Emac_filter */


#endif /* define: emac_filter_h */