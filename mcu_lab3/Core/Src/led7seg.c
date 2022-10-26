/*
 * led7seg.c
 *
 *  Created on: Oct 26, 2022
 *      Author: nguye
 */
#include "main.h"
#include "led7seg.h"

void update7SEG(int index, int number){
	switch(index) {
		case 0:
			HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin | EN3_Pin, OFF_7SEG); // turn all led off

			display7SEG(number);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin | EN3_Pin, OFF_7SEG); // turn all led off
			display7SEG(number);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin | EN3_Pin, OFF_7SEG); // turn all led off
			display7SEG(number);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin | EN3_Pin, OFF_7SEG); // turn all led off
			display7SEG(number);
			break;
		default:
			break;
	}
}
