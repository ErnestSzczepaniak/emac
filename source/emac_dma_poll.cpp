#include "emac_dma_poll.h"
#include "emac_register.h"

namespace emac::dma::poll
{

void transmitt()
{
    _set(base_transmitt, 0xffffffff, 0, 32);
}

void receive()
{
    _set(base_receive, 0xffffffff, 0, 32);
}

}; /* namespace: emac::dma::poll */
