/*
 * swInit.cpp
 *
 *  Created on: Jul 9, 2021
 *      Author: ruben
 */

#include "sysInit/swInit.h"
#include "cmsis_os.h"
#include "FreeRTOS.h"

void MX_FREERTOS_Init(void);

void softwareInit()
{
	HAL_Init();
	MX_FREERTOS_Init();
	osKernelStart();
}



