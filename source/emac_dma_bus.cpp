#include "emac_dma_bus.h"
#include "emac_register.h"

namespace emac::dma::bus
{

void reset(bool value)
{
    _set(base, value, 0, 1);
}

void descriptor_skip_words_set(int value)
{
    _set(base, value, 2, 5);
}

void descriptor_size_set(Descriptor_size value)
{
    _set(base, value, 7, 1);
}

void beats_per_transaction_set(Beats value)
{
    _set(base, value, 8, 6);
}

void burst_type_set(Burst_type value)
{
    _set(base, value, 16, 1);
}

void beats_per_transaction_multiply_by_eight(bool value)
{
    _set(base, value, 24, 1);
}

void beats_alignment_enable(bool value)
{
    _set(base, value, 25, 1);
}

}; /* namespace: emac::dma::bus */
