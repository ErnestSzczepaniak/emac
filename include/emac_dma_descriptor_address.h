#ifndef _emac_dma_descriptor_address_h
#define _emac_dma_descriptor_address_h

/**
 * @file	emac_dma_descriptor_address.h
 * @author	en2
 * @date	07-10-2020
 * @brief	
 * @details	
**/

namespace emac::dma::descriptor::address
{

static constexpr auto base_receive = 0xff70300c;
static constexpr auto base_transmitt = 0xff703010;

void receive_set(void * value);
void transmit_set(void * value);

}; /* namespace: emac::dma::descriptor::address */


#endif /* define: emac_dma_descriptor_address_h */