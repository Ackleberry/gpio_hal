/**
 * @file    gpio_hal.h
 * @author  Brooks Anderson
 * @date    07/27/2020
 * @brief   General Purpose Input Output Abstraction Layer. All application code
 *          and testing should use this API.
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
#ifdef Gpio_ll_Set
#   define Gpio_Set(pin)     Gpio_ll_Set(Gpio_ll_GetPinPort(pin), Gpio_ll_GetPinField(pin))
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
#ifdef Gpio_ll_Clr
#   define Gpio_Clr(pin)     Gpio_ll_Clr(Gpio_ll_GetPinPort(pin), Gpio_ll_GetPinField(pin))
#else
#   define GPIO_Clr(pin)    ((void)(pin))
#endif

/**
 * @brief   Toggles a pin logic state.
 * @note    This abstraction layer provides a default implementation of this
 *          macro. Implementing this macro will override the default one.
 * @param[in] pin      pin identifier
 *
 */
#ifdef Gpio_ll_Toggle
#   define Gpio_Toggle(pin)     Gpio_ll_Toggle(Gpio_ll_GetPinPort(pin), Gpio_ll_GetPinField(pin))
#else
#   define Gpio_Toggle(pin)    ((void)(pin))
#endif

/**
 * @brief   Configures pin as an output
 * @note    This abstraction layer provides a default implementation of this
 *          macro. Implementing this macro will override the default one.
 * @param[in] pin      pin identifier
 *
 */
#ifdef Gpio_ll_AsOutput
#   define Gpio_AsOutput(pin)     Gpio_ll_AsOutput(Gpio_ll_GetPinPort(pin), Gpio_ll_GetPinField(pin))
#else
#   define Gpio_AsOutput(pin)    ((void)(pin))
#endif

#endif /* _GPIO_H */