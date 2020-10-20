#ifndef _emac_phy_h
#define _emac_phy_h

/**
 * @file	emac_phy.h
 * @author	en2
 * @date	06-10-2020
 * @brief	
 * @details	
**/

namespace emac::phy
{

static constexpr auto base = 0xff702010;
static constexpr auto index_control = 0;
static constexpr auto index_data = 1;

enum class Speed { L4_60_100_MDC_L4_42, L4_100_150_MDC_L4_62, L4_25_35_MDC_L4_16, L4_35_60_MDC_L4_26, L4_150_250_MDC_L4_102, L4_250_300_MDC_L4_124, L4_4, L4_6, L4_8, L4_10, L4_12, L4_14, L4_16, L4_18 };

void device_set(int value);
void speed_set(Speed value);
unsigned short int read(int address);
void write(int address, unsigned short int value);

}; /* namespace: emac::phy */


#endif /* define: emac_phy_h */