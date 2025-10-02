#include "../HalOut/DebugTerminalOut.h"
#include "../App/ControlPilot.h"
#include "../App/StateOfCharge.h"
#include "../App/Relais230V.h"
#include "../HalIn/DigitalIn.h"

const tDebugTerminalData DebugTerminalData[8] = {
		{  0, { "                                  " } },
		{  7, { "Start\r\n                           " } },
		{ 13, { "CP_A1,0,0,0\r\n                     " } },
		{ 13, { "CP_A2,0,0,0\r\n                     " } },
		{ 13, { "CP_B1,0,0,0\r\n                     " } },
		{ 13, { "CP_B2,0,0,0\r\n                     " } },
		{ 13, { "CP_C1,0,0,0\r\n                     " } },
		{ 13, { "CP_C2,0,0,0\r\n                     " } },
};


tDebugTerminalData DebugTerminalDataOut[8];

unsigned long DebugTerminalSendDataCounter;

#define DEBUG_TERMINAL_DATA_COUNT (sizeof(tDebugTerminalData)*8/sizeof(unsigned char))

eControlPilotState DebugTerminalOutControlPilotStateOld;
unsigned long DebugTerminalStringIndex;

void DebugTerminalOutInit(void) {
	DebugTerminalOutControlPilotStateOld = ControlPilotGetState();
	DebugTerminalStringIndex = 0;
	unsigned long i;
	unsigned long * pDataSource;
	unsigned long * pDataDestination;
	pDataSource = (unsigned long *)DebugTerminalData;
	pDataDestination = (unsigned long *)DebugTerminalDataOut;
	for ( i = 0; i< DEBUG_TERMINAL_DATA_COUNT;i++) {
		*(pDataDestination+i) = *(pDataSource+i); /* i know i can use memcpy but this is for training */
	}
	DebugTerminalSendDataCounter = 0;
}

void DebugTerminalOutMain(void) {
	eControlPilotState DebugTerminalOutControlPilotState = ControlPilotGetState();
	unsigned long LedBusStateOfChargeInPermille = StateOfChargeGetState_Permille();
	eRelais230VStatus DebugTerminalRelais230VState = Relais230VGetState();
	eDigitalInLockState DebugTerminalLockState = DigitalInGetLockState();
	unsigned char DebugTerminalStateOfCharge0_7;
	unsigned char DebugTerminalRelais230VOutData;
	unsigned char DebugTerminalLockData;
	unsigned long i;

	/* State of charge */
	switch(DebugTerminalOutControlPilotState) {
		case CP_C2:
			DebugTerminalStateOfCharge0_7 = 0;
			if(LedBusStateOfChargeInPermille > 125) {DebugTerminalStateOfCharge0_7 = 1;}
			if(LedBusStateOfChargeInPermille > 250) {DebugTerminalStateOfCharge0_7 = 2;}
			if(LedBusStateOfChargeInPermille > 375) {DebugTerminalStateOfCharge0_7 = 3;}
			if(LedBusStateOfChargeInPermille > 500) {DebugTerminalStateOfCharge0_7 = 4;}
			if(LedBusStateOfChargeInPermille > 626) {DebugTerminalStateOfCharge0_7 = 5;}
			if(LedBusStateOfChargeInPermille > 750) {DebugTerminalStateOfCharge0_7 = 6;}
			if(LedBusStateOfChargeInPermille > 875) {DebugTerminalStateOfCharge0_7 = 7;}
			break;
		default:
			DebugTerminalStateOfCharge0_7 = 0;
	}
	DebugTerminalDataOut[7].Data[8] = DebugTerminalStateOfCharge0_7+48;

	/* Relais 230V state */
	if(RELAIS_230V_OPEN == DebugTerminalRelais230VState) {
		DebugTerminalRelais230VOutData = 0;
	}
	else {
		DebugTerminalRelais230VOutData = 1;
	}

	/* Lock State*/
	if (DIGITAL_IN_LOCK == DebugTerminalLockState) {
		DebugTerminalLockData = 1;
	}
	else {
		DebugTerminalLockData = 0;
	}

	for(i=2; i<=7;i++) {
		DebugTerminalDataOut[i].Data[6] = DebugTerminalRelais230VOutData + 48;
		DebugTerminalDataOut[i].Data[10] = DebugTerminalLockData + 48;
	}

	/* Charge pilot state */
	if(DebugTerminalOutControlPilotState != DebugTerminalOutControlPilotStateOld ) {
		switch (DebugTerminalOutControlPilotState) {
		case CP_A1 : DebugTerminalStringIndex = 2; break;
		case CP_A2 : DebugTerminalStringIndex = 3; break;
		case CP_B1 : DebugTerminalStringIndex = 4; break;
		case CP_B2 : DebugTerminalStringIndex = 5; break;
		case CP_C1 : DebugTerminalStringIndex = 6; break;
		case CP_C2 : DebugTerminalStringIndex = 7; break;
			default : DebugTerminalStringIndex = 0; break;
		}
	}

	DebugTerminalSendDataCounter++;
}

unsigned long DebugTerminalGetStringIndex(void) {
	return DebugTerminalStringIndex;
}

tDebugTerminalData * DebugTerminalOutGetData(void) {
	return &DebugTerminalDataOut[DebugTerminalStringIndex];
}

unsigned long DebugTerminalGetSendDataCounter(void) {
	return DebugTerminalSendDataCounter;
}
