#ifndef _emac_register_h
#define _emac_register_h

/**
 * @file	emac_register.h
 * @author	en2
 * @date	27-06-2020
 * @brief	
 * @details	
**/

template<int span = 1>
class Emac_register
{
public:
    template<typename T = unsigned int> T get(int offset = 0, int size = 32, int position = 0)
    {
        unsigned int mask = (1 << size) - 1;
        return (T)((value[position] >> offset) & mask);
    }
    template<typename T = unsigned int> void set(T data, int offset = 0, int size = 32, int position = 0)
    {
        auto mask = (1 << size) - 1;
        value[position] &= ~(mask << offset);
        value[position] |= ((unsigned int) data << offset);
    }

    void reset()
    {
        for (int i = 0; i < span; i++) value[i] = 0;
    }

    unsigned int value[span];
}; /* class: Emac_register */

#endif /* define: emac_register_h */