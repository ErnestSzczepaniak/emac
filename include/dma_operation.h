#ifndef _dma_operation_h
#define _dma_operation_h

/**
 * @file	dma_operation.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

#include "register.h"

class Dma_operation : public Register<>
{
public:
    void receive(bool value);
    bool receive();

    void transmit(bool value);
    bool transmit();

    void full_start(bool value);
    bool full_start();

}; /* class: Dma_operation */


#endif /* define: dma_operation_h */