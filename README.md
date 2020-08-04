# About:

This is an abstracted General Purpose Input/Output peripheral API for embedded systems. This module has no implementation. It is up to the programmer to implement the API in a low-level, hardware specific, GPIO layer.

# Why:

Making GPIO calls to a consistent API across projects will increase code portability. If the project moves to a new platform only the hardware specific GPIO layer will need to be rewritten.

# Setup:

This repository should be added to the driver section of your project near the low-level `gpio_ll.h` implementation file.

## Example Directory Layout
```
Drivers/
└───gpio_stm32f303xe/
    ├───build/
    ├───inc/
    ├───src/
    │   └───gpio_hal/
    │   │   └───gpio_hal.h
    │   └───gpio_ll.h
    └───test/
```

[This example](https://github.com/Ackleberry/gpio_stm32f303xe) created a platform specific driver repository and added the `gpio_hal` repository as a submodule. This example also is using UNIT tests to verify the correctness of the platform specific implementation. Testing your implementation before you port should ensure a smooth transition.

## Example `gpio_ll.h` Template

TODO. The GPIO API is still in progress. For now reference the above example project.
