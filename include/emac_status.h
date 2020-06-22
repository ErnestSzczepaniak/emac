#ifndef _emac_status_h
#define _emac_status_h

/**
 * @file	emac_status.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

#include "emac_value.h"

namespace emac::status
{

enum class Speed : unsigned char 
{
    SPEED_2_5,
    SPEED_25,
    SPEED_125
}; /* enum: Speed */

enum class Mode : unsigned char 
{
    HALF_DUPLEX,
    FULL_DUPLEX
}; /* enum: Mode */

class Status : public value::Value
{
public:
    Status(unsigned int address);

    Mode mode();
    Speed speed();
    bool link_up();


}; /* class: Status */

}; /* namespace: emac::status */

#endif /* define: emac_status_h */