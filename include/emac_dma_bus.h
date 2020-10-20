#ifndef _emac_dma_bus_h
#define _emac_dma_bus_h

/**
 * @file	emac_dma_bus.h
 * @author	en2
 * @date	06-10-2020
 * @brief	
 * @details	
**/

namespace emac::dma::bus
{

static constexpr auto base = 0xff703000;

enum class Descriptor_size { NORMAL, EXTENDED };
enum class Beats { _1, _2, _4, _8, _16, _32 }; 
enum class Burst_type { SINGLE_OR_INCREMENTAL, FIXED };

void reset(bool value);
void descriptor_skip_words_set(int value);
void descriptor_size_set(Descriptor_size value);
void beats_per_transaction_set(Beats value);
void burst_type_set(Burst_type value);
void beats_per_transaction_multiply_by_eight(bool value);
void beats_alignment_enable(bool value);

}; /* namespace: emac::dma::bus */

#endif /* define: emac_dma_bus_h */