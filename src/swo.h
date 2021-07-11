/*
 * Copyright (c) 2018, CATIE, All Rights Reserved
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
