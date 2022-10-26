/*
 * led7seg.c
 *
 *  Created on: Oct 26, 2022
 *      Author: nguye
 */
#include "main.h"
#include "led7seg.h"
static uint8_t led7seg [10] = {0xC0 , 0xF9 , 0xA4 , 0xB0 , 0x99 , 0x92 , 0x82 , 0xF8 , 0x80 , 0x90};

void led7SEG_init() {
	display7SEG(0);
}
void update7SEG(int index, uint8_t number){
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

void display7SEG(int num) {
	GPIOB->ODR = led7seg[num];
}
