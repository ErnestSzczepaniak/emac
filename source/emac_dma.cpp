#include "emac_dma.h"

Emac_dma::Emac_dma(unsigned int base)
:
bus(base + 0x0),
poll_transmit(base + 0x4),
poll_receive(base + 0x8),
address_descriptor_list_receive(base + 0xc),
address_descriptor_list_transmit(base + 0x10),
status(base + 0x14),
operation(base + 0x18)
{

}