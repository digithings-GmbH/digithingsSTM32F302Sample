#include "WrapperDef.h"

extern unsigned short DmaAdc[4];

DLL_EXPORT void WrapperAdcSetChannel(unsigned long AdcChannel, unsigned long AdcValue) {
	DmaAdc[AdcChannel] = AdcValue;
}

DLL_EXPORT unsigned long WrapperAdcGetChannel(unsigned long AdcChannel) {
	return DmaAdc[AdcChannel];
}
