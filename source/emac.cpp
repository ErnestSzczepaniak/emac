#include "emac.h"

namespace emac
{

Emac::Emac(unsigned int address)
:
phy(address + 4 * 2)
{
    
}

}; /* namespace: emac */
