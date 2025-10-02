#include "../Target/Target.h"
#include "../STM32F302_Gen/STM32F302_GPIOA_Def.h"
#include "../HalOut/PortOut.h"

void GpioOutPortA(void) {
	volatile sSTM32F302_GPIOA* pSTM32F302_GPIOA = (sSTM32F302_GPIOA*)F302_GPIOA_ADR;
	volatile uSTM32F302_GPIOA_BSRR STM32F302_GPIOA_BSRR;

	ePortOutState State = PortOutGetStatePA0();

	STM32F302_GPIOA_BSRR.All = 0;
	if (PORT_OUT_PORT_HIGH == State) {STM32F302_GPIOA_BSRR.Bit.BS0 = 1;}
	else {STM32F302_GPIOA_BSRR.Bit.BR0 = 1;}

	State = PortOutGetStatePA3();

	if (PORT_OUT_PORT_HIGH == State) {STM32F302_GPIOA_BSRR.Bit.BS3 = 1;}
	else {STM32F302_GPIOA_BSRR.Bit.BR3 = 1;}

	State = PortOutGetStatePA4();

	if (PORT_OUT_PORT_HIGH == State) {STM32F302_GPIOA_BSRR.Bit.BS4 = 1;}
	else {STM32F302_GPIOA_BSRR.Bit.BR4 = 1;}

	pSTM32F302_GPIOA->STM32F302_GPIOA_BSRR.All = STM32F302_GPIOA_BSRR.All;
}

void GpioOutMain(void) {
	GpioOutPortA();
}


/*
 In this function we set the Voltage of the output pins.
 BS8 means Bit Set and BR8 means Reset of Pin 8 of port B.
 We have to use the .All Union because the STM32 can only write to registers with long (4 Byte) in one step!
 You cant set Bits seperately like in the PIC Microcontrollers.
 */
