#ifndef _emac_descriptor_receive_h
#define _emac_descriptor_receive_h

/**
 * @file	emac_descriptor_receive.h
 * @author	en2
 * @date	27-06-2020
 * @brief	
 * @details	
**/

#include "emac_descriptor.h"

class Emac_descriptor_receive : public Emac_descriptor
{
public:
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

}; /* class: Emac_descriptor_receive */

#endif /* define: emac_descriptor_receive_h */