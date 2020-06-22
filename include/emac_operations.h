#ifndef _emac_operations_h
#define _emac_operations_h

/**
 * @file	emac_operations.h
 * @author	en2
 * @date	22-06-2020
 * @brief	
 * @details	
**/

namespace emac::operations
{

template<typename T = unsigned int> 
static T get(unsigned int & variable, int offset = 0, int size = 32)
{
    unsigned int mask = (1 << size) - 1;
    return (T) ((variable & mask << offset) >> offset);
}

template<typename T = unsigned int> 
static void set(unsigned int & variable, T value, int offset = 0, int size = 32)
{
    unsigned int mask = (1 << size) - 1;
    variable &= ~(mask << offset);
    variable |= (((unsigned int ) value & mask) << offset);
}

}; /* namespace: emace::operations */

#endif /* define: emac_operations_h */