#pragma once

#include <mbed.h>
#include <Stream.h>

namespace naelic
{

    class SWO : public Stream
    {
    public:
        void print(const char *s);
        void print(char c);
        void print(int n);
        void print(bool value);
        void print(double value, int digits = 2, bool upper = false);

        void println(const char *s);
        void println(char c);
        void println(int n);
        void println(bool value);
        void println(double number, int digits = 2, bool upper = false);

    protected:
        int _putc(int c);
        int _getc();
    };

} // namespace naelic
