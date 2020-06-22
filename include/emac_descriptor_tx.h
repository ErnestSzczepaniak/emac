#ifndef _emac_descriptor_tx_h
#define _emac_descriptor_tx_h

/**
 * @file	emac_descriptor_tx.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

namespace emac::descriptor::tx
{

enum class Crc_insertion : unsigned char 
{
    DISABLED,
    IP_HEADER,
    IP_HEADER_PAYLOAD,
    IP_HEADER_PAYLOAD_PSEUDOHEADER
}; /* enum: Crc_insertion */

class Tx
{
public:
    Tx();

    void own(bool value);
    bool own();

    void interrupt_completion(bool value);
    bool interrupt_completion();

    void last(bool value);
    bool last();

    void first(bool value);
    bool first();

    void crc(bool value); // inverse
    bool crc();

    void padding(bool value); //inverse
    bool padding();

    void timestamp(bool value);
    bool timestamp();

    void crc_insertion(Crc_insertion value);
    Crc_insertion crc_insertion();

    void ring_end(bool value);
    bool ring_end();

    void chain(bool value);
    bool chain();

    bool timestamp_status();
    bool error_summary();

    void size(int index, int value);
    int size(int index);

    void pointer(int index, void * pointer);
    void * pointer(int index);

private:
    unsigned int _control;
    unsigned int _count;
    unsigned int _address_0;
    unsigned int _address_1;

}; /* class: Tx */


}; /* namespace: emac::descriptor::tx */


#endif /* define: emac_descriptor_tx_h */