/*
 * global.c
 *
 *  Created on: Oct 24, 2022
 *      Author: nguye
 */


#include "global.h"
#include "main.h"

int man_red_time = 5;
int man_amber_time = 2;
int man_green_time = 3;

int led_status = 0;
int temp_value = 0;
int light_time = RED_TIME / 100;
int status = NORMAL_MODE;
int index_led = 0;
