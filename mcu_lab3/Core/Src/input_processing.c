/*
 * input_processing.c
 *
 *  Created on: Oct 24, 2022
 *      Author: TIEN
 */
#include "input_reading.h"
#include "input_processing.h"

enum ButtonState{
	BUTTON_RELEASED,
	BUTTON_PRESSED,
	BUTTON_PRESS_MORE_THAN_1S
};

enum ButtonState buttonState = BUTTON_RELEASED;

void fsm_for_input_processing() {
	//display7SEG(buttonState);
	switch(buttonState) {
		case BUTTON_RELEASED:
			if (is_button_pressed(0)) {
				buttonState = BUTTON_PRESSED;
			}
			break;
		case BUTTON_PRESSED:
			if (!is_button_pressed(0)) {
				buttonState = BUTTON_RELEASED;
			} else {
				if (is_button_pressed_1s(0)) {
					buttonState = BUTTON_PRESS_MORE_THAN_1S;
				}
			}
			break;
		case BUTTON_PRESS_MORE_THAN_1S:
			if (!is_button_pressed(0)) {
				buttonState = BUTTON_RELEASED;
			}
			// todo
			break;
		default:
			break;
	}
}
