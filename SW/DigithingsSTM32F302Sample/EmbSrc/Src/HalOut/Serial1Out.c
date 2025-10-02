#include "../HalOut/SerialOutDef.h"
#include "../HalOut/DebugTerminalOut.h"

unsigned long Serial1OutDataToSend;
unsigned long Serial1OutDataCount;
unsigned long Serial1OutDebugTerminalGetSendDataCounterOld;
tDebugTerminalData * pSerial1OutDebugTerminalData;

void Serial1OutInit(void) {
	Serial1OutDataToSend = 0;
	Serial1OutDataCount = 0;
	pSerial1OutDebugTerminalData = 0;
	Serial1OutDebugTerminalGetSendDataCounterOld = DebugTerminalGetSendDataCounter();
}

tSerialData Serial1OutGetByte(void) {
	tSerialData ret;
	ret.Count = 0;

	unsigned long Serial1OutDebugTerminalGetSendDataCounterNow = DebugTerminalGetSendDataCounter();

	if (Serial1OutDebugTerminalGetSendDataCounterNow != Serial1OutDebugTerminalGetSendDataCounterOld ) {
		pSerial1OutDebugTerminalData = DebugTerminalOutGetData();
		Serial1OutDataToSend = pSerial1OutDebugTerminalData->Count;
		Serial1OutDataCount = 0;
		Serial1OutDebugTerminalGetSendDataCounterOld = Serial1OutDebugTerminalGetSendDataCounterNow;
	}
	if (Serial1OutDataToSend > Serial1OutDataCount ) {
		ret.Count = 1;
		ret.Data = pSerial1OutDebugTerminalData->Data[Serial1OutDataCount];
		Serial1OutDataCount++;
	}
	return ret;
}

