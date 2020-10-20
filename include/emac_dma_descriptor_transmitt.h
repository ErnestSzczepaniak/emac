#ifndef _emac_dma_descriptor_transmitt_h
#define _emac_dma_descriptor_transmitt_h

/**
 * @file	emac_dma_descriptor_transmitt.h
 * @author	en2
 * @date	07-10-2020
 * @brief	
 * @details	
**/

#include "emac_dma.h"

namespace emac::dma::descriptor
{

class Transmitt : public Descriptor
{
public:
    enum class Crc_offload : unsigned char 
    {
        NONE,
        IP_HEADER,
        IP_HEADER_PAYLOAD,
        IP_HEADER_PAYLOAD_PSEUDOHEADER
    }; /* enum: Crc_insertion */

    void enable_interrupt(bool value);
    bool is_enabled_interrupt();

    void last(bool value);
    bool is_last();
    void first(bool value);
    bool is_first();

    void enable_crc(bool value);
    bool is_enabled_crc();

    void enable_padding(bool value);
    bool is_enabled_padding();

    void enable_timestamp(bool value);
    bool is_enabled_timestamp();

    void crc_offload(Crc_offload value);
    Crc_offload crc_offload();

    void ring_end(bool value);
    bool is_ring_end();

    void chained(bool value);
    bool is_chained();

    bool is_available_timestamp();
    bool is_error_header();
    bool is_error_jabber_timeout();
    bool is_frame_flushed();
    bool is_error_ip_payload();
    bool is_error_carrier_loss();
    bool is_error_carrier_none();
    bool is_error_collision_late();
    bool is_error_collision_excessive();
    bool is_frame_vlan();
    int count_collision();
    bool is_error_deferral_excessive();
    bool is_error_underflow();
    bool is_error_half_duplex_deferred();
    
}; /* class: Descriptor_tx */

}; /* namespace: emac::dma::descriptor */


#endif /* define: emac_dma_descriptor_transmitt_h */