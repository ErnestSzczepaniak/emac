#ifndef _emac_register_h
#define _emac_register_h

/**
 * @file	emac_register.h
 * @author	en2
 * @date	06-10-2020
 * @brief	
 * @details	
**/

namespace emac
{

template<typename T>
T _get(unsigned int * address, int offset, int size, int position = 0)
{
    unsigned int mask = (1 << size) - 1;
    return (T)((address[position] >> offset) & mask);
}

template<typename T>
T _get(unsigned int address, int offset, int size, int position = 0)
{
    auto * ptr = (unsigned int *) address;

    unsigned int mask = (1 << size) - 1;
    return (T)((ptr[position] >> offset) & mask);
}

template<typename T>
static inline void _set(unsigned int * address, T data, int offset, int size, int position = 0)
{
    auto mask = (1 << size) - 1;
    address[position] &= ~(mask << offset);
    address[position] |= ((unsigned int) data << offset);
}

template<typename T>
static inline void _set(unsigned int address, T data, int offset, int size, int position = 0)
{
    auto * ptr = (unsigned int *) address;

    auto mask = (1 << size) - 1;
    ptr[position] &= ~(mask << offset);
    ptr[position] |= ((unsigned int) data << offset);
}

}; /* namespace: emac */

#endif /* define: emac_register_h */