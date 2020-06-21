#ifndef _emac_value_h
#define _emac_value_h

/**
 * @file	emac_value.h
 * @author	en2
 * @date	21-06-2020
 * @brief	
 * @details	
**/

namespace emac::value
{

class Value
{
public:
    Value(unsigned int address);

    void reset();
    template<typename T = unsigned int> T get(int offset = 0, int size = 32);
    template<typename T = unsigned int> void set(T value, int offset = 0, int size = 32);

protected:
private:
    unsigned int * _register;

}; /* class: Value */

template<typename T> 
T Value::get(int offset, int size)
{
    return {};
}

template<typename T> 
void Value::set(T value, int offset, int size)
{

}


}; /* namespace: emac::value */


#endif /* define: emac_value_h */