/*
 * gpioAbs.h
 *
 *  Created on: 10 jul. 2021
 *      Author: ruben
 */

#ifndef SRC_PERIPHERALS_GPIOABS_H_
#define SRC_PERIPHERALS_GPIOABS_H_

class gpioAbs
{
public:
	gpioAbs(){}
	virtual ~gpioAbs();
	virtual int getPinState();
	virtual void writePinState(int pinValue);
};

#endif /* SRC_PERIPHERALS_GPIOABS_H_ */
