#ifndef _emac_interrupt_status_h
#define _emac_interrupt_status_h

/**
 * @file	emac_interrupt_status.h
 * @author	en2
 * @date	30-06-2020
 * @brief	
 * @details	
**/

#include "emac_register.h"

class Emac_interrupt_status : public Emac_register
{
public:
    Emac_interrupt_status(unsigned int base);

    bool rgmii();

}; /* class: Emac_interrupt_status */


#endif /* define: emac_interrupt_status_h */