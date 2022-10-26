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
	HAL_GPIO_WritePin(GPIOB, D1_Pin|D2_Pin|D3_Pin|D4_Pin|D5_Pin|D6_Pin, 1);
	switch(status) {
		case NORMAL_MODE:
			break;
		case RED_MODE:
			HAL_GPIO_TogglePin(GPIOB, D4_Pin);
			HAL_GPIO_TogglePin(GPIOB, D1_Pin);

			break;
		case AMBER_MODE:

			HAL_GPIO_TogglePin(GPIOB, D2_Pin);
			HAL_GPIO_TogglePin(GPIOB, D5_Pin);

			break;
		case GREEN_MODE:
			HAL_GPIO_TogglePin(GPIOB, D3_Pin);
			HAL_GPIO_TogglePin(GPIOB, D6_Pin);

			break;
	}
}
