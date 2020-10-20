#ifndef _emac_interrupt_mask_h
#define _emac_interrupt_mask_h

/**
 * @file	emac_interrupt_mask.h
 * @author	en2
 * @date	06-10-2020
 * @brief	
 * @details	
**/

namespace emac::interrupt::mask
{

static constexpr auto base = 0xff70203c;

void rgmii_link_changed_enable(bool value);

}; /* namespace: emac::interrupt::mask */


#endif /* define: emac_interrupt_mask_h */