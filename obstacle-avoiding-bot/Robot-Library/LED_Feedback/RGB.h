/*
 * RGB.h
 *
 *  Created on: Apr 30, 2021
 *      Author: jpaca
 */

#ifndef RGB_H_
#define RGB_H_

#include "main.h"

typedef enum
{
	RED,
	GREEN,
	BLUE
}color;

void RGB_SET(uint8_t color);
// void RGB_SET_PWM(uint8_t redState, uint8_t greenState, uint8_t blueState)


#endif /* RGB_H_ */
