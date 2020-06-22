#ifdef build_platform_host

#define CATCH_CONFIG_MAIN
#include "build.h"
#include "test.h"

#else

#include "build.h"
#include "emac_phy_address.h"


int main()
{

    // teoretycznie dziala z preloadera

    // auto * permodrst = (unsigned int *) 0xffd05014;
    // *permodrst |= 0x02; // emac1 reset

    // auto * emac0clk = (unsigned int *) 0xffd0408c; // emac1 clk cnt

    // auto * sysmgr_emac_ctrl = (unsigned int *) 0xffd08060;
    // *sysmgr_emac_ctrl |= 0x2; // emac1 to RGMII

    // auto * sysmgr_module = (unsigned int *) 0xffd08028;
    // *sysmgr_module &= ~0x00000008; // emac1 disable signals from FPGA

    // *permodrst &= ~0x02; // emac1 out of reset

    while(1);
}

#endif
