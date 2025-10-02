#include "../App/LedBus.h"
#include "../HalOut/NeoPixel.h"
#include "../Drv/F302Timer2.h"

//#define NEOPIXEL_WS6812
#define NEOPIXEL_WS2812B

#ifdef NEOPIXEL_WS6812
	#define NEO_PIXEL_HIGH_TIME ((TIMER2_PERIOD_RELOAD_VALUE * 1UL) / 2UL)
	#define NEO_PIXEL_LOW_TIME ((TIMER2_PERIOD_RELOAD_VALUE * 3UL) / 10UL)
#endif

#ifdef NEOPIXEL_WS2812B
	#define NEO_PIXEL_HIGH_TIME ((TIMER2_PERIOD_RELOAD_VALUE * 85UL ) / 125UL)
	#define NEO_PIXEL_LOW_TIME  ((TIMER2_PERIOD_RELOAD_VALUE * 40UL ) / 125UL)
#endif


#define NPH NEO_PIXEL_HIGH_TIME
#define NPL NEO_PIXEL_LOW_TIME

uNeoPixelProtocol NeoPixelProtocol;
unsigned char NeoPixelLedStripBrightness;

const unsigned long NEOPIXEL_MASK[16][4] = {
	{NPL, NPL, NPL, NPL},
	{NPL, NPL, NPL, NPH},
	{NPL, NPL, NPH, NPL},
	{NPL, NPL, NPH, NPH},
	{NPL, NPH, NPL, NPL},
	{NPL, NPH, NPL, NPH},
	{NPL, NPH, NPH, NPL},
	{NPL, NPH, NPH, NPH},
	{NPH, NPL, NPL, NPL},
	{NPH, NPL, NPL, NPH},
	{NPH, NPL, NPH, NPL},
	{NPH, NPL, NPH, NPH},
	{NPH, NPH, NPL, NPL},
	{NPH, NPH, NPL, NPH},
	{NPH, NPH, NPH, NPL},
	{NPH, NPH, NPH, NPH}
};

void NeoPixelInit(void) {
	unsigned short i;
	for (i = 0; i < NEOPIXEL_DATA_SIZE_RAW; i++) {
		NeoPixelProtocol.NeoPixelData[i] = NEO_PIXEL_LOW_TIME;
	}

	for (i = NEOPIXEL_DATA_SIZE_RAW; i < (NEOPIXEL_DATA_SIZE_RAW + NEO_PIXEL_TIME_RESET); i++) {
		NeoPixelProtocol.NeoPixelData[i] = 0;
	}
	NeoPixelLedStripBrightness = 0;
}

void NeoPixelMain(void) {
	unsigned char i;
	unsigned char BrightnessRed, BrightnessGreen, BrightnessBlue;
	unsigned char MaskLowRed, MaskLowGreen, MaskLowBlue; 
	unsigned char MaskHighRed, MaskHighGreen, MaskHighBlue;
	unsigned char PixelIndex;
	const tLedStripGRBW* pNeoPixelLedStripGRBW;
	pNeoPixelLedStripGRBW = LedBusGetStrip();
	NeoPixelLedStripBrightness = LedBusGetBrightness();
	for (PixelIndex = 0; PixelIndex < NEOPIXEL_NUM_PIXEL_IN_STRIP; PixelIndex++) {
		BrightnessRed = pNeoPixelLedStripGRBW->LedBrightness[PixelIndex].LedRed;
		BrightnessGreen = pNeoPixelLedStripGRBW->LedBrightness[PixelIndex].LedGreen;
		BrightnessBlue = pNeoPixelLedStripGRBW->LedBrightness[PixelIndex].LedBlue;
		if (1 == BrightnessRed) { BrightnessRed = NeoPixelLedStripBrightness; }
		if (1 == BrightnessGreen) { BrightnessGreen = NeoPixelLedStripBrightness; }
		if (1 == BrightnessBlue) { BrightnessBlue = NeoPixelLedStripBrightness; }
		MaskLowRed = BrightnessRed & 0x0F;
		MaskLowGreen = BrightnessGreen & 0x0F;
		MaskLowBlue = BrightnessBlue & 0x0F;
		for (i = 0; i < 4; i++) {
			NeoPixelProtocol.NeoPixelDtaGrb[PixelIndex].NeoPixelBitsRed[i+4] = NEOPIXEL_MASK[MaskLowRed][i];
			NeoPixelProtocol.NeoPixelDtaGrb[PixelIndex].NeoPixelBitsGreen[i+4] = NEOPIXEL_MASK[MaskLowGreen][i];
			NeoPixelProtocol.NeoPixelDtaGrb[PixelIndex].NeoPixelBitsBlue[i+4] = NEOPIXEL_MASK[MaskLowBlue][i];
		}
		MaskHighRed = (BrightnessRed & 0xF0) >> 4;
		MaskHighGreen = (BrightnessGreen & 0xF0) >> 4;
		MaskHighBlue = (BrightnessBlue & 0xF0) >> 4;
		for (i = 0; i < 4; i++) {
			NeoPixelProtocol.NeoPixelDtaGrb[PixelIndex].NeoPixelBitsRed[i] = NEOPIXEL_MASK[MaskHighRed][i];
			NeoPixelProtocol.NeoPixelDtaGrb[PixelIndex].NeoPixelBitsGreen[i] = NEOPIXEL_MASK[MaskHighGreen][i];
			NeoPixelProtocol.NeoPixelDtaGrb[PixelIndex].NeoPixelBitsBlue[i] = NEOPIXEL_MASK[MaskHighBlue][i];
		}
	}
}

uNeoPixelProtocol * pNeoPixelGetProtocolData(void) {
	return (uNeoPixelProtocol *)&NeoPixelProtocol.NeoPixelData[0];
}
