#include "..\Target\Target.h"
#include "..\STM32F302_Gen\STM32F302_SPI3_Def.h"
#include "../STM32F302_Gen/STM32F302_GPIOC_Def.h"
#include "../HalOut/SpiDataOutDef.h"
#include "../HalOut/SpiProt.h"

typedef struct {
	unsigned char TxFifoHigh;
	unsigned char TxFifoLow;
} tTxFifo;

typedef struct {
	tTxFifo Bit;
	unsigned short All;
} uTxFifo;

uTxFifo TxFifo[2];

void Spi3OutMain(void) {
	volatile sSTM32F302_SPI3 * pSTM32F302_SPI3 = (sSTM32F302_SPI3 *)F302_SPI3_ADR;
	volatile uSTM32F302_SPI3_CR1 STM32F302_SPI3_CR1;
	volatile uSTM32F302_SPI3_CR2 STM32F302_SPI3_CR2;
	volatile uSTM32F302_SPI3_DR STM32F302_SPI3_DR;
	volatile sSTM32F302_GPIOC* pSTM32F302_GPIOC = (sSTM32F302_GPIOC*)F302_GPIOC_ADR;
	volatile uSTM32F302_GPIOC_BSRR STM32F302_GPIOC_BSRR;
	unsigned char i;

	const tSpiOutData * pSpiData;

	pSpiData = NfcGetData();

	if (0 != pSpiData->Count) {
		if (pSpiData->Count < 5) {

			STM32F302_SPI3_CR1.All = pSTM32F302_SPI3->STM32F302_SPI3_CR1.All;
			STM32F302_SPI3_CR1.Bit.SPE = 0;
			pSTM32F302_SPI3->STM32F302_SPI3_CR1.All = STM32F302_SPI3_CR1.All;

			STM32F302_SPI3_CR1.All = pSTM32F302_SPI3->STM32F302_SPI3_CR1.All;
			switch (pSpiData->SpiChannel) {
				case SPI_NFC    : STM32F302_SPI3_CR1.Bit.CPOL = 0; STM32F302_SPI3_CR1.Bit.CPHA = 1; break;
				default : break;
			}

			STM32F302_GPIOC_BSRR.All = 0;
			switch (pSpiData->SpiChannel) {
				case SPI_NFC    : STM32F302_GPIOC_BSRR.Bit.BR13 = 1; break;
				default : break;
			}

			pSTM32F302_GPIOC->STM32F302_GPIOC_BSRR.All = STM32F302_GPIOC_BSRR.All;

			STM32F302_SPI3_CR1.All = pSTM32F302_SPI3->STM32F302_SPI3_CR1.All;
			STM32F302_SPI3_CR1.Bit.SPE = 1;
			pSTM32F302_SPI3->STM32F302_SPI3_CR1.All = STM32F302_SPI3_CR1.All;


			STM32F302_SPI3_CR2.All = STM32F302_SPI3_CR2_RESET_VALUE;
			STM32F302_SPI3_CR2.Bit.SSOE = 1;
			STM32F302_SPI3_CR2.Bit.DS = (8-1);
			STM32F302_SPI3_CR2.Bit.FRXTH = 1;
			STM32F302_SPI3_CR2.Bit.RXNEIE = 1;
			pSTM32F302_SPI3->STM32F302_SPI3_CR2.All = STM32F302_SPI3_CR2.All;


			//STM32F302_SPI3_DR.All = pSTM32F302_SPI3->STM32F302_SPI3_DR.All;

			switch(pSpiData->Count)  {
				case 1:
				case 2:
					STM32F302_SPI3_DR.Bit.DR = (pSpiData->Data[1]<<8)|(pSpiData->Data[0]);
					pSTM32F302_SPI3->STM32F302_SPI3_DR.All = STM32F302_SPI3_DR.All;
					break;
				case 3:
				case 4:
					STM32F302_SPI3_DR.Bit.DR = (pSpiData->Data[1]<<8)|(pSpiData->Data[0]);
					pSTM32F302_SPI3->STM32F302_SPI3_DR.All = STM32F302_SPI3_DR.All;
					STM32F302_SPI3_DR.Bit.DR = (pSpiData->Data[3]<<8)|(pSpiData->Data[2]);
					pSTM32F302_SPI3->STM32F302_SPI3_DR.All = STM32F302_SPI3_DR.All;
					break;
			}
#if 1
			i = 150;
			while (i--) {} // todo no waiting

			STM32F302_GPIOC_BSRR.All = 0;
			switch (pSpiData->SpiChannel) {
				case SPI_NFC    : STM32F302_GPIOC_BSRR.Bit.BS13 = 1; break;
				default : break;
			}
			pSTM32F302_GPIOC->STM32F302_GPIOC_BSRR.All = STM32F302_GPIOC_BSRR.All;
#endif
		}
	}
}


