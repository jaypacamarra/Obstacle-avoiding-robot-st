/*
 * motor.h
 *
 *  Created on: Apr 30, 2021
 *      Author: jpaca
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "main.h"

#define FORWARD		1U
#define REVERSE		2U
#define LEFT		3U
#define RIGHT		4U

void setMotorSpeed(uint8_t dutyCycle);
void setMotorDirection(uint8_t direction);

#endif /* MOTOR_H_ */
