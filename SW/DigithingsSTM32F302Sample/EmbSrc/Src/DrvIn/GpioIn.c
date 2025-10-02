#include "../Target/Target.h"
#include "../DrvIn/GpioIn.h"
#include "../STM32F302_Gen/STM32F302_GPIOB_Def.h"

eGpioInPortState GpioInGetPortB12(void) {
	volatile sSTM32F302_GPIOB* pSTM32F302_GPIOB = (sSTM32F302_GPIOB*)(F302_GPIOB_ADR);
	if (1 == pSTM32F302_GPIOB->STM32F302_GPIOB_IDR.Bit.IDR12) {
		return GPIO_IN_PORT_HIGH;
	}
	else {
		return GPIO_IN_PORT_LOW;
	}
}


