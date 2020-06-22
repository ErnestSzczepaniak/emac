#ifndef _emac_flow_h
#define _emac_flow_h

/**
 * @file	emac_flow.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

#include "emac_value.h"

namespace emac::flow
{

enum class Pause : unsigned char 
{
    SLOT_4,
    SLOT_28,
    SLOT_144,
    SLOT_256
}; /* enum: Pause */

class Flow : public value::Value
{
public:
    Flow(unsigned int address);
  
    void backpreassure(bool value);
    bool backpreassure();

    void transmit_enable(bool value);
    bool transmit_enable();

    void receive_pause(bool value);
    bool receive_pause();

    void receive_pause_multicast(bool value);
    bool receive_pause_multicast();

    void pause(Pause value);
    Pause pause();

    void pause_zero_quanta(bool value);
    bool pause_zero_quanta();

    void pause_time(int value);
    int pause_time();

}; /* class: Flow */


}; /* namespace: emac::flow */


#endif /* define: emac_flow_h */