/*
 * gpioSTM32.h
 *
 *  Created on: 10 jul. 2021
 *      Author: ruben
 */

#ifndef INC_PERIPHERALS_GPIOSTM32_H_
#define INC_PERIPHERALS_GPIOSTM32_H_

#include <stdint.h>
#include "peripherals/gpioAbs.h"
#include "peripherals/gpioDefs.h"

class gpioSTM32: public gpioAbs
{
public:
	gpioSTM32(uint16_t pinID, uint16_t pinMode, uint16_t pinModePull);
	virtual ~gpioSTM32() = default;
	int getPinState() override;
	void writePinState(int pinValue) override;
	void tooglePin();

	/* New features could be implemented as a external interrupt pin... */
private:
	uint16_t mPinID;
	uint16_t mPinMode;
	uint16_t mPinModePull;

	GPIO_InitTypeDef* gpioInstance;
};

#endif /* INC_PERIPHERALS_GPIOSTM32_H_ */
