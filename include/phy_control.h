#ifndef _phy_control_h
#define _phy_control_h

/**
 * @file	phy_control.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

#include "register.h"

class Phy_control : public Register<>
{
public:
    enum class Direction : unsigned char 
    {
        READ,
        WRITE
    }; /* enum: Direction */

    void busy(bool value);
    bool busy();

    void direction(Direction value);
    Direction direction();

    void number_register(int value);
    int number_register();

    void number_device(int value);
    int number_device();
    
}; /* class: Phy_control */


#endif /* define: phy_control_h */