#include "emac_phy.h"

namespace emac::phy
{

Phy::Phy(unsigned int address) : address(address), data(address + 4)
{
    
}

}; /* namespace: emac::phy */
