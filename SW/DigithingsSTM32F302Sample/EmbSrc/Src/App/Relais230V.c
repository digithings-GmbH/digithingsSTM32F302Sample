#include "../App/Relais230V.h"
#include "../App/ControlPilot.h"


eRelais230VStatus Relais230VStatus;

void Relais230VInit(void) {
	Relais230VStatus = RELAIS_230V_OPEN;
}

void Relais230VMain(void) {
	eControlPilotState Relais230VCpState = ControlPilotGetState();
	if (CP_C2 == Relais230VCpState) {
		Relais230VStatus = RELAIS_230V_CLOSED;
	}
	else {
		Relais230VStatus = RELAIS_230V_OPEN;
	}
}

eRelais230VStatus Relais230VGetState(void) {
	return Relais230VStatus;
}