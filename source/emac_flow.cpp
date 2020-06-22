#include "emac_flow.h"

namespace emac::flow
{

Flow::Flow(unsigned int address) : Value(address)
{

}

void Flow::backpreassure(bool value)
{
    set(value, 0, 1);
}

bool Flow::backpreassure()
{
    return get(0, 1);
}

void Flow::transmit_enable(bool value)
{
    set(value, 1, 1);
}

bool Flow::transmit_enable()
{
    return get(1, 1);
}

void Flow::receive_pause(bool value)
{
    set(value, 2, 1);
}

bool Flow::receive_pause()
{
    return get(2, 1);
}

void Flow::receive_pause_multicast(bool value)
{
    set(value, 3, 1);
}

bool Flow::receive_pause_multicast()
{
    return get(3, 1);
}

void Flow::pause(Pause value)
{
    set(value, 4, 2);
}

Pause Flow::pause()
{
    return get<Pause>(4, 2);
}

void Flow::pause_zero_quanta(bool value)
{
    set(value, 7, 1);
}

bool Flow::pause_zero_quanta()
{
    return get(7, 1);
}

void Flow::pause_time(int value)
{
    set(value, 16, 16);
}

int Flow::pause_time()
{
    return get<int>(16, 16);
}


}; /* namespace: emac::flow */
