#ifndef _emac_h
#define _emac_h

/**
 * @file	emac.h
 * @author	en2
 * @date	23-06-2020
 * @brief	
 * @details	
**/

#include "emac_phy.h"


class Emac
{
public:
    Emac(unsigned int base);

    Emac_phy * phy;

}; /* class: Emac */


#endif /* define: emac_h */