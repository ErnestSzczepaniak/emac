#ifndef _emac_interrupt_status_h
#define _emac_interrupt_status_h

/**
 * @file	emac_interrupt_status.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

#include "emac_value.h"

namespace emac::interrupt::status
{

class Status : public value::Value
{
public:
    Status(unsigned int address);

}; /* class: Status */

}; /* namespace: emac::interrupt::status */

#endif /* define: emac_interrupt_status_h */