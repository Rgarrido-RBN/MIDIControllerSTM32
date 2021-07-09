/*
 * swInit.cpp
 *
 *  Created on: Jul 9, 2021
 *      Author: ruben
 */

#include "swInit.h"
#include "FreeRTOS.h"

void softwareInit()
{
	HAL_Init();
	MX_FREERTOS_Init();
	osKernelStart();
}



