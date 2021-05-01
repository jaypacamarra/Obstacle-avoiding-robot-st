/*
 * RGB.c
 *
 *  Created on: Apr 30, 2021
 *      Author: jpaca
 */

#include "RGB.h"

void RGB_SET(uint8_t color)
{
	switch(color)
	{
		case RED:
			HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, 1);
			HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, 0);
			HAL_GPIO_WritePin(BLUE_GPIO_Port, BLUE_Pin, 0);
			break;
		case GREEN:
			HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, 0);
			HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, 1);
			HAL_GPIO_WritePin(BLUE_GPIO_Port, BLUE_Pin, 0);
			break;
		case BLUE:
			HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, 0);
			HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, 0);
			HAL_GPIO_WritePin(BLUE_GPIO_Port, BLUE_Pin, 1);
			break;
		default:
			break;
	}
}

// void RGB_SET_PWM(uint8_t redState, uint8_t greenState, uint8_t blueState)
