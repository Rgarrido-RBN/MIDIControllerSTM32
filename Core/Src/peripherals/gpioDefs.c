/*
 * gpioDefs.c
 *
 *  Created on: Jul 9, 2021
 *      Author: ruben
 */

#include "peripherals/gpioDefs.h"

gpioPortPin pinsLookupTable[]=
{
		{GPIOA, GPIO_PIN_0} //Sample but not correct pin
};

uint32_t gpioModeLookUpTable[] =
{
		GPIO_MODE_INPUT,
		GPIO_MODE_OUTPUT_PP,
		GPIO_MODE_OUTPUT_OD,
		GPIO_MODE_AF_PP,
		GPIO_MODE_AF_OD,
		GPIO_MODE_AF_INPUT,
		GPIO_MODE_ANALOG,
		GPIO_MODE_IT_RISING,
		GPIO_MODE_IT_FALLING,
		GPIO_MODE_IT_RISING_FALLING,
		GPIO_MODE_EVT_RISING,
		GPIO_MODE_EVT_FALLING,
		GPIO_MODE_EVT_RISING_FALLING
};

uint32_t gpioPullModeLookUpTable[] =
{
		GPIO_PULLUP,
		GPIO_NOPULL,
		GPIO_PULLDOWN
};

uint32_t gpioSpeedLookUpTable[] =
{
		GPIO_SPEED_FREQ_LOW,
		GPIO_SPEED_FREQ_MEDIUM,
		GPIO_SPEED_FREQ_HIGH
};

GPIO_InitTypeDef* gpioInitPAL(uint16_t pin, uint16_t mode, uint16_t pullMode)
{
	  GPIO_InitTypeDef GPIO_InitStruct = {0};

	  /* GPIO Ports Clock Enable */
	  __HAL_RCC_GPIOC_CLK_ENABLE();

	  GPIO_InitStruct.Pin = pinsLookupTable[pin].pin;
	  GPIO_InitStruct.Mode = gpioModeLookUpTable[mode];
	  GPIO_InitStruct.Pull = gpioPullModeLookUpTable[pullMode];
	  HAL_GPIO_Init(pinsLookupTable[pin].port, &GPIO_InitStruct);

	  return &GPIO_InitStruct;
}
