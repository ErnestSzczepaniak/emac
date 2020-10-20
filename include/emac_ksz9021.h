#ifndef _emac_ksz9021_h
#define _emac_ksz9021_h

/**
 * @file	emac_ksz9021.h
 * @author	en2
 * @date	06-10-2020
 * @brief	
 * @details	
**/

namespace emac::ksz9021
{

static constexpr auto address_basic_control =                   0;
static constexpr auto address_basic_status =                    1;
static constexpr auto address_negotiation_advertisement =       4;
static constexpr auto address_negotiation_partner_ability =     5;
static constexpr auto address_gigabit_control =                 9;
static constexpr auto address_gigabit_status =                  10;
static constexpr auto address_phy_control =                     31;

enum class Speed {_1000_BASE_T, _100_BASE_T, _10_BASE_T};
enum class Duplex {FULL, HALF};
struct Link {Speed speed; Duplex duplex;};

void init();
void reset();
void advertisement_set();
void negotiate();
void link_wait();
Link link_params();

}; /* namespace: emac::ksz9021 */


#endif /* define: emac_ksz9021_h */