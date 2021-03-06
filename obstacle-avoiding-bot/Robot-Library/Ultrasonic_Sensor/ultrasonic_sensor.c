/*
 * ultrasonic_sensor.c
 *
 *  Created on: Apr 29, 2021
 *      Author: jpaca
 */

#include "ultrasonic_sensor.h"


uint16_t Time_at_rising_edge;
uint16_t Time_at_falling_edge;
uint16_t pulse_width;
uint8_t is_time_captured = 0;
extern float distance;
extern TIM_HandleTypeDef htim4;


float getDistance()
{
	HAL_GPIO_WritePin(trigPin_GPIO_Port, trigPin_Pin, 1);
	delay_us(10);
	HAL_GPIO_WritePin(trigPin_GPIO_Port, trigPin_Pin, 0);

	return distance;
}

// CALLBACK FUNCTION FOR TIMER 4 CHANNEL 1
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Channel == HAL_TIM_ACTIVE_CHANNEL_1)
	{
		if(is_time_captured==0)
		{
			Time_at_rising_edge = HAL_TIM_ReadCapturedValue(&htim4, TIM_CHANNEL_1);
			is_time_captured = 1;
			__HAL_TIM_SET_CAPTUREPOLARITY(&htim4, TIM_CHANNEL_1, TIM_INPUTCHANNELPOLARITY_FALLING);
		}
		else if(is_time_captured==1)
		{
			Time_at_falling_edge = HAL_TIM_ReadCapturedValue(&htim4, TIM_CHANNEL_1);
			__HAL_TIM_SET_COUNTER(&htim4, 0);

			if(Time_at_falling_edge>Time_at_rising_edge)
			{
				pulse_width = Time_at_falling_edge - Time_at_rising_edge;
				// calculate distance in cm
				distance = pulse_width / 59;
			}

			is_time_captured = 0;
			__HAL_TIM_SET_CAPTUREPOLARITY(&htim4, TIM_CHANNEL_1, TIM_INPUTCHANNELPOLARITY_RISING);
		}
	}
}
