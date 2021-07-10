#pragma once

#include "Stream.h"

class SWO : public Stream
{
public:
    SWO() {};

protected:
    int _putc(int c);
    int _getc();
};