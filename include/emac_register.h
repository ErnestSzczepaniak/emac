#ifndef _emac_register_h
#define _emac_register_h

/**
 * @file	emac_register.h
 * @author	en2
 * @date	27-06-2020
 * @brief	
 * @details	
**/

class Emac_register
{
public:
    Emac_register(unsigned int address = 0, int span = 1);

    template<typename T = unsigned int> T 
    get(int offset = 0, int size = 32, int position = 0);

    template<typename T = unsigned int> 
    void set(T data, int offset = 0, int size = 32, int position = 0);

    void address(unsigned int value);
    unsigned int address();

    void span(int value);
    int span();

    void reset();

private:
    unsigned int * _address;
    int _span;

}; /* class: Emac_register */

template<typename T>
T Emac_register::get(int offset, int size, int position)
{
    unsigned int mask = (1 << size) - 1;
    return (T)((_address[position] >> offset) & mask);
}

template<typename T>
void Emac_register::set(T data, int offset, int size, int position)
{
    auto mask = (1 << size) - 1;
    _address[position] &= ~(mask << offset);
    _address[position] |= ((unsigned int) data << offset);
}

#endif /* define: emac_register_h */