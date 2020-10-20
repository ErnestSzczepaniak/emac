#ifndef _emac_interrupt_status_h
#define _emac_interrupt_status_h

/**
 * @file	emac_interrupt_status.h
 * @author	en2
 * @date	06-10-2020
 * @brief	
 * @details	
**/

namespace emac::interrupt::status
{

static constexpr auto base = 0xff702038;

bool rgmii_link_changed_get();

}; /* namespace: emac::interrupt::status */


#endif /* define: emac_interrupt_status_h */