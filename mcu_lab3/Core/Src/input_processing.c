/*
 * input_processing.c
 *
 *  Created on: Oct 24, 2022
 *      Author: TIEN
 */
#include "input_reading.h"
#include "input_processing.h"
#include "global.h"
#include "software_timer.h"
#include "led7seg.h"
#include "traffic_light_processing.h"
enum ButtonState{
	BUTTON_RELEASED,
	BUTTON_PRESSED,
	BUTTON_PRESS_MORE_THAN_1S
};

enum ButtonState buttonState = BUTTON_RELEASED;

int WhichButtonIsPressed() {
	if (is_button_pressed(0)) return button_mode_is_pressed;
	if (is_button_pressed(1)) return button_add_is_pressed;
	if (is_button_pressed(2)) return button_confirm_is_pressed;
	if (is_button_pressed(3)) return button_reset_is_pressed;

	return 0; // none of these button is pressed
}
void fsm_for_input_processing() {
	switch(buttonState) {
		case BUTTON_RELEASED:
			if (WhichButtonIsPressed()) {
				buttonState = BUTTON_PRESSED;
				switch(WhichButtonIsPressed()) {
					// NORMAL MODE
					case button_mode_is_pressed:
						switch(status) {
							case NORMAL_MODE:
								status = RED_MODE;
								//light_time = man_red_time;
								break;
							// RED && MAN_RED MODE
							case RED_MODE:
								// restore light_time if is not pressed button confirm
								light_time = man_amber_time;
								temp_value = light_time; // store value to temp variable if button add is pressed
								status = AMBER_MODE;
								break;
							case MAN_RED_MODE:
								status = AMBER_MODE;
							// AMBER && MAN_AMBER MODE
							case AMBER_MODE:
								// restore light_time if is not pressed button confirm
								light_time = man_green_time;
								temp_value = light_time; // store value to temp variable if button add is pressed
								status = GREEN_MODE;
								break;
							case MAN_AMBER_MODE:
								status = GREEN_MODE;
							// GREEN && MAN_GREEN MODE
							case GREEN_MODE:
								// restore light_time if is not pressed button confirm
								temp_value = light_time; // store value to temp variable if button add is pressed
								status = NORMAL_MODE;
							case MAN_GREEN_MODE:
								status = NORMAL_MODE;
							case CONFIRM_STATE:
								status = NORMAL_MODE;
							default:
								break;
						}
						buttonState = BUTTON_PRESSED;
						break;
					// ADD MODE
					case button_add_is_pressed:
						// Increasing time depending on current state
						switch(status) {
						case RED_MODE:
							status = MAN_RED_MODE;
							break;
						case AMBER_MODE:
							status = MAN_AMBER_MODE;
							break;
						case GREEN_MODE:
							status = MAN_GREEN_MODE;
							break;
						default:
							break;
						}
						updateTempTime();
						break;
					case button_confirm_is_pressed:
						confirmAdjustedTime();
						break;
					case button_reset_is_pressed:
						break;
					default: buttonState = BUTTON_RELEASED;
				}
			}
			break;
		case BUTTON_PRESSED:
			if (!WhichButtonIsPressed()) {
				buttonState = BUTTON_RELEASED;
			} else {
				if (is_button_pressed_1s(0)) {
					buttonState = BUTTON_PRESS_MORE_THAN_1S;
				}
			}
			break;
		case BUTTON_PRESS_MORE_THAN_1S:
			//firstLongPressButton = 0;
			if (!WhichButtonIsPressed()) {
				buttonState = BUTTON_RELEASED;
			}
			// TODO
			break;
		default:
			break;
	}
}
