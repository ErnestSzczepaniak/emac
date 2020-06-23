#include "emac.h"

Emac::Emac(unsigned int base)
:
phy((Emac_phy *) base + 0x10)
{

}