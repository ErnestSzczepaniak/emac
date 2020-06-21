#ifndef _emac_phy_data_h
#define _emac_phy_data_h

/**
 * @file	emac_phy_data.h
 * @author	en2
 * @date	21-06-2020
 * @brief	
 * @details	
**/

#include "emac_value.h"

namespace emac::phy::data
{

class Data : public value::Value
{
public:
    Data(unsigned int address);
    
    void set(unsigned short int value);
    unsigned short int get();

}; /* class: Data */

}; /* namespace: emac::phy::data */

#endif /* define: emac_phy_data_h */