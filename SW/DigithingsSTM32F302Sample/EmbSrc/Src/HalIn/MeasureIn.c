#include "../Drv/F302Dma.h"

#define MEASURE_IN_AD_CHANNEL_4 4
#define MEASURE_IN_AD_CHANNEL_5 5
#define MEASURE_IN_AD_CHANNEL_6 6
#define MEASURE_IN_AD_CHANNEL_7 7
#define MEASURE_IN_DMA_ARRAY_OFFSET 4

#define MEASURE_IN_AD_CHN_CP (MEASURE_IN_AD_CHANNEL_4-MEASURE_IN_DMA_ARRAY_OFFSET)
#define MEASURE_IN_AD_CHN_PP (MEASURE_IN_AD_CHANNEL_5-MEASURE_IN_DMA_ARRAY_OFFSET)
#define MEASURE_IN_AD_CHN_SUPPLY_VOLTAGE (MEASURE_IN_AD_CHANNEL_6-MEASURE_IN_DMA_ARRAY_OFFSET)
#define MEASURE_IN_AD_CHN_TEMP (MEASURE_IN_AD_CHANNEL_7-MEASURE_IN_DMA_ARRAY_OFFSET)

signed short MeasureInTempInGradcDiv10;
unsigned short MeasureInSupplyVoltageInMv;

void MeasureInInit(void) {

}

signed short MeasureInGetTempInGradcDiv10(void) {
	return MeasureInTempInGradcDiv10;
}

unsigned short MeasureInGetSupplyVoltageInMv(void) {
	return MeasureInTempInGradcDiv10;
}

unsigned short MeasureInGetCpRaw(void) {
	return DmaGetValueAdc(0);
}

unsigned short MeasureInGetStateOfChargeRaw(void) {
	return DmaGetValueAdc(1);
}
