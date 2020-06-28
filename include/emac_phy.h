#ifndef _emac_phy_h
#define _emac_phy_h

/**
 * @file	emac_phy.h
 * @author	en2
 * @date	23-06-2020
 * @brief	
 * @details	
**/

#include "emac_register.h"

class Emac_phy : public Emac_register
{
public:
    enum class Speed : unsigned char
    {
        L4_60_100_MDC_L4_42,
        L4_100_150_MDC_L4_62,
        L4_25_35_MDC_L4_16,
        L4_35_60_MDC_L4_26,
        L4_150_250_MDC_L4_102,
        L4_250_300_MDC_L4_124,
        L4_4,
        L4_6,
        L4_8,
        L4_10,
        L4_12,
        L4_14,
        L4_16,
        L4_18
    }; /* enum: Speed */

    Emac_phy(unsigned int base);

    void device(int value);
    int device();
 
    void speed(Speed value);
    Speed speed();

    unsigned short int read(int address);
    void write(int address, unsigned short int value);

private:
    Speed _speed;
    int _device;

}; /* class: Emac_phy */

#endif /* define: emac_phy_h */