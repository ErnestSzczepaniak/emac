#ifndef _emac_phy_h
#define _emac_phy_h

/**
 * @file	emac_phy.h
 * @author	en2
 * @date	23-06-2020
 * @brief	
 * @details	
**/

#include "register.h"

class Emac_phy : public Register<2>
{
public:
    enum class Speed : unsigned char
    {
        DIV_42,
        DIV_62,
        DIV_16,
        DIV_26,
        DIV_102,
        DIV_124,
        DIV_4,
        DIV_6,
        DIV_8,
        DIV_10,
        DIV_12,
        DIV_14,
        DIV_15, // ? czemu jest taki sam divider 
        DIV_18
    }; /* enum: Speed */

    void write(int device, Speed speed, int address, unsigned short int value);
    unsigned short int read(int device, Speed speed, int address);

}; /* class: Emac_phy */

#endif /* define: emac_phy_h */