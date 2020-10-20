#ifndef _emac_configuration_h
#define _emac_configuration_h

/**
 * @file	emac_configuration.h
 * @author	en2
 * @date	06-10-2020
 * @brief	
 * @details	
**/

namespace emac::configuration
{

static constexpr auto base = 0xff702000;

enum class Preamble { _7, _5, _3 };
enum class Back_off_limit { _10, _8, _4, _1 }; 
enum class Speed { _10_BASE_T, _100_BASE_T, _1000_BASE_T }; 
enum class Interframe_gap { _96, _88, _80, _72, _64, _56, _48, _40 };

void preamble_length_set(Preamble value);
void receive_state_machine_enable(bool value);
void transmit_state_machine_enable(bool value);
void defferal_check_enable(bool value);
void back_off_limit_set(Back_off_limit value);
void strip_pad_crc_enable(bool value);
bool link_get();
void half_duplex_one_transmission_enable(bool value);
void crc_check_enable(bool value);
void full_duplex_enable(bool value);
void loopback_enable(bool value);
void half_duplex_reception_disable(bool value);
void speed_set(Speed value);
void half_duplex_crs_disable(bool value);
void interframe_gap_set(Interframe_gap value);
void jumbo_frame_error_disable(bool value);
void half_duplex_bursting_enable(bool value);
void transmitter_jabber_timer_disable(bool value);
void receiver_watchdog_disable(bool value);
void phy_forwarding_enable(bool value);
void strip_crc_ethertype_enable(bool value);
void giant_frame_enable(bool value);

}; /* namespace: emac::configuration */

#endif /* define: emac_configuration_h */