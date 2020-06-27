// #include "ksz9021.h"

// Ksz9021::Ksz9021(Emac_phy * phy, int device, Emac_phy::Speed speed)
// :
// _phy(phy),
// _device(device),
// _speed(speed)
// {

// }

// void Ksz9021::reset()
// {
//     auto control = _read(address_basic_control);

//     control |= 0x8000;

//     _write(address_basic_control, control);
// }

// void Ksz9021::loopback(bool value)
// {
//     auto control = _read(address_basic_control);

//     if (value) control |= 0x4000;
//     else control &= ~0x4000;

//     _write(address_basic_control, control);
// }

// void Ksz9021::advertisement_set()
// {
//     auto advertisement = _read(address_negotiation_advertisement);

//     advertisement |= 0x1e; // 10 i 100 BT half + full duplex

//     _write(address_negotiation_advertisement, advertisement);

//     auto gigabit = _read(address_gigabit_control);

//     gigabit |= 0x300;

//     _write(address_gigabit_control, gigabit);
// }

// void Ksz9021::negotiate()
// {
//     auto control = _read(address_basic_control);

//     control |= 0x200; // reset negotiation

//     _write(address_basic_control, control);

//     while((_read(address_basic_status) & 0x20) == false); // poll autonegotiation compleate
// }

// void Ksz9021::link_wait()
// {
//     while((_read(address_basic_status) & 0x4) == false); // poll link up
// }

// Ksz9021::Link Ksz9021::link_params()
// {
//     Link link;

//     auto phy = _read(address_phy_control);

//     if (phy & 0x8) link.duplex = Duplex::FULL;
//     else link.duplex = Duplex::HALF;

//     if (phy & 0x10) link.speed = Speed::_10_BASE_T;
//     else if (phy & 0x20) link.speed = Speed::_100_BASE_T;
//     else if (phy & 0x40) link.speed = Speed::_1000_BASE_T;

//     return link;
// }

// /* ---------------------------------------------| info |--------------------------------------------- */

// void Ksz9021::_write(int address, unsigned short int value)
// {
//     _phy->write(_device, _speed, address, value);
// }

// unsigned short int Ksz9021::_read(int address)
// {
//     return _phy->read(_device, _speed, address);
// }
