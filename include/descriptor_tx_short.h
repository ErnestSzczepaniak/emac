#ifndef _descriptor_tx_short_h
#define _descriptor_tx_short_h

/**
 * @file	descriptor_tx_short.h
 * @author	en2
 * @date	23-06-2020
 * @brief	
 * @details	
**/

#include "register.h"

class Descriptor_tx_short : public Register<4>
{

public:
    enum class Crc_insertion : unsigned char 
    {
        DISABLED,
        IP_HEADER,
        IP_HEADER_PAYLOAD,
        IP_HEADER_PAYLOAD_PSEUDOHEADER
    }; /* enum: Crc_insertion */

    Descriptor_tx_short();

    void own(bool value);
    bool own();

    void last(bool value);
    bool last();

    void first(bool value);
    bool first();

    void crc_insertion(Crc_insertion value);
    Crc_insertion crc_insertion();

    void crc(bool value); // inverse
    bool crc();

    void ring_end(bool value);
    bool ring_end();

    void chain(bool value);
    bool chain();

    void padding(bool value); //inverse
    bool padding();

    void size(int index, int value);
    int size(int index);

    void pointer(int index, void * pointer);
    void * pointer(int index);

}; /* class: Descriptor_tx_short */


#endif /* define: descriptor_tx_short_h */