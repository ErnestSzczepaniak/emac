#include "emac.h"

Emac::Emac(unsigned int base)
:
configuration((Emac_configuration *) (base + 0x0)),
filter((Emac_filter *) + (base + 0x4))
{

}

void Emac::init()
{
    auto * permodrst = (Emac_register<> *) address_permodrst;
    auto * manager_control = (Emac_register<> *) address_manager_control;

    permodrst->set(true, 1, 1); // emac into reset

    manager_control->set(0x1, 2, 2); // physel to RGMII

    permodrst->set(false, 1, 1); // emac out of reset
}