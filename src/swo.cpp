#include "swo.h"
#include <mbed.h>

int SWO::_putc(int c)
{
    ITM_SendChar(c);
    return c;
}

int SWO::_getc()
{
    return -1;
}
