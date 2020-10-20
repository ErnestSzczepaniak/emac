#ifndef _emac_dma_status_h
#define _emac_dma_status_h

/**
 * @file	emac_dma_status.h
 * @author	en2
 * @date	06-10-2020
 * @brief	
 * @details	
**/

namespace emac::dma::status
{

static constexpr auto base = 0xff703014;

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

bool transmission_complete_get();
bool transmission_stopped_get();
bool next_descriptor_transmit_owned_by_host_get();
bool jabber_timer_expired_get();
bool buffer_overflow_get();
bool buffer_underflow_get();
bool reception_complete_get();
bool next_descriptor_receive_owned_by_host_get();
bool state_stopped_get();
bool jumbo_received_get();
bool fifo_transfered_get();
bool error_bus_get();
bool packed_filled_get();

void abnormal_interrupt_summary_set(bool value);
bool abnormal_interrupt_summary_get();

void normal_interrupt_summary_set(bool value);
bool normal_interrupt_summary_get();

State_receive state_receive_get();
State_transmit state_transmi_get();

bool error_bus_type_get();
bool interrupt_gmac_line_get();
bool interrupt_gmac_mmc_get();
bool interrupt_timestamp_get();
bool interrupt_gmac_lpi_get();

}; /* namespace: emac::dma::status */

#endif /* define: emac_dma_status_h */