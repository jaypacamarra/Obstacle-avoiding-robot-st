################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Robot-Library/Ultrasonic_Sensor/ultrasonic_sensor.c 

OBJS += \
./Robot-Library/Ultrasonic_Sensor/ultrasonic_sensor.o 

C_DEPS += \
./Robot-Library/Ultrasonic_Sensor/ultrasonic_sensor.d 


# Each subdirectory must supply rules for building sources it contributes
Robot-Library/Ultrasonic_Sensor/ultrasonic_sensor.o: ../Robot-Library/Ultrasonic_Sensor/ultrasonic_sensor.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32G474xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/jpaca/Google Drive/Engineering/Projects/PROJ-045 - Obstacle Avoiding Robot/Software/Obstacle-avoiding-robot-st/obstacle-avoiding-bot/Robot-Library/Ultrasonic_Sensor" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Robot-Library/Ultrasonic_Sensor/ultrasonic_sensor.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

