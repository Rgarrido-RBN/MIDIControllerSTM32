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


}

int gpioSTM32::getPinState() {
}

int gpioSTM32::writePinState(int pinValue) {
}
