#ifndef _emac_dma_bus_h
#define _emac_dma_bus_h

/**
 * @file	emac_dma_bus.h
 * @author	en2
 * @date	28-06-2020
 * @brief	
 * @details	
**/

#include "emac_register.h"

class Emac_dma_bus : public Emac_register
{
public:
    enum class Descriptor : unsigned char
    {
        NORMAL,
        EXTENDED
    }; /* enum: Descriptor */

    enum class Beats : unsigned char
    {
        _1,
        _2,
        _4,
        _8,
        _16,
        _32
    }; /* enum: Beats */

    enum class Burst : unsigned char
    {
        SINGLE_OR_INCREMENTAL,
        FIXED
    }; /* enum: Burst */

    Emac_dma_bus(unsigned int base);

    void reset(bool value);
    bool reset();

    void descriptor_skip_words(int value);
    int descriptor_skip_words();

    void descriptor(Descriptor value);
    Descriptor descriptor();

    void beats_transmit(Beats value);
    Beats beats_transmit();

    void burst(Burst value);
    Burst burst();

    void beats_receive(Beats value);
    Beats beats_receive();

    void beats_same_as_transmit(bool value);
    bool beats_same_as_transmit();

    void beats_multiply_by_eight(bool value);
    bool beats_multiply_by_eight();

    void beats_aligned(bool value);
    bool beats_aligned();

}; /* class: Emac_dma_bus */

#endif /* define: emac_dma_bus_h */