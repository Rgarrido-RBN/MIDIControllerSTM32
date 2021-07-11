/*
 * gpioDefs.h
 *
 *  Created on: Jul 9, 2021
 *      Author: ruben
 */

#ifndef INC_PERIPHERALS_GPIODEFS_H_
#define INC_PERIPHERALS_GPIODEFS_H_

#include "peripherals/gpio.h"

#define FIRST_SWITCH 1

typedef struct{
	uint32_t      pin;
	GPIO_TypeDef* port;
}gpioPortPin;

GPIO_InitTypeDef* gpioInitPAL(uint16_t pin, uint16_t mode, uint16_t pullMode);

extern gpioPortPin pinsLookupTable[];

typedef enum
{
	PAL_GPIO_MODE_INPUT = 0,
	PAL_GPIO_MODE_OUTPUT_PP,
	PAL_GPIO_MODE_OUTPUT_OD,
	PAL_GPIO_MODE_AF_PP,
	PAL_GPIO_MODE_AF_OD,
	PAL_GPIO_MODE_AF_INPUT,
	PAL_GPIO_MODE_ANALOG,
	PAL_GPIO_MODE_IT_RISING,
	PAL_GPIO_MODE_IT_FALLING,
	PAL_GPIO_MODE_IT_RISING_FALLING,
	PAL_GPIO_MODE_EVT_RISING,
	PAL_GPIO_MODE_EVT_FALLING,
	PAL_GPIO_MODE_EVT_RISING_FALLING
};

typedef enum
{
	PAL_GPIO_PULLUP,
	PAL_GPIO_NOPULL,
	PAL_GPIO_PULLDOWN
};

typedef enum
{
	PAL_GPIO_SPEED_FREQ_LOW,
	PAL_GPIO_SPEED_FREQ_MEDIUM,
	PAL_GPIO_SPEED_FREQ_HIGH
};
#endif /* INC_PERIPHERALS_GPIODEFS_H_ */
