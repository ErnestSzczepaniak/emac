#ifndef _emac_h
#define _emac_h

/**
 * @file	emac.h
 * @author	en2
 * @date	06-10-2020
 * @brief	
 * @details	
**/

#include "emac_configuration.h"
#include "emac_interrupt_mask.h"
#include "emac_interrupt_status.h"
#include "emac_phy.h"
#include "emac_ksz9021.h"
#include "emac_dma.h"
#include "emac_dma_bus.h"
#include "emac_dma_descriptor_address.h"
#include "emac_dma_descriptor_transmitt.h"
#include "emac_dma_descriptor_receive.h"
#include "emac_dma_interrupt.h"
#include "emac_dma_status.h"
#include "emac_dma_operation.h"
#include "emac_dma_poll.h"

namespace emac
{

struct Result {void * data; int size;};
extern unsigned char _buffer[2048];
extern dma::descriptor::Transmitt _descriptor_tx;
extern dma::descriptor::Receive _descriptor_rx;

static constexpr auto base_permodrst = 0xffd05014;
static constexpr auto base_manager_control = 0xffd08060;

void init();
void send(void * data, int size);

void interrupt_ack();
Result receive();
void receive_ack();

}; /* namespace: emac */

#endif /* define: emac_h */