################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Robot-Library/Ultrasonic_Sensor/subdir.mk
-include Robot-Library/Motor/subdir.mk
-include Robot-Library/LED_Feedback/subdir.mk
-include Drivers/STM32G4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

BUILD_ARTIFACT_NAME := obstacle-avoiding-bot
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
obstacle-avoiding-bot.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
obstacle-avoiding-bot.list \

OBJCOPY_BIN += \
obstacle-avoiding-bot.bin \


# All Target
all: main-build

# Main-build Target
main-build: obstacle-avoiding-bot.elf secondary-outputs

# Tool invocations
obstacle-avoiding-bot.elf: $(OBJS) $(USER_OBJS) C:\Users\jpaca\Google\ Drive\Engineering\Projects\PROJ-045\ -\ Obstacle\ Avoiding\ Robot\Software\Obstacle-avoiding-robot-st\obstacle-avoiding-bot\STM32G474RETX_FLASH.ld
	arm-none-eabi-gcc -o "obstacle-avoiding-bot.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\jpaca\Google Drive\Engineering\Projects\PROJ-045 - Obstacle Avoiding Robot\Software\Obstacle-avoiding-robot-st\obstacle-avoiding-bot\STM32G474RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="obstacle-avoiding-bot.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

obstacle-avoiding-bot.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "obstacle-avoiding-bot.list"
	@echo 'Finished building: $@'
	@echo ' '

obstacle-avoiding-bot.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "obstacle-avoiding-bot.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets
