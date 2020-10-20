#ifndef _emac_control_status_h
#define _emac_control_status_h

/**
 * @file	emac_control_status.h
 * @author	en2
 * @date	07-10-2020
 * @brief	
 * @details	
**/

namespace emac::control::status
{

static constexpr auto base = 0xff7020d8;

enum class Duplex {HALF, FULL};
enum class Speed {_2_5_MHZ, _25_MHZ, _125_MHZ};

Duplex duplex_get();
Speed speed_get();
bool link_get();

}; /* namespace: emac::control::status */


#endif /* define: emac_control_status_h */