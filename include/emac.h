#ifndef _emac_h
#define _emac_h

/**
 * @file	emac.h
 * @author	en2
 * @date	23-06-2020
 * @brief	
 * @details	
**/

#include "emac_configuration.h"
#include "emac_filter.h"
#include "emac_phy.h"
#include "emac_dma.h"

class Emac
{
    static constexpr auto address_permodrst = 0xffd05014;
    static constexpr auto address_manager_control = 0xffd08060;

public:
    Emac(unsigned int base);

    void init();

    Emac_configuration configuration;
    Emac_filter filter;
    Emac_phy phy;
    Emac_dma dma;

}; /* class: Emac */

#endif /* define: emac_h */