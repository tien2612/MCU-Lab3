/*
 * output_display.c
 *
 *  Created on: Oct 25, 2022
 *      Author: TIEN
 */
#include "main.h"
#include "output_display.h"

extern UART_HandleTypeDef huart1;

int _write(int file, char *ptr, int len)
{
	HAL_UART_Transmit(&huart1, (uint8_t*)ptr, len, HAL_MAX_DELAY);
	return len;
}



