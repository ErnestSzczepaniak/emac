#include "test.h"
#include "emac.h"

TEST_CASE("asd")
{
    emac::Emac emac(100);

    emac.phy.address.busy(true);
    emac.phy.address.number(12);

}