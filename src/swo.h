#pragma once

#include "Stream.h"

namespace naelic
{

    class SWO : public Stream
    {
    public:
        void print(const char *s);
        void print(char c);
        void print(int n);
        void print(bool value);

        void println(const char *s);
        void println(char c);
        void println(int n);
        void println(bool value);

    protected:
        int _putc(int c);
        int _getc();
    };

} // namespace naelic
