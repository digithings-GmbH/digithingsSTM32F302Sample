#include "../HalIn/HwTestIn.h"
#include "../DrvIn/Usart1In.h"

typedef enum { NO_HWTEST_SEPERATOR, HWTEST_SEPERATOR_FOUND } eHwTestSeperatorState;
unsigned short HwTestInUsartInCounterOld;
unsigned char HwInProtDataString[24][3];
tHwInProtDataIn HwInProtDataIn;

void HwTestInInit(void) {
	HwTestInUsartInCounterOld = 0;
}

tHwInProtDataIn * HwTestInGetData(void) {
	return &HwInProtDataIn;
}

void HwTestInDecodeString(void) {
	tUsart1RxData* pData;
	pData = Usart1GetRxData();
	eHwTestSeperatorState SepState;
	unsigned char SeperatorCount;
	unsigned char SeperatorIndex[32];
	unsigned char i;
	SeperatorCount = 0;
	for (i = 0; i < pData->Count; i++) {
		SepState = NO_HWTEST_SEPERATOR;
		if (',' == pData->Data[i]) { SepState = HWTEST_SEPERATOR_FOUND; }
		if (':' == pData->Data[i]) { SepState = HWTEST_SEPERATOR_FOUND; }
		if ('\r' == pData->Data[i]) { SepState = HWTEST_SEPERATOR_FOUND; }
		if (HWTEST_SEPERATOR_FOUND == SepState) {
			if (SeperatorCount < 24) {
				SeperatorIndex[SeperatorCount] = i;
				SeperatorCount++;
			}
		}
	}

	for (i = 0; i < 24; i++) {
		switch (SeperatorIndex[i + 1] - SeperatorIndex[i] - 1) {
		case 1:
			HwInProtDataString[i][0] = '0';
			HwInProtDataString[i][1] = '0';
			HwInProtDataString[i][2] = pData->Data[SeperatorIndex[i] + 1];
			break;
		case 2:
			HwInProtDataString[i][0] = '0';
			HwInProtDataString[i][1] = pData->Data[SeperatorIndex[i] + 1];
			HwInProtDataString[i][2] = pData->Data[SeperatorIndex[i] + 2];
			break;
		case 3:
			HwInProtDataString[i][0] = pData->Data[SeperatorIndex[i] + 1];
			HwInProtDataString[i][1] = pData->Data[SeperatorIndex[i] + 2];
			HwInProtDataString[i][2] = pData->Data[SeperatorIndex[i] + 3];
			break;
		default: break;
		}
	}

	for (i = 0; i < 24; i++) {
		HwInProtDataIn.HwInProtDataInt8[i]  = (HwInProtDataString[i][0] - '0') * 100;
		HwInProtDataIn.HwInProtDataInt8[i] += (HwInProtDataString[i][1] - '0') *  10;
		HwInProtDataIn.HwInProtDataInt8[i] += (HwInProtDataString[i][2] - '0') *   1;
	}
}

void HwTestInMain(void) {
	unsigned short HwTestInUsartInCounterNew;
	HwTestInUsartInCounterNew = Usart1InGetRxCount();
	if (HwTestInUsartInCounterNew != HwTestInUsartInCounterOld) {
		HwTestInDecodeString();
		HwTestInUsartInCounterOld = HwTestInUsartInCounterNew;
	}
}
