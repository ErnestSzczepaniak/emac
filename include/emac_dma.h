#ifndef _emac_dma_h
#define _emac_dma_h

/**
 * @file	emac_dma.h
 * @author	en2
 * @date	28-06-2020
 * @brief	
 * @details	
**/

#include "emac_register.h"
#include "emac_dma_bus.h"
#include "emac_dma_status.h"
#include "emac_dma_operation.h"

class Emac_dma
{
public:
    Emac_dma(unsigned int base);

    Emac_dma_bus bus;

    Emac_register poll_transmit;
    Emac_register poll_receive;

    Emac_register address_descriptor_list_receive;
    Emac_register address_descriptor_list_transmit;

    Emac_dma_status status;
    Emac_dma_operation operation;

}; /* class: Emac_dma */


#endif /* define: emac_dma_h */