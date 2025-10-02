#include "StatusLed.h"

eStatusLedState StatusLedState;

void StatusLedInit(void) {
	StatusLedState = STATUS_LED_OFF;
}

void StatusLedMain(void) {
	static unsigned short i;
	if (i++%2) {
		StatusLedState = STATUS_LED_OFF;
	}
	else {
		StatusLedState = STATUS_LED_ON;
	}
}

eStatusLedState StatusLedGetState(void) {
	return StatusLedState;
}


/*
 This function flashes the User Led on the nucleo board.
 */
