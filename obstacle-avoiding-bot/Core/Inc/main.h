/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define USER_BUTTON_Pin GPIO_PIN_13
#define USER_BUTTON_GPIO_Port GPIOC
#define RED_Pin GPIO_PIN_5
#define RED_GPIO_Port GPIOA
#define GREEN_Pin GPIO_PIN_6
#define GREEN_GPIO_Port GPIOA
#define BLUE_Pin GPIO_PIN_7
#define BLUE_GPIO_Port GPIOA
#define H_Bridge1_Control2_Pin GPIO_PIN_10
#define H_Bridge1_Control2_GPIO_Port GPIOB
#define PWM_A_Pin GPIO_PIN_7
#define PWM_A_GPIO_Port GPIOC
#define H_Bridge1_Control1_Pin GPIO_PIN_8
#define H_Bridge1_Control1_GPIO_Port GPIOA
#define trigPin_Pin GPIO_PIN_10
#define trigPin_GPIO_Port GPIOA
#define H_Bridge2_Control1_Pin GPIO_PIN_4
#define H_Bridge2_Control1_GPIO_Port GPIOB
#define H_Bridge2_Control2_Pin GPIO_PIN_5
#define H_Bridge2_Control2_GPIO_Port GPIOB
#define PWM_B_Pin GPIO_PIN_6
#define PWM_B_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define MIN_DISTANCE 10
#define MAX_DISTANCE 50

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
