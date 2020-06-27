// #include "emac_phy.h"

// void Emac_phy::write(int device, Speed speed, int address, unsigned short int value)
// {
//     unsigned int temp = 0;

//     temp |= 0x1; // busy
//     temp |= 0x2; // write
//     temp |= (((int) speed) << 2);
//     temp |= (address << 6);
//     temp |= (device << 11);

//     set(value, 0, 16, 1);
//     set(temp, 0, 16, 0);

//     while(get(0, 1, 0) == true);
// }

// unsigned short int Emac_phy::read(int device, Speed speed, int address)
// {
//     unsigned int temp = 0;

//     temp |= 0x1; // busy
//     temp |= (((int) speed) << 2);
//     temp |= (address << 6);
//     temp |= (device << 11);

//     set(temp, 0, 16, 0);

//     while(get(0, 1, 0) == true);

//     return get(0, 16, 1);
// }
