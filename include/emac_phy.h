#ifndef _emac_phy_h
#define _emac_phy_h

/**
 * @file	emac_phy.h
 * @author	en2
 * @date	21-06-2020
 * @brief	
 * @details	
**/

#include "emac_phy_address.h"
#include "emac_phy_data.h"

namespace emac::phy
{

class Phy
{
public:
    Phy(unsigned int address);

    address::Address address;
    data::Data data;

}; /* class: Phy */

}; /* namespace: emac::phy */

#endif /* define: emac_phy_h */