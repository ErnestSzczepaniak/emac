#ifndef _ksz9021_h
#define _ksz9021_h

/**
 * @file	ksz9021.h
 * @author	en2
 * @date	23-06-2020
 * @brief	
 * @details	
**/

#include "emac_phy.h"

class Ksz9021
{
    static constexpr auto address_basic_control = 0;
    static constexpr auto address_basic_status = 1;
    static constexpr auto address_negotiation_advertisement = 4;
    static constexpr auto address_negotiation_partner_ability = 5;
    static constexpr auto address_gigabit_control = 9;
    static constexpr auto address_gigabit_status = 10;
    static constexpr auto address_phy_control = 31;

    enum class Speed {_1000_BASE_T, _100_BASE_T, _10_BASE_T};
    enum class Duplex {FULL, HALF};
    struct Link {Speed speed; Duplex duplex;};

public:
    Ksz9021(Emac_phy * emac_phy, int device, Emac_phy::Speed speed);

    void reset();
    void loopback(bool value);
    void advertisement_set();
    void negotiate();
    void link_wait();
    Link link_params();

protected:
    void _write(int address, unsigned short int value);
    unsigned short int _read(int address);

private:
    Emac_phy * _phy;

    int _device;
    Emac_phy::Speed _speed;

}; /* class: Ksz9021 */


#endif /* define: ksz9021_h */