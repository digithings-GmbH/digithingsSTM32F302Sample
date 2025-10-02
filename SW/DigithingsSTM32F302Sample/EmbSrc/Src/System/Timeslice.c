#include "../App/StatusLed.h"
#include "../App/Relais230V.h"
#include "../App/ControlPilot.h"
#include "../App/LedBus.h"
#include "../App/ControlPilotVoltMeasure.h"
#include "../HalOut/NeoPixel.h"
#include "../HalOut/DebugTerminalOut.h"
#include "../DrvOut/GpioOut.h"
#include "../DrvOut/Usart1Out.h"
#include "../Drv/F302Dma.h"
#include "../CortexM4/CortexM4Stk.h"
#include "../App/Nfc.h"
#include "../HalOut/SpiSchedulerOut.h"
#include "../HalIn/SpiSchedulerIn.h"
#include "../DrvOut/Spi3Out.h"
#include "../App/Authorization.h"

unsigned long TimesliceStkCounterOld;

#define TS_case_2     1
#define TS_case_4     3
#define TS_case_8     7
#define TS_case_16    15
#define TS_case_32    31
#define TS_case_64    63
#define TS_case_128   127
#define TS_case_256   255
#define TS_case_512   511
#define TS_case_1024  1023
#define TS_case_2048  2047
#define TS_case_4096  4095
#define TS_case_8192  8191

void TimesliceInit(void) {
	TimesliceStkCounterOld = 0;
}

void Timeslot1 (void) { /* 1 ms */
	SpiSchedulerInMain(); // before NfcSt25rMain(); because sync storing rx data
	NfcSt25rMain();
	Spi3OutMain();
}
void Timeslot2 (void) {
	GpioOutMain();
}
void Timeslot4 (void) {
	ControlPilotVoltMeasureMain();
	Relais230VMain();
	ControlPilotMain();
}
void Timeslot8 (void) {
	F302DmaMain();
}
void Timeslot16 (void) {
	NfcMain();
	Usart1OutMain();
}

void Timeslot32 (void) {
	NeoPixelMain();
}

void Timeslot64 (void) {
	LedBusMain();
	AuthorizationMain();
}

void Timeslot128 (void) {
}

void Timeslot256 (void) {
	DebugTerminalOutMain();
}

void Timeslot512 (void) {
	StatusLedMain();
}

void Timeslot1024 (void) {
}

void Timeslot2048 (void) {
}

void Timeslot4096 (void) {
}

void TimeslotIdle (void) {
}

 void StartTimesliceForever(void) {
	static unsigned short int TimesliceCounter;
	unsigned long TimesliceStkCounterNow;
	while(1) {
		TimesliceStkCounterNow = CortexM4StkGetCounter();
 		if (TimesliceStkCounterNow != TimesliceStkCounterOld) {
 			TimesliceStkCounterOld = TimesliceStkCounterNow;
			TimesliceCounter++;
			switch (TimesliceCounter^(TimesliceCounter+1)) {
				case TS_case_2    : Timeslot1();    break;
				case TS_case_4    : Timeslot2();    break;
				case TS_case_8    : Timeslot4();    break;
				case TS_case_16   : Timeslot8();    break;
				case TS_case_32   : Timeslot16();   break;
				case TS_case_64   : Timeslot32();   break;
				case TS_case_128  : Timeslot64();   break;
				case TS_case_256  : Timeslot128();  break;
				case TS_case_512  : Timeslot256();  break;
				case TS_case_1024 : Timeslot512();  break;
				case TS_case_2048 : Timeslot1024(); break;
				case TS_case_4096 : Timeslot2048(); break;
				case TS_case_8192 : Timeslot4096(); break;
			default : TimeslotIdle(); break;
			}
		}
	}
}
