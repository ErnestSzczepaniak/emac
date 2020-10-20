#include "emac_dma_operation.h"
#include "emac_register.h"

namespace emac::dma::operation
{

void receive_operation_enable(bool value)
{
    _set(base, value, 1, 1);
}

void receive_parallel_enable(bool value)
{
    _set(base, value, 2, 1);
}

void receive_threshold_set(Receive_threshold value)
{
    _set(base, value, 3, 2);
}

void pass_undersized_frames(bool value)
{
    _set(base, value, 6, 1);
}

void pass_error_frames(bool value)
{
    _set(base, value, 7, 1);
}

void receive_flow_control_enable(bool value)
{
    _set(base, value, 8, 1);
}

void receive_flow_control_activation_threshold_set(Flow_control value)
{
    _set(base, value, 9, 2);
}

void receive_flow_control_deactivation_threshold_set(Flow_control value)
{
    _set(base, value, 11, 2);
}

void transmit_operation_enable(bool value)
{
    _set(base, value, 13, 1);
}

void transmit_threshold_set(Transmit_threshold value)
{
    _set(base, value, 14, 3);
}

void transmit_flush(bool value)
{
    _set(base, value, 20, 1);
}

void transmit_when_full_enable(bool value)
{
    _set(base, value, 21, 1);
}

void receive_flush_disable(bool value)
{
    _set(base, value, 24, 1);
}

void receive_complete_frame_only_enable(bool value)
{
    _set(base, value, 25, 1);
}

void drop_crc_error_frames_disable(bool value)
{
    _set(base, value, 26, 1);
}


}; /* namespace: emac::dma::operation */

