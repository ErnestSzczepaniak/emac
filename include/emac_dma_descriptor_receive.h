#ifndef _emac_dma_descriptor_receive_h
#define _emac_dma_descriptor_receive_h

/**
 * @file	emac_dma_descriptor_receive.h
 * @author	en2
 * @date	07-10-2020
 * @brief	
 * @details	
**/

#include "emac_dma.h"

namespace emac::dma::descriptor
{

class Receive : public Descriptor
{
public:
    Receive();

    bool is_error_destination_address_filter();

    int length();

    bool is_error_descriptor();
    bool is_error_source_address_filter();
    bool is_error_length();
    bool is_error_overflow();
    bool is_frame_vlan();

    void first(bool value);
    bool is_first(); 

    void last(bool value);
    bool is_last();

    void ring_end(bool value);
    bool ring_end();

    bool is_available_timestamp();
    bool is_error_collision_late();
    bool is_frame_ethernet();
    bool is_error_watchdog_timeout();
    bool is_error_receive();
    bool is_error_dribble();
    bool is_error_crc();
    bool is_available_extended_status();

}; /* class: Receive */

}; /* namespace: emac::dma::descriptor */

#endif /* define: emac_dma_descriptor_receive_h */