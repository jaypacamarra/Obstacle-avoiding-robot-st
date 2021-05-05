/*
 * motor.c
 *
 *  Created on: Apr 30, 2021
 *      Author: jpaca
 */

#include "motor.h"


extern TIM_HandleTypeDef htim3;
extern TIM_HandleTypeDef htim8;


void setMotorASpeed(uint8_t dutyCycle)
{
	if(dutyCycle>100) dutyCycle=100;
	else if(dutyCycle<0) dutyCycle=0;

	// Set duty cycle of motors
	htim3.Instance->CCR2 = dutyCycle;
}

void setMotorBSpeed(uint8_t dutyCycle)
{
	if(dutyCycle>100) dutyCycle=100;
	else if(dutyCycle<0) dutyCycle=0;

	// Set duty cycle of motors
	htim8.Instance->CCR1 = dutyCycle;
}

void setMotorDirection(uint8_t direction)
{
	// Set direction command signals to H Bridge Driver
	if(direction==FORWARD)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge2_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge2_Control2_Pin,0);
	}
	else if(direction==REVERSE)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge2_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge2_Control2_Pin,1);
	}
	else if(direction==LEFT)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge2_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge2_Control2_Pin,0);
	}
	else if(direction==RIGHT)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge2_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge2_Control2_Pin,1);
	}
	else if(direction==HIGH_STOP)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge2_Control1_Pin,0);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge2_Control2_Pin,0);
	}
	else if(direction==LOW_STOP)
	{
		HAL_GPIO_WritePin(H_Bridge1_Control1_GPIO_Port,H_Bridge1_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge1_Control2_GPIO_Port,H_Bridge1_Control2_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control1_GPIO_Port,H_Bridge2_Control1_Pin,1);
		HAL_GPIO_WritePin(H_Bridge2_Control2_GPIO_Port,H_Bridge2_Control2_Pin,1);
	}
}
