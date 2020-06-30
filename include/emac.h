#ifndef _emac_h
#define _emac_h

/**
 * @file	emac.h
 * @author	en2
 * @date	23-06-2020
 * @brief	
 * @details	
**/

#include "emac_configuration.h"
#include "emac_filter.h"
#include "emac_phy.h"
#include "emac_dma.h"
#include "emac_descriptor_transmit.h"
#include "emac_descriptor_receive.h"
#include "emac_interrupt_mask.h"
#include "emac_interrupt_status.h"

class Emac
{
    static constexpr auto address_permodrst = 0xffd05014;
    static constexpr auto address_manager_control = 0xffd08060;

public:
    Emac(unsigned int base);

    void init();

    unsigned char * buffer_transmit(int index = 0);
    void send(int index = 0, int size = 8192);


    Emac_configuration configuration;
    Emac_filter filter;
    Emac_phy phy;
    Emac_dma dma;

    Emac_interrupt_mask interrupt_mask;
    Emac_interrupt_status interrupt_status;

    Emac_descriptor_transmit _descriptor_transmit;
    Emac_descriptor_receive _descriptor_receive;

protected:
    void _init_descriptor_transmit();
    void _init_descriptor_receive();

private:

    unsigned char _buffer_transmit[2][4096];
    unsigned char _buffer_receive[2][4096];

}; /* class: Emac */

#endif /* define: emac_h */