// #ifndef _descriptor_tx_h
// #define _descriptor_tx_h

// /**
//  * @file	descriptor_tx.h
//  * @author	en2
//  * @date	22-06-2020
//  * @brief	
//  * @details	
// **/

// #include "register.h"

// class Descriptor_tx : public Register<8>
// {
// public:
//     enum class Crc_insertion : unsigned char 
//     {
//         DISABLED,
//         IP_HEADER,
//         IP_HEADER_PAYLOAD,
//         IP_HEADER_PAYLOAD_PSEUDOHEADER
//     }; /* enum: Crc_insertion */

//     Descriptor_tx();

//     void own(bool value);
//     bool own();

//     void last(bool value);
//     bool last();

//     void first(bool value);
//     bool first();

//     void crc(bool value); // inverse
//     bool crc();

//     void padding(bool value); //inverse
//     bool padding();

//     void crc_insertion(Crc_insertion value);
//     Crc_insertion crc_insertion();

//     void ring_end(bool value);
//     bool ring_end();

//     void chain(bool value);
//     bool chain();

//     bool error_summary();

//     void size(int index, int value);
//     int size(int index);

//     void pointer(int index, void * pointer);
//     void * pointer(int index);

// }; /* class: Descriptor_tx */


// #endif /* define: descriptor_tx_h */