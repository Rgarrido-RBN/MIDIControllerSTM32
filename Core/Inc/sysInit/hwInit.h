/*
 * hwInit.h
 *
 *  Created on: 9 jul. 2021
 *      Author: ruben
 */

#ifndef INC_SYSINIT_HWINIT_H_
#define INC_SYSINIT_HWINIT_H_

extern "C"
{
	#include <stm32f1xx_hal.h>
	#include "cmsis_os.h"
}

void hardwareInit();
void Error_Handler(void);



#endif /* INC_SYSINIT_HWINIT_H_ */
