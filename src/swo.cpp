#include "mbed.h"
#include "swo.h"

namespace naelic
{

    int SWO::_putc(int c)
    {
        ITM_SendChar(c);
        return c;
    }

    int SWO::_getc()
    {
        return -1;
    }

    void SWO::print(const char *s)
    {
        printf("%s", s);
    }

    void SWO::print(char c)
    {
        printf("%c", c);
    }

    void SWO::print(int n)
    {
        printf("%d", n);
    }

    void SWO::print(bool value)
    {
        if (value)
        {
            print("True");
        }
        else
        {
            print("False");
        }
    }

    void SWO::println(const char *s)
    {
        printf("%s\n", s);
    }

    void SWO::println(char c)
    {
        printf("%c\n", c);
    }

    void SWO::println(int n)
    {
        printf("%d\n", n);
    }

    void SWO::println(bool value)
    {
        if (value)
        {
            println("True");
        }
        else
        {
            println("False");
        }
    }

} // namespace naelic
