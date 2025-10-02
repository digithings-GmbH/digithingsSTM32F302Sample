

#include "../App/ControlPilot.h"
#include "../App/ControlPilotVoltMeasure.h"
#include "../HalIn/DigitalIn.h"

eControlPilotState ControlPilotState;
unsigned char ControlPilotPwmDutyCycle;

void ControlPilotInit(void) {
	ControlPilotPwmDutyCycle = 0;
	ControlPilotState = CP_A1;
}

void ControlPilotStateMain(void) {
	eControlPilotMeasureVoltageRange CpRange;
	CpRange = ControlPilotVoltMeasureGetRange();
	eDigitalInLockState CpWallboxLockState = DigitalInGetLockState();
	switch (ControlPilotState) {
		case CP_A1: 
			if (CONTROL_PILOT_VOLTAGE_RANGE_B == CpRange) { ControlPilotState = CP_B1; }
			break;
		case CP_A2:
			if (CONTROL_PILOT_VOLTAGE_RANGE_A == CpRange) { ControlPilotState = CP_A1; }
			if (CONTROL_PILOT_VOLTAGE_RANGE_B == CpRange) { ControlPilotState = CP_B2; } 
			break;
		case CP_B1:
			if (CONTROL_PILOT_VOLTAGE_RANGE_A == CpRange) { ControlPilotState = CP_A1; }
			if (CONTROL_PILOT_VOLTAGE_RANGE_B == CpRange) { ControlPilotState = CP_B2; } 
			break;
		case CP_B2:
			if (CONTROL_PILOT_VOLTAGE_RANGE_A == CpRange) { ControlPilotState = CP_A2; }
			if (CONTROL_PILOT_VOLTAGE_RANGE_C == CpRange) { 
				if (DIGITAL_IN_LOCK == CpWallboxLockState) {
					ControlPilotState = CP_C2;
				}
			}
			break;
		case CP_C1:
			if (CONTROL_PILOT_VOLTAGE_RANGE_B == CpRange) { ControlPilotState = CP_B1; } 
			break;
		case CP_C2:
			if (CONTROL_PILOT_VOLTAGE_RANGE_A == CpRange) { ControlPilotState = CP_A2; }
			if (CONTROL_PILOT_VOLTAGE_RANGE_B == CpRange) { ControlPilotState = CP_B2; } 
			break;
		default: break;
	}
}

void ControlPilotMain(void) {
	ControlPilotStateMain();
}

eControlPilotState ControlPilotGetState(void) {
	return ControlPilotState;
}
