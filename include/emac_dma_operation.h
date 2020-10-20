#ifndef _emac_dma_operation_h
#define _emac_dma_operation_h

/**
 * @file	emac_dma_operation.h
 * @author	en2
 * @date	07-10-2020
 * @brief	
 * @details	
**/

namespace emac::dma::operation
{

static constexpr auto base = 0xff703018;

enum class Receive_threshold { _64, _32, _96, _128 };
enum class Transmit_threshold { _64, _128, _192, _256, _40, _32, _24, _16 };
enum class Flow_control { _1KB, _2KB, _3KB, _4KB };

void receive_operation_enable(bool value);
void receive_parallel_enable(bool value);
void receive_threshold_set(Receive_threshold value);
void pass_undersized_frames(bool value);
void pass_error_frames(bool value);
void receive_flow_control_enable(bool value);
void receive_flow_control_activation_threshold_set(Flow_control value);
void receive_flow_control_deactivation_threshold_set(Flow_control value);
void transmit_operation_enable(bool value);
void transmit_threshold_set(Transmit_threshold value);
void transmit_flush(bool value);
void transmit_when_full_enable(bool value);
void receive_flush_disable(bool value);
void receive_complete_frame_only_enable(bool value);
void drop_crc_error_frames_disable(bool value);

}; /* namespace: emac::dma::operation */


#endif /* define: emac_dma_operation_h */