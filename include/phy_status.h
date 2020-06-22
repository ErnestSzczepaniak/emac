#ifndef _phy_status_h
#define _phy_status_h

/**
 * @file	phy_status.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

#include "register.h"

class Phy_status : public Register<>
{
public:
    enum class Speed : unsigned char 
    {
        _2_5,
        _25,
        _125
    }; /* enum: Speed */

    enum class Mode : unsigned char 
    {
        HALF_DUPLEX,
        FULL_DUPLEX
    }; /* enum: Mode */

    Mode mode();
    Speed speed();
    bool link();

}; /* class: Phy_status */

#endif /* define: phy_status_h */