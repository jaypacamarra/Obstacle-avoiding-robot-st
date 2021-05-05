/*
 * motor.h
 *
 *  Created on: Apr 30, 2021
 *      Author: jpaca
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "main.h"

#define FORWARD		(0x0001U)
#define REVERSE		(0x0002U)
#define LEFT		(0x0003U)
#define RIGHT		(0x0003U)
#define HIGH_STOP	(0x0004U)
#define LOW_STOP	(0x0005U)

void setMotorASpeed(uint8_t dutyCycle);
void setMotorBSpeed(uint8_t dutyCycle);
void setMotorDirection(uint8_t direction);

#endif /* MOTOR_H_ */
