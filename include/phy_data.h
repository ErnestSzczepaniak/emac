#ifndef _phy_data_h
#define _phy_data_h

/**
 * @file	phy_data.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

#include "register.h"

class Phy_data : public Register<>
{
public:
    unsigned short int get();
    void set(unsigned short int value);

}; /* class: Phy_data */

#endif /* define: phy_data_h */