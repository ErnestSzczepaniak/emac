#ifndef _emac_phy_address_h
#define _emac_phy_address_h

/**
 * @file	emac_phy_address.h
 * @author	en2
 * @date	21-06-2020
 * @brief	
 * @details	
**/

#include "emac_value.h"

namespace emac::phy::address
{

enum class Operation : unsigned char 
{
    READ,
    WRITE
}; /* enum: Operation */

enum class Speed : unsigned char 
{
    L4_60_100_MDC_42,
    L4_100_150_MDC_62,
    L4_25_35_MDC_16,
    L4_35_60_MDC_26,
    L4_150_250_MDC_102,
    L4_250_300_MDC_124,
    L4_4,
    L4_6,
    L4_8,
    L4_10,
    L4_12,
    L4_14,
    L4_16,
    L4_18
}; /* enum: Speed */

class Address : public value::Value
{
public:
    Address(unsigned char address);

    void busy(bool value);
    bool busy();

    void operation(Operation value);
    Operation operation();
    
    void speed(Speed value);
    Speed speed();

    void number(int value);
    int number();

    void device(int value);
    int device();

}; /* class: Address */

}; /* namespace: emac::phy::address */

#endif /* define: emac_phy_address_h */