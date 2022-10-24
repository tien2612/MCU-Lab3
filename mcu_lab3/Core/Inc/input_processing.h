/*
 * input_processing.h
 *
 *  Created on: Oct 24, 2022
 *      Author: nguye
 */

#ifndef INC_INPUT_PROCESSING_H_
#define INC_INPUT_PROCESSING_H_

void button_reading(void);
unsigned char is_button_pressed(unsigned char index);
unsigned char is_button_pressed_1s(unsigned char index);
unsigned char is_button_pressed_haft_a_second(unsigned char index);
void fsm_for_input_processing(void);

void display7SEG(int num);
#endif /* INC_INPUT_PROCESSING_H_ */
