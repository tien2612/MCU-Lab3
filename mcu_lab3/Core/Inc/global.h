/*
 * global.h
 *
 *  Created on: Oct 24, 2022
 *      Author: nguye
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

// declare the duration of all default leds 
#define RED_TIME			500
#define GREEN_TIME			300
#define	YELLOW_TIME			200

#define button_mode_is_pressed		2
#define button_add_is_pressed		3
#define button_confirm_is_pressed	4
#define button_reset_is_pressed		5

extern int red_time;
extern int green_time;
extern int yellow_time;

extern int PORTA;
extern int status;	// 4 modes of traffic light such as: mode MODE, ADD, CONFIRM and RESET

#endif /* INC_GLOBAL_H_ */
