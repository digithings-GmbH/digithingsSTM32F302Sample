#include "../HalOut/PortOut.h"
#include "../App/StatusLed.h"
#include "../App/Relais230V.h"
#include "../App/Authorization.h"

ePortOutState PortOutGetStatePA0(void) {
	eStatusLedState PortOutStateStatusLed = StatusLedGetState();
	if (STATUS_LED_ON == PortOutStateStatusLed) {
		return PORT_OUT_PORT_HIGH;
}
	else {
		return PORT_OUT_PORT_LOW;
	}
}

ePortOutState PortOutGetStatePA4(void) {
	eAuthorizationNfcTagValidState PortAuthorizationNfgTagValidState = AuthorizationNfcTagGetValidState();

	if (AUTHORIZATION_NFC_TAG_VALID == PortAuthorizationNfgTagValidState) {
		return PORT_OUT_PORT_HIGH;
	}
	else {
		return PORT_OUT_PORT_LOW;
	}
}

ePortOutState PortOutGetStatePA3(void) {
	eRelais230VStatus PortOutStateRelais230V = Relais230VGetState();
	if (RELAIS_230V_CLOSED == PortOutStateRelais230V) {
		return PORT_OUT_PORT_HIGH;
	}
	else {
		return PORT_OUT_PORT_LOW;
	}
}
