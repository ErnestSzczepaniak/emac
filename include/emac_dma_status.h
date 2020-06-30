#ifndef _emac_dma_status_h
#define _emac_dma_status_h

/**
 * @file	emac_dma_status.h
 * @author	en2
 * @date	28-06-2020
 * @brief	
 * @details	
**/

#include "emac_register.h"

class Emac_dma_status : Emac_register
{
public:
    enum class State_receive : unsigned char
    {
        STOPPED_RESET_OR_COMMAND,
        RUNNING_DESCRIPTOR_FETCHING,
        RESERVED,
        RUNNING_WAITING_FOR_RECEIVE,
        SUSPENDED_DESCRIPTOR_UNAVAILABLE,
        RUNNING_DESCRIPTOR_CLOSING,
        WRITING_TIMESTAMP, 
        WRITING_PACKET_TO_MEMORY
    }; /* enum: State_receive */

    enum class State_transmit : unsigned char
    {
        STOPPED_RESET_OR_COMMAND,
        RUNNING_DESCRIPTOR_FETCHING,
        RUNNING_WAITING_FOR_STATUS,
        RUNNING_READING_FROM_MEMORY,
        WRITING_TIMESTAMP,
        RESERVED,
        SUSPENDED_DESCRIPTOR_UNAVAILABLE,
        RUNNING_DESCRIPTOR_CLOSING
    }; /* enum: State_transmit */

    Emac_dma_status(unsigned int base);

    bool transmission_complete();
    bool transmission_stopped();
    bool next_descriptor_transmit_owned_by_host();
    bool jabber_timer_expired();
    bool buffer_overflow();
    bool buffer_underflow();
    bool reception_complete();
    bool next_descriptor_receive_owned_by_host();
    bool state_stopped();
    bool jumbo_received();
    bool fifo_transfered();
    bool error_bus();
    bool packed_filled();

    void abnormal_interrupt_summary(bool value);
    bool abnormal_interrupt_summary();

    void normal_interrupt_summary(bool value);
    bool normal_interrupt_summary();

    State_receive state_receive();
    State_transmit state_transmi();
    bool error_bus_type();
    bool interrupt_gmac_line();
    bool interrupt_gmac_mmc();
    bool interrupt_timestamp();
    bool interrupt_gmac_lpi();

}; /* class: Emac_dma_status */

#endif /* define: emac_dma_status_h */