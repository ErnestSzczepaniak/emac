#ifndef _emac_dma_mode_h
#define _emac_dma_mode_h

/**
 * @file	emac_dma_mode.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

#include "emac_value.h"

namespace emac::dma::mode
{

enum class Treshold_receive : unsigned char 
{
    LEVEL_64,
    LEVEL_32,
    LEVEL_96,
    LEVEL_128
}; /* enum: Treshold_receive */

enum class Threshold_transmit : unsigned char
{
    LEVEL_64,
    LEVEL_128,
    LEVEL_192,
    LEVEL_256,
    LEVEL_40,
    LEVEL_32,
    LEVEL_24,
    LEVEL_16
}; /* enum: Threshold_transmit */

class Mode : public value::Value
{
public:
    Mode(unsigned int address);
 
    void receive(bool value);
    bool receive();

    void process_second(bool value);
    bool process_second();

    void threshold_receive(Treshold_receive value);
    Treshold_receive threshold_receive();

    void drop_undersized(bool value);
    bool drop_undersized();

    void drop_error(bool value);
    bool drop_error();

    void flow_control(bool value);
    bool flow_control();

    void transmit(bool value);
    bool transmit();    

}; /* class: Mode */


}; /* namespace: emac::dma::mode */


#endif /* define: emac_dma_mode_h */