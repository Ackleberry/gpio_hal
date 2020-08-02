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
#   define Gpio_Set(pin) Gpio_ll_Set(Gpio_ll_GetPinPort(pin), Gpio_ll_GetPinField(pin))
#else
#   define Gpio_Set(pin) ((void)(pin))
#endif

/**
 * @brief   Clears a pin logic state to LOW
 * @note    This abstraction layer provides a default implementation of this
 *          macro. Implementing this macro will override the default one.
 * @param[in] pin      pin identifier
 *
 */
#ifdef Gpio_ll_Clear
#   define Gpio_Clear(pin) Gpio_ll_Clear(Gpio_ll_GetPinPort(pin), Gpio_ll_GetPinField(pin))
#else
#   define Gpio_Clear(pin) ((void)(pin))
#endif

/**
 * @brief   Toggles a pin logic state.
 * @note    This abstraction layer provides a default implementation of this
 *          macro. Implementing this macro will override the default one.
 * @param[in] pin      pin identifier
 *
 */
#ifdef Gpio_ll_Toggle
#   define Gpio_Toggle(pin) Gpio_ll_Toggle(Gpio_ll_GetPinPort(pin), Gpio_ll_GetPinField(pin))
#else
#   define Gpio_Toggle(pin) ((void)(pin))
#endif

/**
 * @brief   Configures pin as push pull output
 * @note    This abstraction layer provides a default implementation of this
 *          macro. Implementing this macro will override the default one.
 * @param[in] pin      pin identifier
 *
 */
#ifdef Gpio_ll_AsOutput
#   define Gpio_AsOutput(pin) Gpio_ll_AsOutput(Gpio_ll_GetPinPort(pin), Gpio_ll_GetPinField(pin))
#else
#   define Gpio_AsOutput(pin) ((void)(pin))
#endif

/**
 * @brief   Configures pin as an input with no pull up/down resistor
 * @note    This abstraction layer provides a default implementation of this
 *          macro. Implementing this macro will override the default one.
 * @param[in] pin      pin identifier
 *
 */
#ifdef Gpio_ll_AsInput
#   define Gpio_AsInput(pin) Gpio_ll_AsInput(Gpio_ll_GetPinPort(pin), Gpio_ll_GetPinField(pin))
#else
#   define Gpio_AsInput(pin) ((void)(pin))
#endif

/**
 * @brief   Determines if the pin is set high. Evaluates to true or false.
 * @note    This abstraction layer provides a default implementation of this
 *          macro. Implementing this macro will override the default one.
 * @param[in] pin      pin identifier
 *
 */
#ifdef Gpio_ll_IsSet
#   define Gpio_IsSet(pin) Gpio_ll_IsSet(Gpio_ll_GetPinPort(pin), Gpio_ll_GetPinField(pin))
#else
#   define Gpio_IsSet(pin) ((void)(pin))
#endif

#endif /* _GPIO_H */