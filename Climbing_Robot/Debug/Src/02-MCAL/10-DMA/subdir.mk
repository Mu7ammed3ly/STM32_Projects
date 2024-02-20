################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/02-MCAL/10-DMA/DMA_program.c 

OBJS += \
./Src/02-MCAL/10-DMA/DMA_program.o 

C_DEPS += \
./Src/02-MCAL/10-DMA/DMA_program.d 


# Each subdirectory must supply rules for building sources it contributes
Src/02-MCAL/10-DMA/%.o Src/02-MCAL/10-DMA/%.su Src/02-MCAL/10-DMA/%.cyclo: ../Src/02-MCAL/10-DMA/%.c Src/02-MCAL/10-DMA/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-02-2d-MCAL-2f-10-2d-DMA

clean-Src-2f-02-2d-MCAL-2f-10-2d-DMA:
	-$(RM) ./Src/02-MCAL/10-DMA/DMA_program.cyclo ./Src/02-MCAL/10-DMA/DMA_program.d ./Src/02-MCAL/10-DMA/DMA_program.o ./Src/02-MCAL/10-DMA/DMA_program.su

.PHONY: clean-Src-2f-02-2d-MCAL-2f-10-2d-DMA

