#include "../App/LedBus.h"
#include "../App/ControlPilot.h"
#include "../HalIn/HwTestIn.h"
#include "../App/StateOfCharge.h"

unsigned char LedSceneActual;
unsigned char LedSceneBrightness;

#define LED_BUS_SZENE_WALLBOX_OFF 0
#define LED_BUS_SZENE_WALLBOX_FAULT1 1
#define LED_BUS_SZENE_WALLBOX_IDLE 2
#define LED_BUS_SZENE_WALLBOX_CAR_CONNECTED 3
#define LED_BUS_SZENE_WALLBOX_LOADING_1 4
#define LED_BUS_SZENE_WALLBOX_LOADING_2 5
#define LED_BUS_SZENE_WALLBOX_LOADING_3 6
#define LED_BUS_SZENE_WALLBOX_LOADING_4 7
#define LED_BUS_SZENE_WALLBOX_LOADING_5 8
#define LED_BUS_SZENE_WALLBOX_LOADING_6 9
#define LED_BUS_SZENE_WALLBOX_LOADING_7 10
#define LED_BUS_SZENE_WALLBOX_LOADING_8 11
 

const tLedStripGRBW LedSceneGRBW[12] = {
		{{{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}, {0,0,0,0},{1,0,0,0},{0,0,1,0},{1,0,0,0},{0,0,1,0},{0,1,0,0},{1,0,1,0},{1,1,0,0}}}, /* 0 */
		{{{0,1,0,0},{0,0,0,0},{0,1,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}, {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}}, /* 1 */
		{{{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0}, {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,1,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}}, /* 2 */
		{{{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0}, {0,0,0,0},{0,0,0,0},{0,0,0,0},{1,0,0,0},{0,0,1,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}}, /* 3 */
		{{{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,1,0}, {0,0,0,0},{0,0,0,0},{0,0,0,0},{1,0,0,0},{0,0,1,0},{0,1,0,0},{0,0,0,0},{0,0,0,0}}}, /* 4 */
		{{{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,1,0},{0,0,1,0}, {0,0,0,0},{0,0,0,0},{0,0,1,0},{1,0,0,0},{0,0,1,0},{0,1,0,0},{0,0,0,0},{0,0,0,0}}}, /* 5 */
		{{{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,1,0},{0,0,1,0},{0,0,1,0}, {0,0,0,0},{0,0,0,0},{0,0,1,0},{1,0,0,0},{0,0,1,0},{0,1,0,0},{1,0,1,0},{0,0,0,0}}}, /* 6 */
		{{{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0}, {0,0,0,0},{1,0,0,0},{0,0,1,0},{1,0,0,0},{0,0,1,0},{0,1,0,0},{1,0,1,0},{0,0,0,0}}}, /* 7 */
		{{{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0}, {0,0,0,0},{1,0,0,0},{0,0,1,0},{1,0,0,0},{0,0,1,0},{0,1,0,0},{1,0,1,0},{0,0,0,0}}}, /* 8 */
		{{{0,0,0,0},{0,0,0,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0}, {0,0,0,0},{1,0,0,0},{0,0,1,0},{1,0,0,0},{0,0,1,0},{0,1,0,0},{1,0,1,0},{0,0,0,0}}}, /* 9 */
		{{{0,0,0,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0}, {1,1,1,0},{1,0,0,0},{0,0,1,0},{1,0,0,0},{0,0,1,0},{0,1,0,0},{1,0,1,0},{1,1,0,0}}}, /* 10 */
		{{{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0}, {1,1,1,0},{1,0,0,0},{0,0,1,0},{1,0,0,0},{0,0,1,0},{0,1,0,0},{1,0,1,0},{1,1,0,0}}} /* 11 */
}; /* In the sample we use only 8 LED the table above is for 16 LED */

void LedBusInit(void) {
	LedSceneActual = 0;
}

void LedBusMain(void) {
	eControlPilotState LedBusControlPilotState = ControlPilotGetState();
	//static unsigned long LedBusCounter = 0;
	unsigned long LedBusStateOfChargeInPermille = StateOfChargeGetState_Permille();
	switch(LedBusControlPilotState) {
		case CP_A1: LedSceneActual = LED_BUS_SZENE_WALLBOX_IDLE; break;
		case CP_B2: LedSceneActual = LED_BUS_SZENE_WALLBOX_CAR_CONNECTED; break;
		case CP_C2:
			LedSceneActual = LED_BUS_SZENE_WALLBOX_LOADING_1;
			if(LedBusStateOfChargeInPermille > 125) {LedSceneActual = LED_BUS_SZENE_WALLBOX_LOADING_2;}
			if(LedBusStateOfChargeInPermille > 250) {LedSceneActual = LED_BUS_SZENE_WALLBOX_LOADING_3;}
			if(LedBusStateOfChargeInPermille > 375) {LedSceneActual = LED_BUS_SZENE_WALLBOX_LOADING_4;}
			if(LedBusStateOfChargeInPermille > 500) {LedSceneActual = LED_BUS_SZENE_WALLBOX_LOADING_5;}
			if(LedBusStateOfChargeInPermille > 626) {LedSceneActual = LED_BUS_SZENE_WALLBOX_LOADING_6;}
			if(LedBusStateOfChargeInPermille > 750) {LedSceneActual = LED_BUS_SZENE_WALLBOX_LOADING_7;}
			if(LedBusStateOfChargeInPermille > 875) {LedSceneActual = LED_BUS_SZENE_WALLBOX_LOADING_8;}
			break;

		default: LedSceneActual = LED_BUS_SZENE_WALLBOX_OFF; break;
	}

	switch(LedBusControlPilotState) {
		case CP_A1: LedSceneBrightness = 3; break;
		default: LedSceneBrightness = 25;  break;
	}
}

const tLedStripGRBW * LedBusGetStrip(void) {
	return &LedSceneGRBW[LedSceneActual];
}

unsigned char LedBusGetBrightness(void) {
	return LedSceneBrightness;
}
