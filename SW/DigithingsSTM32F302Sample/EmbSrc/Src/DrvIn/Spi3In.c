
#include "Spi3In.h"

#include "../Target/Target.h"
#include "..\STM32F302_Gen\STM32F302_SPI3_Def.h"

tSpiInData Spi1InData;
unsigned char Spi1RxCount;
unsigned char Test[2048];

void Spi3InInit(void) {
	unsigned long i;
	Spi1InData.Size = 0;
	for (i=0;i<4;i++) {
		Spi1InData.Data[i] = 0;
	}
	for (i=0;i<2048;i++) {
		Test[i] = 0x55;
	}
	Spi1RxCount=0;
}

tSpiInData Spi3InGetData(void) {
	tSpiInData ret;
	unsigned char i;
	ret.Size = Spi1RxCount;
	for (i=0;i<Spi1RxCount;i++){
		ret.Data[i] = Spi1InData.Data[i];
	}
	Spi1RxCount = 0;
	return ret;
}

void Spi3InInt(void) {
#if 1
	static unsigned long i = 0;
#endif
	volatile sSTM32F302_SPI3 * pSTM32F302_SPI3 = (sSTM32F302_SPI3 *)F302_SPI3_ADR;
	if (Spi1RxCount<4) {
		Spi1InData.Data[Spi1RxCount] = pSTM32F302_SPI3->STM32F302_SPI3_DR.Bit.DR;
		Spi1RxCount++;
	}
	else {
	}

#if 1
		for ( i= 0;i<255;i++) {
			Test[i] = Spi1InData.Data[Spi1RxCount] ;
		}
#endif
}
