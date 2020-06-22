#ifndef _emac_interrupt_mask_h
#define _emac_interrupt_mask_h

/**
 * @file	emac_interrupt_mask.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

#include "emac_value.h"

namespace emac::interrupt::mask
{

class Mask : public value::Value
{
public:
    Mask(unsigned int address);

    void rgmi(bool value);
    bool rgmi();
    
    bool link_status();
    bool autonegotiation();

    void timestamp(bool value);
    bool timestamp();

    void lpi(bool value);
    bool lpi();

}; /* class: Mask */

}; /* namespace: emac::interrupt::mask */

#endif /* define: emac_interrupt_mask_h */