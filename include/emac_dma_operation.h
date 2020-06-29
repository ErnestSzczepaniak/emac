#ifndef _emac_dma_operation_h
#define _emac_dma_operation_h

/**
 * @file	emac_dma_operation.h
 * @author	en2
 * @date	28-06-2020
 * @brief	
 * @details	
**/

#include "emac_register.h"

class Emac_dma_operation : public Emac_register
{
public:
    enum class Receive_threshold : unsigned char
    {
        _64,
        _32,
        _96,
        _128
    }; /* enum: Threshold */

    enum class Transmit_threshold : unsigned char
    {
        _64,
        _128,
        _192,
        _256,
        _40,
        _32,
        _24,
        _16
    }; /* enum: Transmit_threshold */    

    enum class Flow_control : unsigned char 
    {
        _1KB,
        _2KB,
        _3KB,
        _4KB
    }; /* enum: Flow_control */

    Emac_dma_operation(unsigned int base);

    void receive(bool value);
    bool receive();

    void receive_parallel(bool value);
    bool receive_parallel(); 

    void receive_threshold(Receive_threshold value);
    Receive_threshold receive_threshold();

    void pass_undersized_frames(bool value);
    bool pass_undersized_frames();

    void pass_error_frames(bool value);
    bool pass_error_frames();

    void receive_flow_control(bool value);
    bool receive_flow_control();

    void receive_flow_control_activation(Flow_control value);
    Flow_control receive_flow_control_activation();

    void receive_flow_control_deactivation(Flow_control value);
    Flow_control receive_flow_control_deactivation();

    void transmit(bool value);
    bool transmit();

    void transmit_threshold(Transmit_threshold value);
    Transmit_threshold transmit_threshold();

    void transmit_flush(bool value);
    bool transmit_flush();

    void transmit_when_full(bool value);
    bool transmit_when_full();

    void receive_flush_disable(bool value);
    bool receive_flush_disable();    

    void receive_complete(bool value);
    bool receive_complete();

    void drop_crc_error_frames(bool value);
    bool drop_crc_error_frames();

}; /* class: Emac_dma_operation */

#endif /* define: emac_dma_operation_h */