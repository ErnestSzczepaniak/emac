#ifndef _dma_bus_h
#define _dma_bus_h

/**
 * @file	dma_bus.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

#include "register.h"

class Dma_bus : public Register<>
{
public:
    enum class Descriptor : unsigned char
    {
        NORMAL,
        EXTENDED
    }; /* enum: Descriptor */

    void reset(bool value);
    bool reset();

    void descriptor(Descriptor value);
    Descriptor descriptor();

    void beats(int value);
    int beats();

}; /* class: Dma_bus */

#endif /* define: dma_bus_h */