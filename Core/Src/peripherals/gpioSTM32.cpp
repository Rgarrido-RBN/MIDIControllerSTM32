/*
 * gpioSTM32.cpp
 *
 *  Created on: 10 jul. 2021
 *      Author: ruben
 */

#include <peripherals/gpioSTM32.h>

gpioSTM32::gpioSTM32(uint16_t pinID, uint16_t pinMode, uint16_t pinModePull)
:gpioAbs(), mPinID(pinID), mPinMode(pinMode), mPinModePull(pinModePull)
{
	gpioInstance = gpioInitPAL(mPinID, mPinMode, mPinModePull);
}

int gpioSTM32::getPinState()
{
	GPIO_PinState pinState = HAL_GPIO_ReadPin(pinsLookupTable[mPinID].port, gpioInstance->Pin);
	return (int)pinState;
}

void gpioSTM32::writePinState(int pinValue)
{
	HAL_GPIO_WritePin(pinsLookupTable[mPinID].port, gpioInstance->Pin, (GPIO_PinState)pinValue);
}

void gpioSTM32::tooglePin()
{
	HAL_GPIO_TogglePin(pinsLookupTable[mPinID].port, gpioInstance->Pin);
}
