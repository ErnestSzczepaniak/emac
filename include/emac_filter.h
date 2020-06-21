#ifndef _emac_filter_h
#define _emac_filter_h

/**
 * @file	emac_filter.h
 * @author	en2
 * @date	21-06-2020
 * @brief	
 * @details	
**/

#include "emac_value.h"

namespace emac::filter
{

enum class Type : unsigned char 
{
    COMPARE,
    HASH
}; /* enum: Type */

enum class Type_control : unsigned char 
{
    ALL,
    EXCEPT_PAUSE,
    PASSED,
    FAILED
}; /* enum: Type_control */

class Filter : public value::Value
{
public:
    Filter(unsigned int address);

    void all(bool value);
    bool all();

    void type_unicast(Type value);
    Type type_unicast();

    void type_multicast(Type value);
    Type type_multicast();

    void inverse_destination(bool value);
    bool inverse_destination();

    void multicast(bool value);
    bool multicast();

    void broadcast(bool value);
    bool broadcast();

    void control(Type_control value);
    Type_control control();

    void inverse_source(bool value);
    bool inverse_source();

    void source(bool value);
    bool source();

    void vlan(bool value);
    bool vlan();

    void non_ip(bool value);
    bool non_ip();

    void non_protocol(bool value);
    bool non_protocol();

    void enable(bool value);
    bool enable();

}; /* class: Filter */

}; /* namespace: emac::filter */

#endif /* define: emac_filter_h */