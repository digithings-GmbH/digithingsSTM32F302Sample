#include "Usart1In.h"

#include "../STM32F302_Gen/STM32F302_USART1_EXTI25_Def.h"
#include "../Target/Target.h"

unsigned long Usart1RxCount;
unsigned char Usart1RxIntIndex;

tUsart1RxData Usart1RxData;

void Usart1InInit(void) {
	Usart1RxCount = 0;
	Usart1RxIntIndex = 0;
}

unsigned long Usart1InGetRxCount(void) {
	return Usart1RxCount;
}

tUsart1RxData * Usart1GetRxData(void) {
	return &Usart1RxData;
}

void Usart1InInt(void) {

	volatile sSTM32F302_USART1_EXTI25* pSTM32F302_USART1_EXTI25 = (sSTM32F302_USART1_EXTI25*)F302_USART1_ADR;
	volatile uSTM32F302_USART1_EXTI25_ICR STM32F302_USART1_EXTI25_ICR;
	unsigned char InData;

	if ( 1 == pSTM32F302_USART1_EXTI25->STM32F302_USART1_EXTI25_ISR.Bit.ORE) { /* overrun */
		STM32F302_USART1_EXTI25_ICR.All = pSTM32F302_USART1_EXTI25->STM32F302_USART1_EXTI25_ICR.All;
		STM32F302_USART1_EXTI25_ICR.Bit.ORECF = 1;
		pSTM32F302_USART1_EXTI25->STM32F302_USART1_EXTI25_ICR.All = STM32F302_USART1_EXTI25_ICR.All;
 		ASM("NOP");
	}
	else {
		InData = pSTM32F302_USART1_EXTI25->STM32F302_USART1_EXTI25_RDR.Bit.RDR;

		Usart1RxData.Data[Usart1RxIntIndex] = InData;
		Usart1RxIntIndex++;
		if ( 1 == pSTM32F302_USART1_EXTI25->STM32F302_USART1_EXTI25_ICR.Bit.CMCF) {
			STM32F302_USART1_EXTI25_ICR.All = pSTM32F302_USART1_EXTI25->STM32F302_USART1_EXTI25_ICR.All;
			STM32F302_USART1_EXTI25_ICR.Bit.CMCF = 1;
			pSTM32F302_USART1_EXTI25->STM32F302_USART1_EXTI25_ICR.All = STM32F302_USART1_EXTI25_ICR.All;
			Usart1RxData.Count = Usart1RxIntIndex;
			Usart1RxIntIndex = 0;
			Usart1RxCount++;
		}
	}
}
