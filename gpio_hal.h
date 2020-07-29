/**
 * @file    gpio_hal.h
 * @author  Brooks Anderson
 * @date    07/27/2020
 * @brief   GPIO Port Abstraction Layer
 */

#ifndef _GPIO_H
#define _GPIO_H

#include <stdint.h>

#include "gpio_ll.h"

/**
 * @brief   Sets a pin logic state to HIGH
 * @note    This abstraction layer provides a default implementation of this
 *          macro. Implementing this macro will override the default one.
 * @param[in] pin      pin identifier
 *
 */
#ifdef GPIO_ll_Set
#   define GPIO_Set(pin)     GPIO_ll_Set(GPIO_ll_GetPinPort(pin), GPIO_ll_GetPinField(pin))
#else
#   define GPIO_Set(pin)    ((void)(pin))
#endif

/**
 * @brief   Clears a pin logic state to LOW
 * @note    This abstraction layer provides a default implementation of this
 *          macro. Implementing this macro will override the default one.
 * @param[in] pin      pin identifier
 *
 */
#ifdef GPIO_ll_Clr
#   define GPIO_Clr(pin)     GPIO_ll_Clr(GPIO_ll_GetPinPort(pin), GPIO_ll_GetPinField(pin))
#else
#   define GPIO_Clr(pin)    ((void)(pin))
#endif

#ifdef GPIO_ll_GetPortOutput
#   define GPIO_GetPortOutput(port)     GPIO_ll_GetPortOutput(port)
#else
#   define GPIO_GetPortOutput(port)    ((void)(port))
#endif

#ifdef GPIO_ll_SetPortOutput
#   define GPIO_SetPortOutput(port, data)     GPIO_ll_SetPortOutput(port, data)
#else
#   define GPIO_SetPortOutput(port, data)    ((void)(port, data)
#endif

#endif /* _GPIO_H */