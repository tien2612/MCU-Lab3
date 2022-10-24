/*
 * timer.c
 *
 *  Created on: Oct 24, 2022
 *      Author: nguye
 */

#ifndef SRC_TIMER_C_
#define SRC_TIMER_C_

#include "main.h"
#include "input_processing.h"

void HAL_TIM_PeriodElapsedCallback (TIM_HandleTypeDef *htim ) {
	if (htim->Instance == TIM2) {
		button_reading();
	}
}

#endif /* SRC_TIMER_C_ */
