#ifndef _emac_h
#define _emac_h

/**
 * @file	emac.h
 * @author	en2
 * @date	21-06-2020
 * @brief	
 * @details	
**/

#include "emac_phy.h"

namespace emac
{

class Emac
{
public:
    Emac(unsigned int address);

    phy::Phy phy;

}; /* class: Emac */

}; /* namespace: emac */

#endif /* define: emac_h */