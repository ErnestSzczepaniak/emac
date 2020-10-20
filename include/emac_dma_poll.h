#ifndef _emac_dma_poll_h
#define _emac_dma_poll_h

/**
 * @file	emac_dma_poll.h
 * @author	en2
 * @date	07-10-2020
 * @brief	
 * @details	
**/

namespace emac::dma::poll
{

static constexpr auto base_transmitt = 0xff703004;
static constexpr auto base_receive = 0xff703008;

void transmitt();
void receive();

}; /* namespace: emac::dma::poll */


#endif /* define: emac_dma_poll_h */