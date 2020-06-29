#ifndef _emac_descriptor_h
#define _emac_descriptor_h

/**
 * @file	emac_descriptor.h
 * @author	en2
 * @date	27-06-2020
 * @brief	
 * @details	
**/

#include "emac_register.h"

class Emac_descriptor : public Emac_register
{
public:
    Emac_descriptor();

    unsigned int * address();

    void own(bool value);
    bool own();   

    bool error_summary();

    void size(int index, int value);
    int size(int index);

    void pointer(int index, void * pointer);
    void * pointer(int index);

private:
    unsigned int _descriptor[4];

}; /* class: Emac_descriptor */


#endif /* define: emac_descriptor_h */