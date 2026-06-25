################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/Workspace/FlagChip/01_fc_prj/MCAL/Src/CryIf/src/CryIf.c 

OBJS += \
./MCAL/Src/CryIf/src/CryIf.o 

C_DEPS += \
./MCAL/Src/CryIf/src/CryIf.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/Src/CryIf/src/CryIf.o: D:/Workspace/FlagChip/01_fc_prj/MCAL/Src/CryIf/src/CryIf.c MCAL/Src/CryIf/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=soft -mfpu=fpv5-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wunused -Wuninitialized -Wall -Wextra -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -Wno-unused-parameter -Wno-unused-function -Wno-unused-variable -Wformat=0  -g3 -DDEBUG -D__TARGET_USE_FPU -DAUTOSAR_OS_NOT_USED -DUSE_SW_VECTOR_MODE -DUART_PRINTF -I../../../../../MCAL/Src/Common/include -I../../../../../MCAL/Src/Mcu/include -I../../../../../MCAL/Src/Pwm/include -I../../../../../MCAL/Src/Gpt/include -I../../../../../MCAL/Src/Sdadc/include -I../../../../../MCAL/Src/Port/include -I../../../../../MCAL/Src/Dio/include -I../../../../../MCAL/Src/Wdg/include -I../../../../../MCAL/Src/WdgIf/include -I../../../../../MCAL/Src/Adc/include -I../../../../../MCAL/Src/EcuM/include -I../../../../../MCAL/Src/Dem/include -I../../../../../MCAL/Src/Lin/include -I../../../../../MCAL/Src/Uart/include -I../../../../../MCAL/Src/LinIf -I../../../../../MCAL/Src/Spi/include -I../../../../../MCAL/Src/Qdt/include -I../../../../../MCAL/Src/Pfls/include -I../../../../../MCAL/Src/Can/include -I../../../../../MCAL/Src/Icu/include -I../../../../../MCAL/Src/Fee/include -I../../../../../MCAL/Src/Fls/include -I../../../../../MCAL/Src/I2c/include -I../../../../../MCAL/Src/TrgSel/include -I../../../../../MCAL/Src/Dma/include -I../../../../../MCAL/Src/Crypto/include -I../../../../../MCAL/Src/CryIf/include -I../../../../../MCAL/Src/EthTrcv/include -I../../../../../MCAL/Src/EthSwt/include -I../../../../../MCAL/Src/EthIf/include -I../../../../../MCAL/Src/Eth/include -I../../../../../MCAL/Src/Os/include -I../../../../../MCAL/Src/Mb/include -I../../../../../MCAL/Src/Msc/include -I../../../../../MCAL/Src/Sent/include -I../../../../../MCAL/Src/Ssi/include -I../../../../../MCAL/Src/Ocu/include -I../../../../../MCAL/Src/Crc/include -I../../../../../MCAL/Src/Cordic/include -I../../../../../MCAL/Src/SchM/include -I../../../../../MCAL/Src/Eftu/include -I../../../../../MCAL/Src/Qdt/include -I../../../_MCAL_multicore_generate_8M/include -I../../../_Compile_Related_Files/Common/Include -I../../../_Compile_Related_Files/Systick/include -I../../../_Compile_Related_Files/Det/include -I../../../_BSW_generate/NvM/include -I../../../_BSW_generate/Config -I../../../MiddleWare/RTT -I../../../MiddleWare/UartDriver -I../../../MiddleWare/Mpu -I../../../Include -I../../../App/Include -I../../../../../MCAL/Src/Base/include -I../../../../../MCAL/Src/Base/include/MemMap -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


