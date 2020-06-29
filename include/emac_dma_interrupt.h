#ifndef _emac_dma_interrupt_h
#define _emac_dma_interrupt_h

/**
 * @file	emac_dma_interrupt.h
 * @author	en2
 * @date	29-06-2020
 * @brief	
 * @details	
**/

#include "emac_register.h"

class Emac_dma_interrupt : public Emac_register
{
public:
    Emac_dma_interrupt(unsigned int base);
    
    void transmit(bool value);
    bool transmit();

    void transmit_stopped(bool value);
    bool transmit_stopped();

    void transmit_buffer_unavailable(bool value);
    bool transmit_buffer_unavailable();
    
    void transmit_jabber_timeout(bool value);
    bool transmit_jabber_timeout();

    void transmit_overflow(bool value);
    bool transmit_overflow();

    void transmit_underflow(bool value);
    bool transmit_underflow();

    void receive(bool value);
    bool receive();

    void receive_buffer_unavailable(bool value);
    bool receive_buffer_unavailable();

    void receive_stopped(bool value);
    bool receive_stopped();

    void receive_watchdog(bool value);
    bool receive_watchdog();

    void transmit_early(bool value);
    bool transmit_early();

    void error_bus(bool value);
    bool error_bus();

    void receive_early(bool value);
    bool receive_early();

    void abnormal(bool value);
    bool abnormal();

    void normal(bool value);
    bool normal();


}; /* class: Emac_dma_interrupt */


#endif /* define: emac_dma_interrupt_h */