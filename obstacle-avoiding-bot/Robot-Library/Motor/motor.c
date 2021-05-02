/*
 * motor.c
 *
 *  Created on: Apr 30, 2021
 *      Author: jpaca
 */

#include "motor.h"

void setMotor1Speed(uint8_t dutyCycle)
{
	// Set duty cycle of motors
}

void setMotor2Speed(uint8_t dutyCycle)
{
	// Set duty cycle of motors
}

void setMotorDirection(uint8_t direction)
{
	// Set direction command signals to H Bridge Driver
	if(direction==FORWARD)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge1_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge1_Control2_Pin,0);
	}
	else if(direction==REVERSE)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge1_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge1_Control2_Pin,1);
	}
	else if(direction==LEFT)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge1_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge1_Control2_Pin,0);
	}
	else if(direction==RIGHT)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge1_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge1_Control2_Pin,1);
	}
	else if(direction==HIGH_STOP)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge1_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge1_Control2_Pin,0);
	}
	else if(direction==LOW_STOP)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge1_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge1_Control2_Pin,1);
	}
}
