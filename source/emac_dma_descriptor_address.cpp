#include "emac_dma_descriptor_address.h"
#include "emac_register.h"

namespace emac::dma::descriptor::address
{

void receive_set(void * value)
{
    _set(base_receive, value, 0, 32);
}

void transmit_set(void * value)
{
    _set(base_transmitt, value, 0, 32);
}

}; /* namespace: emac::dma::descriptor::address */
