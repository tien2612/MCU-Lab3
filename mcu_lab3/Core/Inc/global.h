/*
 * global.h
 *
 *  Created on: Oct 24, 2022
 *      Author: nguye
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

// declare the duration of all default leds 
#define RED_TIME					500
#define GREEN_TIME					300
#define	YELLOW_TIME					200

#define NORMAL_MODE					1
#define RED_MODE					2
#define AMBER_MODE					3
#define GREEN_MODE					4
#define MAN_RED_MODE				5
#define MAN_AMBER_MODE				6
#define MAN_GREEN_MODE				7
#define CONFIRM_STATE				8

#define button_mode_is_pressed		10
#define button_add_is_pressed		15
#define button_confirm_is_pressed	12
#define button_reset_is_pressed		13


extern int man_red_time;
extern int man_green_time;
extern int man_amber_time;
extern int temp_value;

extern int led_status;
extern int light_time;
extern int status;	// 4 modes of traffic light such as: mode MODE, ADD, CONFIRM and RESET
extern int index_led;
#endif /* INC_GLOBAL_H_ */
