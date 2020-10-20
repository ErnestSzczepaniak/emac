#ifndef _emac_dma_h
#define _emac_dma_h

/**
 * @file	emac_dma.h
 * @author	en2
 * @date	07-10-2020
 * @brief	
 * @details	
**/

namespace emac::dma
{

class Descriptor
{
public:
    Descriptor();

    void own(bool value);
    bool own();   

    bool error_summary();

    void size(int index, int value);
    int size(int index);

    void pointer(int index, void * pointer);
    void * pointer(int index);

protected:
    unsigned int _descriptor[4];

}; /* class: Descriptor */

}; /* namespace: emac::dma */

#endif /* define: emac_dma_h */