#ifndef _emac_dma_interrupt_h
#define _emac_dma_interrupt_h

/**
 * @file	emac_dma_interrupt.h
 * @author	en2
 * @date	06-10-2020
 * @brief	
 * @details	
**/

namespace emac::dma::interrupt
{

static constexpr auto base = 0xff70301c;

void transmit_enable(bool value);
void transmit_stopped_enable(bool value);
void transmit_buffer_unavailable_enable(bool value);
void transmit_jabber_timeout_enable(bool value);
void transmit_overflow_enable(bool value);
void transmit_underflow_enable(bool value);
void receive_enable(bool value);
void receive_buffer_unavailable_enable(bool value);
void receive_stopped_enable(bool value);
void receive_watchdog_enable(bool value);
void transmit_early_enable(bool value);
void error_bus_enable(bool value);
void receive_early_enable(bool value);
void abnormal_enable(bool value);
void normal_enable(bool value);

}; /* namespace: emac::dma::interrupt */


#endif /* define: emac_dma_interrupt_h */