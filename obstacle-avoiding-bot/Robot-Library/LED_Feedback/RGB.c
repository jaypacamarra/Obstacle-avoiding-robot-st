/*
 * RGB.c
 *
 *  Created on: Apr 30, 2021
 *      Author: jpaca
 */

#include "RGB.h"


/**
  * @brief  Sets RGB LED colors
  * @param  red state (0 = off, 1 = on)
  * @param  green state (0 = off, 1 = on)
  * @param  blue state (0 = off, 1 = on)
  * @retval none
  */
void RGB_SET(uint8_t red_state, uint8_t green_state, uint8_t blue_state)
{
	HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, red_state);
	HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, green_state);
	HAL_GPIO_WritePin(BLUE_GPIO_Port, BLUE_Pin, blue_state);
}

// void RGB_SET_PWM(uint8_t redState, uint8_t greenState, uint8_t blueState)
