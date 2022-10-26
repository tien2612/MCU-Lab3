/*
 * led7seg.h
 *
 *  Created on: Oct 26, 2022
 *      Author: nguye
 */

#ifndef INC_LED7SEG_H_
#define INC_LED7SEG_H_

#define ON_7SEG		RESET
#define OFF_7SEG	SET
#include "main.h"

void led7SEG_init();
void display7SEG(int num);
void update7SEG(int index, uint8_t num);
//void update7SEG(int index, int number);


#endif /* INC_LED7SEG_H_ */
