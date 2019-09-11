################################################################################
# Automatically-generated file. Do not edit!
################################################################################

RM := rm -rf

C_SRCS += \
../ngap_codes/LTE_NGAP_DISP.c \
../ngap_codes/LTE_NGAP_Dec.c \
../ngap_codes/LTE_NGAP_Enc.c \
../ngap_codes/LTE_NGAP_TST.c \
../manual/Test_Aper.c \
../main.c

OBJS += \
./ngap_codes/LTE_NGAP_DISP.o \
./ngap_codes/LTE_NGAP_Dec.o \
./ngap_codes/LTE_NGAP_Enc.o \
./ngap_codes/LTE_NGAP_TST.o \
./manual/Test_Aper.o \
./main.o

C_DEPS += \
./ngap_codes/LTE_NGAP_DISP.d \
./ngap_codes/LTE_NGAP_Dec.d \
./ngap_codes/LTE_NGAP_Enc.d \
./ngap_codes/LTE_NGAP_TST.d \
./manual/Test_Aper.d \
./main.d
 

# Each subdirectory must supply rules for building sources it contributes
ngap_codes/%.o: ../ngap_codes/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

manual/%.o: ../manual/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


LIBS := -lasn_aper_supp_x86_64_v121


# All of the sources participating in the build are defined here

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: ngap_code_tst

# Tool invocations
ngap_code_tst: $(OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc -L../asn_support -o "ngap_code_tst" $(OBJS) $(LIBS)
	$(RM) $(OBJS) $(C_DEPS) 
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS) $(C_DEPS) ngap_code_tst
	-@echo 'Remove log file manually.'

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
