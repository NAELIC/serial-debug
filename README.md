# Serial Wire Output (SWO) Library

Forked for [SWO Library](https://gitlab.com/catie_6tron/swo) to use on NAELIC robot.
Improved to give some printing function.

## Printing

There is `print`, `println` function for main types.

## Usage
  
```cpp
#include <mbed.h>
#include <swo.h>

static naelic::SWO swo;

int main() {
   swo.println("Hello, World!");
}
```


## Usage 

Install [all J-Link software](https://www.segger.com/downloads/jlink/)

To monitor SWO output via J-Link debug and trace probe, execute :

```sh
JLinkSWOViewer -device STM32L4A6RG
```
