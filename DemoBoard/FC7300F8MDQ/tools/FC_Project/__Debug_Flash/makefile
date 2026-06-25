################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include _MCAL_multicore_generate_8M/src/subdir.mk
-include _Compile_Related_Files/Systick/src/subdir.mk
-include _Compile_Related_Files/Det/src/subdir.mk
-include _BSW_generate/NvM/source/subdir.mk
-include Startup/subdir.mk
-include Source/subdir.mk
-include MiddleWare/UartDriver/subdir.mk
-include MiddleWare/Mpu/subdir.mk
-include MCAL/Src/WdgIf/src/subdir.mk
-include MCAL/Src/Wdg/src/subdir.mk
-include MCAL/Src/Uart/src/subdir.mk
-include MCAL/Src/TrgSel/src/subdir.mk
-include MCAL/Src/Ssi/src/subdir.mk
-include MCAL/Src/Spi/src/subdir.mk
-include MCAL/Src/Sent/src/subdir.mk
-include MCAL/Src/Sdadc/src/subdir.mk
-include MCAL/Src/SchM/src/subdir.mk
-include MCAL/Src/Qdt/src/subdir.mk
-include MCAL/Src/Pwm/src/subdir.mk
-include MCAL/Src/Port/src/subdir.mk
-include MCAL/Src/Pfls/src/subdir.mk
-include MCAL/Src/Os/src/subdir.mk
-include MCAL/Src/Ocu/src/subdir.mk
-include MCAL/Src/Msc/src/subdir.mk
-include MCAL/Src/Mcu/src/subdir.mk
-include MCAL/Src/Mb/src/subdir.mk
-include MCAL/Src/LinIf/subdir.mk
-include MCAL/Src/Lin/src/subdir.mk
-include MCAL/Src/Icu/src/subdir.mk
-include MCAL/Src/I2c/src/subdir.mk
-include MCAL/Src/Gpt/src/subdir.mk
-include MCAL/Src/Fls/src/subdir.mk
-include MCAL/Src/Fee/src/subdir.mk
-include MCAL/Src/EthTrcv/src/subdir.mk
-include MCAL/Src/EthSwt/src/subdir.mk
-include MCAL/Src/Eth/src/subdir.mk
-include MCAL/Src/Eftu/src/subdir.mk
-include MCAL/Src/EcuM/src/subdir.mk
-include MCAL/Src/Dma/src/subdir.mk
-include MCAL/Src/Dio/src/subdir.mk
-include MCAL/Src/Dem/src/subdir.mk
-include MCAL/Src/Crypto/src/subdir.mk
-include MCAL/Src/CryIf/src/subdir.mk
-include MCAL/Src/Crc/src/subdir.mk
-include MCAL/Src/Cordic/src/subdir.mk
-include MCAL/Src/Common/src/subdir.mk
-include MCAL/Src/Can/src/subdir.mk
-include MCAL/Src/Adc/src/subdir.mk
-include App/Source/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := MCAL_FC7300F8MDQ_FC_Demo_Flash_8M
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.hex \

SECONDARY_SIZE += \
MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.siz \


# All Target
all: main-build

# Main-build Target
main-build: MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.elf secondary-outputs

# Tool invocations
MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.elf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU Arm Cross C++ Linker'
	arm-none-eabi-g++ -mcpu=cortex-m7 -mthumb -mfloat-abi=soft -mfpu=fpv5-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wunused -Wuninitialized -Wall -Wextra -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -Wno-unused-parameter -Wno-unused-function -Wno-unused-variable -Wformat=0  -g3 -T FC7300_8M.ld -nostartfiles -Xlinker --gc-sections -L"../Startup" -Wl,-Map,"MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.map" --specs=nosys.specs -Xlinker --print-memory-usage -o "MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.hex: MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: GNU Arm Cross Create Flash Image'
	arm-none-eabi-objcopy -O ihex "MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.elf"  "MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.hex"
	@echo 'Finished building: $@'
	@echo ' '

MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.siz: MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: GNU Arm Cross Print Size'
	arm-none-eabi-size --format=berkeley "MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(C_DEPS)$(CPP_DEPS) MCAL_FC7300F8MDQ_FC_Demo_Flash_8M.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
