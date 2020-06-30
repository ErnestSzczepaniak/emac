#ifndef _emac_interrupt_mask_h
#define _emac_interrupt_mask_h

/**
 * @file	emac_interrupt_mask.h
 * @author	en2
 * @date	30-06-2020
 * @brief	
 * @details	
**/

#include "emac_register.h"

class Emac_interrupt_mask : public Emac_register
{
public:
    Emac_interrupt_mask(unsigned int base);

    void rgmii(bool value);
    bool rgmii();


}; /* class: Emac_interrupt_mask */


#endif /* define: emac_interrupt_mask_h */