#ifndef _dma_poll_tx_h
#define _dma_poll_tx_h

/**
 * @file	dma_poll_tx.h
 * @author	en2
 * @date	23-06-2020
 * @brief	
 * @details	
**/

#include "register.h"

class Dma_poll_tx : public Register<>
{

public:
    void demand();

}; /* class: Dma_poll_tx */


#endif /* define: dma_poll_tx_h */