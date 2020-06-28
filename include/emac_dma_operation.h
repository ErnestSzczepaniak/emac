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
    Emac_dma_operation(unsigned int base);

    void receive(bool value);
    bool receive();

    void process_second(bool value);
    bool process_second(); 

    void transmit(bool value);
    bool transmit();

    void full_start(bool value);
    bool full_start();

}; /* class: Emac_dma_operation */

#endif /* define: emac_dma_operation_h */