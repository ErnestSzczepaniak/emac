#include "emac.h"

Emac::Emac(unsigned int base)
:
configuration(base + 0x0),
filter(base + 0x4),
phy(base + 0x10),
dma(base + 0x1000)
{

}

void Emac::init()
{
    Emac_register manager_control(address_manager_control);
    Emac_register permodrst(address_permodrst);

    permodrst.set(true, 1, 1); // emac into reset

    manager_control.set(0x1, 2, 2); // physel to RGMII

    permodrst.set(false, 1, 1); // emac out of reset
}