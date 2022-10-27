/*
 * traffic_light_processing.c
 *
 *  Created on: Oct 26, 2022
 *      Author: nguye
 */

#include "main.h"
#include "traffic_light_processing.h"
#include "input_reading.h"
#include "input_processing.h"
#include "global.h"
#include "led7seg.h"
void traffic_light_processing() {
	switch(status) {
		case NORMAL_MODE:

			break;
		case RED_MODE:
			HAL_GPIO_WritePin(GPIOB, D3_Pin | D6_Pin, 1); // turn off GREEN LED
			HAL_GPIO_TogglePin(GPIOB, D4_Pin | D1_Pin);
			break;
		case AMBER_MODE:
			HAL_GPIO_WritePin(GPIOB, D1_Pin | D4_Pin, 1); // turn off RED LED
			HAL_GPIO_TogglePin(GPIOB, D2_Pin | D5_Pin);
			break;
		case GREEN_MODE:
			HAL_GPIO_WritePin(GPIOB, D1_Pin | D2_Pin | D4_Pin | D5_Pin, 1); // turn off AMBER LED
			HAL_GPIO_TogglePin(GPIOB, D3_Pin | D6_Pin);
			break;
	}
}
