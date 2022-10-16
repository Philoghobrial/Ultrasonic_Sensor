################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../dist_sens.c \
../gpio.c \
../icu.c \
../lcd.c \
../ultra.c 

OBJS += \
./dist_sens.o \
./gpio.o \
./icu.o \
./lcd.o \
./ultra.o 

C_DEPS += \
./dist_sens.d \
./gpio.d \
./icu.d \
./lcd.d \
./ultra.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


