/*
 * Copyright (c) 2017, CATIE, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
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
