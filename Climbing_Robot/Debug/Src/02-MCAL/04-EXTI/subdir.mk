################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/02-MCAL/04-EXTI/EXTI_program.c 

OBJS += \
./Src/02-MCAL/04-EXTI/EXTI_program.o 

C_DEPS += \
./Src/02-MCAL/04-EXTI/EXTI_program.d 


# Each subdirectory must supply rules for building sources it contributes
Src/02-MCAL/04-EXTI/%.o Src/02-MCAL/04-EXTI/%.su Src/02-MCAL/04-EXTI/%.cyclo: ../Src/02-MCAL/04-EXTI/%.c Src/02-MCAL/04-EXTI/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-02-2d-MCAL-2f-04-2d-EXTI

clean-Src-2f-02-2d-MCAL-2f-04-2d-EXTI:
	-$(RM) ./Src/02-MCAL/04-EXTI/EXTI_program.cyclo ./Src/02-MCAL/04-EXTI/EXTI_program.d ./Src/02-MCAL/04-EXTI/EXTI_program.o ./Src/02-MCAL/04-EXTI/EXTI_program.su

.PHONY: clean-Src-2f-02-2d-MCAL-2f-04-2d-EXTI

