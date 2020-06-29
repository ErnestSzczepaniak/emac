#include "emac_dma_operation.h"

Emac_dma_operation::Emac_dma_operation(unsigned int base) : Emac_register(base)
{

}

void Emac_dma_operation::receive(bool value)
{
    set(value, 1, 1);
}

bool Emac_dma_operation::receive()
{
    return get(1, 1);
}

void Emac_dma_operation::receive_parallel(bool value)
{
    set(value, 2, 1);
}

bool Emac_dma_operation::receive_parallel()
{
    return get(2, 1);
}

void Emac_dma_operation::receive_threshold(Receive_threshold value)
{
    set(value, 3, 2);
}

Emac_dma_operation::Receive_threshold Emac_dma_operation::receive_threshold()
{
    return get<Receive_threshold>(3, 2);
}

void Emac_dma_operation::pass_undersized_frames(bool value)
{
    set(value, 6, 1);
}

bool Emac_dma_operation::pass_undersized_frames()
{
    return get(6, 1);
}

void Emac_dma_operation::pass_error_frames(bool value)
{
    set(value, 7, 1);
}

bool Emac_dma_operation::pass_error_frames()
{
    return get(7, 1);
}

void Emac_dma_operation::receive_flow_control(bool value)
{
    set(value, 8, 1);
}

bool Emac_dma_operation::receive_flow_control()
{
    return get(8, 1);
}

void Emac_dma_operation::receive_flow_control_activation(Flow_control value)
{
    set(value, 9, 2);
}

Emac_dma_operation::Flow_control Emac_dma_operation::receive_flow_control_activation()
{
    return get<Flow_control>(9, 2);
}

void Emac_dma_operation::receive_flow_control_deactivation(Flow_control value)
{
    set(value, 11, 2);
}

Emac_dma_operation::Flow_control Emac_dma_operation::receive_flow_control_deactivation()
{
    return get<Flow_control>(11, 2);
}

void Emac_dma_operation::transmit(bool value)
{
    set(value, 13, 1);
}

bool Emac_dma_operation::transmit()
{
    return get(13, 1);
}

void Emac_dma_operation::transmit_threshold(Transmit_threshold value)
{
    set(value, 14, 3);
}

Emac_dma_operation::Transmit_threshold Emac_dma_operation::transmit_threshold()
{
    return get<Transmit_threshold>(14, 3);
}

void Emac_dma_operation::transmit_flush(bool value)
{
    set(value, 20, 1);
}

bool Emac_dma_operation::transmit_flush()
{
    return get(20, 1);
}

void Emac_dma_operation::transmit_when_full(bool value)
{
    set(value, 21, 1);
}

bool Emac_dma_operation::transmit_when_full()
{
    return get(21, 1);
}

void Emac_dma_operation::receive_flush_disable(bool value)
{
    set(value, 24, 1);
}

bool Emac_dma_operation::receive_flush_disable()
{
    return get(24, 1);
}

void Emac_dma_operation::receive_complete(bool value)
{
    set(value, 25, 1);
}

bool Emac_dma_operation::receive_complete()
{
    return get(25, 1);
}

void Emac_dma_operation::drop_crc_error_frames(bool value)
{
    set(value, 26, 1);
}

bool Emac_dma_operation::drop_crc_error_frames()
{
    return get(26, 1);
}