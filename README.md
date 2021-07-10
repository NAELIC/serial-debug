# Serial Wire Output (SWO) Library

Forked for [SWO Library](https://gitlab.com/catie_6tron/swo) to use on NAELIC board.

Usage:
  
```cpp
#include "mbed.h"
#include "swo.h"

static SWO swo;

int main() {
   swo.printf("Hello, World!\n");
}
```
  
To monitor SWO output via J-Link debug and trace probe, execute
`JLinkSWOViewer` with your device name, and CPU frequency e.g.:

```sh
JLinkSWOViewer -device STM32L496RG -cpufreq 80000000
```
