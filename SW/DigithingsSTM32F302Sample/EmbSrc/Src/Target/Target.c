#include "Target.h"

#ifdef WIN_SIM

tTargetMemoryBlock TargetMemory[PERIPHERAL_REGISTER_COUNT];

void TargetRegisterWriteUsart1Tdr(unsigned char Data) {
}

#else

#include "../Drv/Interrupt.h"
#include "../STM32F302_Gen/STM32F302_USART1_EXTI25_Def.h"
#include "../DrvIn/Spi3In.h"
 

typedef void
(* const pHandler)(void);

__attribute__ ((section(".isr_vector.core"),used))
const pHandler CoreHandler[16] = {
		(pHandler)0x20001000, // Stack Pointer after Reset // 0x00
		intReset,            //  The Microcontroller jumps to this function after Reset // 0x04
		intNmi,              // 0x08
		intHardFault,        // 0x0C
		0,                   // 0x10
		0,                   // 0x14
		0,                   // 0x18
		0,                   // 0x1c
		0,                   // 0x20
		0,                   // 0x24
		0,                   // 0x28
		intSvCall,           // 0x2c
		0,                   // 0x30
		0,                   // 0x34
		intPendSv,           // 0x38
		intSysTick           // 0x3C
};

__attribute__ ((section(".isr_vector.interrupt"),used))
const pHandler InterruptHandler[82] = {
		IntUnused, /* 0 */
		IntUnused, /* 1 */
		IntUnused, /* 2 */
		IntUnused, /* 3 */
		IntUnused, /* 4 */
		IntUnused, /* 5 */
		IntUnused, /* 6 */
		IntUnused, /* 7 */
		IntUnused, /* 8 */
		IntUnused, /* 9 */
		IntUnused, /* 10 */
		IntUnused, /* 11 */
		IntUnused, /* 12 */
		IntUnused, /* 13 */
		IntUnused, /* 14 */
		IntUnused, /* 15 */
		IntUnused, /* 16 */
		IntUnused, /* 17 */
		IntUnused, /* 18 */
		IntUnused, /* 19 */
		IntUnused, /* 20 */
		IntUnused, /* 21 */
		IntUnused, /* 22 */
		IntUnused, /* 23 */
		IntUnused, /* 24 */
		IntUnused, /* 25 */
		IntUnused, /* 26 */
		IntUnused, /* 27 */
		IntUnused, /* 28 */
		IntUnused, /* 29 */
		IntUnused, /* 30 */
		IntUnused, /* 31 */
		IntUnused, /* 32 */
		IntUnused, /* 33 */
		IntUnused, /* 34 */
		IntUnused, /* 35 */
		IntUnused, /* 36 */
		IntUnused, /* 37 */
		IntUnused, /* 38 */
		IntUnused, /* 39 */
		IntUnused, /* 40 */
		IntUnused, /* 41 */
		IntUnused, /* 42 */
		IntUnused, /* 43 */
		IntUnused, /* 44 */
		IntUnused, /* 45 */
		IntUnused, /* 46 */
		IntUnused, /* 47 */
		IntUnused, /* 48 */
		IntUnused, /* 49 */
		IntUnused, /* 50 */
		Spi3InInt, /* 51 */
		IntUnused, /* 52 */
		IntUnused, /* 53 */
		IntUnused, /* 54 */
		IntUnused, /* 55 */
		IntUnused, /* 56 */
		IntUnused, /* 57 */
		IntUnused, /* 58 */
		IntUnused, /* 59 */
		IntUnused, /* 60 */
		IntUnused, /* 61 */
		IntUnused, /* 62 */
		IntUnused, /* 63 */
		IntUnused, /* 64 */
		IntUnused, /* 65 */
		IntUnused, /* 66 */
		IntUnused, /* 67 */
		IntUnused, /* 68 */
		IntUnused, /* 69 */
		IntUnused, /* 70 */
		IntUnused, /* 71 */
		IntUnused, /* 72 */
		IntUnused, /* 73 */
		IntUnused, /* 74 */
		IntUnused, /* 75 */
		IntUnused, /* 76 */
		IntUnused, /* 77 */
		IntUnused, /* 78 */
		IntUnused, /* 79 */
		IntUnused, /* 80 */
		IntUnused, /* 81 */
};

void TargetRegisterWriteUsart1Tdr(unsigned char Data) {
	volatile sSTM32F302_USART1_EXTI25* pSTM32F302_USART1_EXTI25 = (sSTM32F302_USART1_EXTI25*)F302_USART1_ADR;
	volatile uSTM32F302_USART1_EXTI25_TDR STM32F302_USART1_EXTI25_TDR;
	STM32F302_USART1_EXTI25_TDR.Bit.TDR = Data;
	pSTM32F302_USART1_EXTI25->STM32F302_USART1_EXTI25_TDR.Bit.TDR = STM32F302_USART1_EXTI25_TDR.All;
}
#endif
