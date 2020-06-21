#include "emac_value.h"

namespace emac::value
{

Value::Value(unsigned int address)
:
_register((unsigned int *) address)
{

}

void Value::reset()
{
    *_register = 0;
}

}; /* namespace: emac::register */