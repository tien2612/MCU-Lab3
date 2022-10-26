/*
 * led7seg.c
 *
 *  Created on: Oct 26, 2022
 *      Author: nguye
 */
#include "main.h"
#include "led7seg.h"

//void update7SEG(int index, int number){
//	switch(index) {
//		case 0:
//			HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin | EN3_Pin, OFF_7SEG); // turn all led off
//
//			display7SEG(number);
//			break;
//		case 1:
//			HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin | EN3_Pin, OFF_7SEG); // turn all led off
//			display7SEG(number);
//			break;
//		case 2:
//			HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin | EN3_Pin, OFF_7SEG); // turn all led off
//			display7SEG(number);
//			break;
//		case 3:
//			HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin | EN3_Pin, OFF_7SEG); // turn all led off
//			display7SEG(number);
//			break;
//		default:
//			break;
//	}
//}

void display7SEG(int num) {
  switch(num) {
	  case 0 : {
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
		  break;
	  }

	  case 1 : {
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
		  break;
	  }

	  case 2 : {
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 1);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
		  break;
	  }
	  case 3 : {
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
		  break;
	  }
	  case 4 : {
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
		  break;
	  }
	  case 5 : {
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
		  break;
	  }
	  case 6 : {
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
		  break;
	  }
	  case 7 : {
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
		  break;
	  }
	  case 8 : {
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
		  break;
	  }
	  case 9 : {
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
		  break;
	  }

	  default : {
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 1);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
		  break;
	  }
  }
}
