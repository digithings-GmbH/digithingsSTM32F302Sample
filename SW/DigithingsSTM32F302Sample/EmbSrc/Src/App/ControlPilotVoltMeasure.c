/* Kein Fahrzeug max. 2.800V = 3840 12 Bit Conversion
	2740R : State A ca. 2.025V = 2500
	 882R : State B ca. 1.250V = 1550
	 264R : State C ca. 0.485V = 600 */

#include "../App/ControlPilotVoltMeasure.h"
#include "../HalIn/MeasureIn.h"

eControlPilotMeasureVoltageRange ControlPilotMeasureVoltageRange;
signed long ControlPilotVoltMeasureValueFiltered;


#define CONTROL_PILOT_MAX_THRESHOLD_A 2100
#define CONTROL_PILOT_MIN_THRESHOLD_A 1900
#define CONTROL_PILOT_MAX_THRESHOLD_B 1450
#define CONTROL_PILOT_MIN_THRESHOLD_B 1350
#define CONTROL_PILOT_MAX_THRESHOLD_C 1340
#define CONTROL_PILOT_MIN_THRESHOLD_C 1250
void ControlPilotVoltMeasureInit(void) {
	ControlPilotVoltMeasureValueFiltered = 0;
}

void ControlPilotVoltMeasureMain(void) {
	unsigned short ControlPilotVoltMeasureRawValue;
	ControlPilotVoltMeasureRawValue = MeasureInGetCpRaw();

	signed long Diff;

	Diff = ControlPilotVoltMeasureValueFiltered - ControlPilotVoltMeasureRawValue;
	ControlPilotVoltMeasureValueFiltered = ControlPilotVoltMeasureValueFiltered - (Diff/20);


	ControlPilotMeasureVoltageRange = CONTROL_PILOT_VOLTAGE_RANGE_UNDEF;
	if (ControlPilotVoltMeasureValueFiltered < CONTROL_PILOT_MAX_THRESHOLD_A) {
		ControlPilotMeasureVoltageRange = CONTROL_PILOT_VOLTAGE_RANGE_A;
	}
	if (ControlPilotVoltMeasureValueFiltered < CONTROL_PILOT_MIN_THRESHOLD_A) {
		ControlPilotMeasureVoltageRange = CONTROL_PILOT_VOLTAGE_RANGE_UNDEF;
	}
	if (ControlPilotVoltMeasureValueFiltered < CONTROL_PILOT_MAX_THRESHOLD_B) {
		ControlPilotMeasureVoltageRange = CONTROL_PILOT_VOLTAGE_RANGE_B;
	}
	if (ControlPilotVoltMeasureValueFiltered < CONTROL_PILOT_MIN_THRESHOLD_B) {
		ControlPilotMeasureVoltageRange = CONTROL_PILOT_VOLTAGE_RANGE_UNDEF;
	}
	if (ControlPilotVoltMeasureValueFiltered < CONTROL_PILOT_MAX_THRESHOLD_C) {
		ControlPilotMeasureVoltageRange = CONTROL_PILOT_VOLTAGE_RANGE_C;
	}
	if (ControlPilotVoltMeasureValueFiltered < CONTROL_PILOT_MIN_THRESHOLD_C) {
		ControlPilotMeasureVoltageRange = CONTROL_PILOT_VOLTAGE_RANGE_UNDEF;
	}
}

eControlPilotMeasureVoltageRange ControlPilotVoltMeasureGetRange(void) {
	return ControlPilotMeasureVoltageRange;
}
