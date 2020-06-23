#include "dma_poll_tx.h"

void Dma_poll_tx::demand()
{
    set(1, 0, 1);
}