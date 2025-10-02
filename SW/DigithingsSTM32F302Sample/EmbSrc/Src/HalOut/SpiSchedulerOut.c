#include "SpiSchedulerOut.h"

#include "../Target/Target.h"
#include "../HalIn/SpiSchedulerIn.h"
#include "../DrvIn/Spi3In.h"

#define NFC_POLLING_RELOAD_VALUE 20
#define NFC_TIMEOUT_RELOAD_VALUE 10
#define NFC_IDLE_RELOAD_VALUE 150

enum eNfcSt25rState NfcSt25rMainState;
unsigned short int NfcSt25rWait;
unsigned short NfcTimeoutCountdown;
unsigned short NfcIdleCountdown;
unsigned char NfcFifoDataCount;

unsigned char SpiSchedulerOutNfcReceiveCounter;
unsigned char SpiSchedulerOutNfcNoResponseCounter;


unsigned short NfcPollingCountdown;
unsigned char NfcOszillatorStableCounterOld;
unsigned char NfcTerminationDirectCommandCounterOld;
unsigned char NfcEndOfTransmissionCounterOld;
unsigned char NfcStartOfReceptionCounterOld;
unsigned char NfcEndOfReceiveCounterOld;
unsigned char NfcCollisionAdvoidanceCounterOld;
unsigned char NfcNoResponseTimerCounterOld;
unsigned char NfcWakeUpCounterOld;
unsigned char NfcWakeUpTimerCounterOld;
unsigned char NfcIntCounterOld;

void SpiSchedulerOutInit(void) {
	NfcSt25rMainState = SSO_NFC_STARTUP_INIT;
	NfcPollingCountdown = NFC_POLLING_RELOAD_VALUE;
	NfcIdleCountdown = NFC_IDLE_RELOAD_VALUE;
	NfcOszillatorStableCounterOld = 0;
	NfcTerminationDirectCommandCounterOld = 0;
	NfcEndOfTransmissionCounterOld=0;
	NfcStartOfReceptionCounterOld=0;
	NfcEndOfReceiveCounterOld=0;
	NfcCollisionAdvoidanceCounterOld=0;
	NfcFifoDataCount = 0;
	NfcNoResponseTimerCounterOld = 0;
	SpiSchedulerOutNfcReceiveCounter = 0;
	SpiSchedulerOutNfcNoResponseCounter = 0;
	NfcWakeUpCounterOld = 0;
	NfcWakeUpTimerCounterOld = 0;
	NfcIntCounterOld = 0;
	NfcTimeoutCountdown = NFC_TIMEOUT_RELOAD_VALUE;
}

enum eNfcSt25rState NfcSt25rGetState(void) {
	return NfcSt25rMainState;
}

void NfcSt25rMain(void) {
	tSpiSchedulerInData * pSpiSchedulerInData;
	pSpiSchedulerInData = SpiSchedulerInGetData();

	switch (NfcSt25rMainState) {
		case SSO_NFC_STARTUP_INIT :
			NfcSt25rWait = 10;
			NfcSt25rMainState = SSO_NFC_STARTUP_WAIT;
			break;
		case SSO_NFC_STARTUP_WAIT :
			if (NfcSt25rWait--) { }
			else { NfcSt25rMainState = SSO_START; }
		break;

/* Start */
		case SSO_START                                      : NfcSt25rMainState = SSO_NFC_READ_DEVICE_ID; break;
		case SSO_NFC_READ_DEVICE_ID                         : NfcSt25rMainState = SSO_FLASH_READ_IDENTIFICATION; break;
		case SSO_FLASH_READ_IDENTIFICATION                  : NfcSt25rMainState = SSO_GYRO_READ_WHO_AM_I; break;
		case SSO_GYRO_READ_WHO_AM_I                         : NfcSt25rMainState = SSO_NFC_START_WAKEUP; break;
		case SSO_NFC_START_WAKEUP                           : NfcSt25rMainState = SSO_NFC_DIRECT_SET_DEFAULT; break;
		case SSO_NFC_DIRECT_SET_DEFAULT                     : NfcSt25rMainState = SSO_NFC_WRITE_CONF_2_REG_3V3; break;
		case SSO_NFC_WRITE_CONF_2_REG_3V3                   : NfcSt25rMainState = SSO_NFC_WRITE_CAPACITIVE_SENSOR_CONTROL_REG; break;
		case SSO_NFC_WRITE_CAPACITIVE_SENSOR_CONTROL_REG    : NfcSt25rMainState = SSO_NFC_WRITE_CAPACITANCE_MEASUREMENT_CONF_REG; break;
		case SSO_NFC_WRITE_CAPACITANCE_MEASUREMENT_CONF_REG : NfcSt25rMainState = SSO_NFC_DIRECT_CALIBRATE_CAPACITIVE_SENSOR; break;
		case SSO_NFC_DIRECT_CALIBRATE_CAPACITIVE_SENSOR     : NfcSt25rMainState = SSO_LOOP_START; break;

/* Loop */
		case SSO_LOOP_START : NfcSt25rMainState = SSO_NFC_CAPACITIVE_SENSOR_READ_START; break;

/* Gyro */
		case SSO_GYRO_READ_START            : NfcSt25rMainState = SSO_GYRO_WRITE_CONF_1_2_REG; break;
		case SSO_GYRO_WRITE_CONF_1_2_REG    : NfcSt25rMainState = SSO_GYRO_READ_OUT_X_G; break;
		case SSO_GYRO_READ_OUT_X_G          : NfcSt25rMainState = SSO_GYRO_READ_OUT_Y_G; break;
		case SSO_GYRO_READ_OUT_Y_G          : NfcSt25rMainState = SSO_GYRO_READ_OUT_Z_G; break;
		case SSO_GYRO_READ_OUT_Z_G          : NfcSt25rMainState = SSO_GYRO_READ_OUT_X_A; break;
		case SSO_GYRO_READ_OUT_X_A          : NfcSt25rMainState = SSO_GYRO_READ_OUT_Y_A; break;
		case SSO_GYRO_READ_OUT_Y_A          : NfcSt25rMainState = SSO_GYRO_READ_OUT_Z_A; break;
		case SSO_GYRO_READ_OUT_Z_A          : NfcSt25rMainState = SSO_GYRO_READ_END; break;
		case SSO_GYRO_READ_END              : NfcSt25rMainState = SSO_NFC_CAPACITIVE_SENSOR_READ_START; break;

/* NFC CAPACITIVE SENSOR */
		case SSO_NFC_CAPACITIVE_SENSOR_READ_START        : NfcSt25rMainState = SSO_NFC_READ_CAPACITIVE_SENSOR; break;
		case SSO_NFC_READ_CAPACITIVE_SENSOR              : NfcSt25rMainState = SSO_NFC_CAPACITIVE_SENSOR_READ_AD_REG; break;
		case SSO_NFC_CAPACITIVE_SENSOR_READ_AD_REG       : NfcSt25rMainState = SSO_NFC_CAPACITIVE_SENSOR_READ_END; break;
		case SSO_NFC_CAPACITIVE_SENSOR_READ_END          : NfcSt25rMainState = SSO_IDLE_1_START; break;

/* IDLE */
		case SSO_IDLE_1_START        :
			NfcIdleCountdown = NFC_IDLE_RELOAD_VALUE;
			NfcSt25rMainState = SSO_IDLE_1; break;
			break;

		case SSO_IDLE_1 :
			if (NfcIdleCountdown > 0) { NfcIdleCountdown--; }
			else {
				NfcSt25rMainState = SSO_IDLE_1_END;
			}
			break;
		case SSO_IDLE_1_END : NfcSt25rMainState = SSO_NFC_START_DETECTION; break;

/* NFC */
		case SSO_NFC_START_DETECTION : NfcSt25rMainState = SSO_NFC_PATH_2_READ_IRQ; break; // todo
		case SSO_NFC_PATH_2_READ_IRQ : NfcSt25rMainState = SSO_NFC_WRITE_OPERATION_CONTROL_REG_ENABLE; break;

		case SSO_NFC_WRITE_OPERATION_CONTROL_REG_ENABLE :
			NfcSt25rMainState = SSO_NFC_WAIT_OSC_STABLE_OR_TIMEOUT;
			NfcTimeoutCountdown = 100;
			break;
		case SSO_NFC_WAIT_OSC_STABLE_OR_TIMEOUT :
			if ( pSpiSchedulerInData->NfcOszillatorStableCounter != NfcOszillatorStableCounterOld ) {
				NfcOszillatorStableCounterOld = pSpiSchedulerInData->NfcOszillatorStableCounter;
				NfcSt25rMainState = SSO_NFC_DIRECT_ADJUST_REGULATORS;
			}
			if (NfcTimeoutCountdown > 0) { NfcTimeoutCountdown--; }
			else { NfcSt25rMainState = SSO_NFC_TIMEOUT; }  // todo check stable not work sometimes
			//else { NfcSt25rMainState = NFC_WRITE_EXT_FIELD_DET_ACT_REG; }
			break;

		case SSO_NFC_DIRECT_ADJUST_REGULATORS    : NfcSt25rMainState = SSO_NFC_WAIT_ADJUST_REGULATORS_OR_TIMEOUT;
			NfcTimeoutCountdown = 10;
			break;

		case SSO_NFC_WAIT_ADJUST_REGULATORS_OR_TIMEOUT :
			if ( pSpiSchedulerInData->NfcTerminationDirectCommandCounter != NfcTerminationDirectCommandCounterOld ) {
				NfcTerminationDirectCommandCounterOld = pSpiSchedulerInData->NfcTerminationDirectCommandCounter;
				NfcSt25rMainState = SSO_NFC_STOP_ALL;
			}
			if (NfcTimeoutCountdown > 0) { NfcTimeoutCountdown--; }
			else { NfcSt25rMainState = SSO_NFC_TIMEOUT; }
			break;

		case SSO_NFC_STOP_ALL : NfcSt25rMainState = SSO_NFC_RESET_RX_GAIN; break;
		case SSO_NFC_RESET_RX_GAIN : NfcSt25rMainState = SSO_NFC_WRITE_GENERAL_PURPOSE_TIMER_REG; break;
		case SSO_NFC_WRITE_GENERAL_PURPOSE_TIMER_REG : NfcSt25rMainState = SSO_NFC_DIRECT_FIELD_ON; break;
		case SSO_NFC_DIRECT_FIELD_ON : NfcSt25rMainState = SSO_NFC_WAIT_FIELD_ON_OR_TIMEOUT; break;
		case SSO_NFC_WAIT_FIELD_ON_OR_TIMEOUT     :
			if ( pSpiSchedulerInData->NfcCollisionAdvoidanceCounter != NfcCollisionAdvoidanceCounterOld ) {
				NfcCollisionAdvoidanceCounterOld = pSpiSchedulerInData->NfcCollisionAdvoidanceCounter;
				NfcSt25rMainState = SSO_NFC_WRITE_RECEIVER_CONF_REG;
			}
			if (NfcTimeoutCountdown > 0) { NfcTimeoutCountdown--; }
			else { NfcSt25rMainState = SSO_NFC_TIMEOUT; }
			break;
		case SSO_NFC_WRITE_RECEIVER_CONF_REG       : NfcSt25rMainState = SSO_NFC_WRITE_NO_RESPONSE_TIMER_REG; break;
		case SSO_NFC_WRITE_NO_RESPONSE_TIMER_REG   : NfcSt25rMainState = SSO_NFC_WRITE_NO_AUXILARY_DEF_REG; break;
		case SSO_NFC_WRITE_NO_AUXILARY_DEF_REG     : NfcSt25rMainState = SSO_NFC_WRITE_OPERATION_CONTROL_RX_EN; break;
		case SSO_NFC_WRITE_OPERATION_CONTROL_RX_EN : NfcSt25rMainState = SSO_NFC_MEASURE_AMPLITUDE; break;
		case SSO_NFC_MEASURE_AMPLITUDE :
			NfcTimeoutCountdown = 10;
			NfcSt25rMainState = SSO_NFC_WAIT_MEASURE_AMPLITUDE_OR_TIMEOUT;
		break;
		case SSO_NFC_WAIT_MEASURE_AMPLITUDE_OR_TIMEOUT :
			if ( pSpiSchedulerInData->NfcTerminationDirectCommandCounter != NfcTerminationDirectCommandCounterOld ) {
				NfcTerminationDirectCommandCounterOld = pSpiSchedulerInData->NfcTerminationDirectCommandCounter;
				NfcTimeoutCountdown = 10;
				NfcSt25rMainState = SSO_NFC_DIRECT_TRANSMIT_REQA;;
			}
			if (NfcTimeoutCountdown > 0) { NfcTimeoutCountdown--; }
			else { NfcSt25rMainState = SSO_NFC_TIMEOUT; }
			break;
		case SSO_NFC_DIRECT_TRANSMIT_REQA            : NfcSt25rMainState = SSO_NFC_WAIT_END_OF_TRANSMISSION_REQA;
			NfcTimeoutCountdown = 10;
			break;
		case SSO_NFC_WAIT_END_OF_TRANSMISSION_REQA :
			if ( pSpiSchedulerInData->NfcEndOfTransmissionCounter != NfcEndOfTransmissionCounterOld ) {
				NfcEndOfTransmissionCounterOld = pSpiSchedulerInData->NfcEndOfTransmissionCounter;
				NfcTimeoutCountdown = 10;
				NfcSt25rMainState = SSO_NFC_WAIT_START_OF_RECEPTION_REQA;
			}
			if ( pSpiSchedulerInData->NfcNoResponseTimerCounter != NfcNoResponseTimerCounterOld ) {
				NfcNoResponseTimerCounterOld = pSpiSchedulerInData->NfcNoResponseTimerCounter;
				NfcTimeoutCountdown = 10;
				NfcSt25rMainState = SSO_NFC_NO_RESPONSE;
			}
			if (NfcTimeoutCountdown > 0) { NfcTimeoutCountdown--; }
			else { NfcSt25rMainState = SSO_NFC_TIMEOUT; }
			break;
		case SSO_NFC_WAIT_START_OF_RECEPTION_REQA :
			if ( pSpiSchedulerInData->NfcStartOfReceptionCounter != NfcStartOfReceptionCounterOld ) {
				NfcStartOfReceptionCounterOld = pSpiSchedulerInData->NfcStartOfReceptionCounter;
				NfcTimeoutCountdown = 10;
				NfcSt25rMainState = SSO_NFC_WAIT_END_OF_RECEPTION_REQA;
			}
			if (NfcTimeoutCountdown > 0) { NfcTimeoutCountdown--; }
			else { NfcSt25rMainState = SSO_NFC_TIMEOUT; }
			break;
		case SSO_NFC_WAIT_END_OF_RECEPTION_REQA:
			if ( pSpiSchedulerInData->NfcEndOfReceptionCounter != NfcEndOfReceiveCounterOld ) {
				NfcEndOfReceiveCounterOld = pSpiSchedulerInData->NfcEndOfReceptionCounter;
				NfcTimeoutCountdown = 10;
				NfcSt25rMainState = SSO_NFC_READ_FIFO_STATUS_REG_REQA;
			}
			if (NfcTimeoutCountdown > 0) { NfcTimeoutCountdown--; }
			else { NfcSt25rMainState = SSO_NFC_TIMEOUT; }
			break;
		case SSO_NFC_READ_FIFO_STATUS_REG_REQA :
			NfcSt25rMainState = SSO_NFC_READ_FIFO_REQA;
			NfcFifoDataCount = pSpiSchedulerInData->NfcFifoStat1;
			break;
		case SSO_NFC_READ_FIFO_REQA :
			if (NfcFifoDataCount>1) { NfcFifoDataCount--; }
			else { NfcSt25rMainState = SSO_NFC_WRITE_TRANSMITTED_BYTE_REG_ANTICOLLISION; }
			break;
		case SSO_NFC_WRITE_TRANSMITTED_BYTE_REG_ANTICOLLISION : NfcSt25rMainState = SSO_NFC_LOAD_FIFO_ANTICOLLISION; break;
		case SSO_NFC_LOAD_FIFO_ANTICOLLISION : NfcSt25rMainState = SSO_NFC_TRANSMIT_ANTICOLLISION; break;
		case SSO_NFC_TRANSMIT_ANTICOLLISION : NfcSt25rMainState = SSO_NFC_WAIT_END_OF_TRANSMISSION_ANTICOLLISION; break;
		case SSO_NFC_WAIT_END_OF_TRANSMISSION_ANTICOLLISION :
			if ( pSpiSchedulerInData->NfcEndOfTransmissionCounter != NfcEndOfTransmissionCounterOld ) {
				NfcEndOfTransmissionCounterOld = pSpiSchedulerInData->NfcEndOfTransmissionCounter;
				NfcTimeoutCountdown = 10;
				NfcSt25rMainState = SSO_NFC_WAIT_START_OF_RECEPTION_ANTICOLLISION;
			}
			if (NfcTimeoutCountdown > 0) { NfcTimeoutCountdown--; }
			else { NfcSt25rMainState = SSO_NFC_TIMEOUT; }
		break;
		case SSO_NFC_WAIT_START_OF_RECEPTION_ANTICOLLISION :
			if ( pSpiSchedulerInData->NfcStartOfReceptionCounter != NfcStartOfReceptionCounterOld ) {
				NfcStartOfReceptionCounterOld = pSpiSchedulerInData->NfcStartOfReceptionCounter;
				NfcTimeoutCountdown = 10;
				NfcSt25rMainState = SSO_NFC_WAIT_END_OF_RECEPTION_ANTICOLLISION;
			}
			if (NfcTimeoutCountdown > 0) { NfcTimeoutCountdown--; }
			else { NfcSt25rMainState = SSO_NFC_TIMEOUT; }
			break;
		case SSO_NFC_WAIT_END_OF_RECEPTION_ANTICOLLISION:
			if ( pSpiSchedulerInData->NfcEndOfReceptionCounter != NfcEndOfReceiveCounterOld ) {
				NfcEndOfReceiveCounterOld = pSpiSchedulerInData->NfcEndOfReceptionCounter;
				NfcTimeoutCountdown = 10;
				NfcSt25rMainState = SSO_NFC_READ_FIFO_STATUS_REG_ANTICOLLISION;
			}
			if (NfcTimeoutCountdown > 0) { NfcTimeoutCountdown--; }
			else { NfcSt25rMainState = SSO_NFC_TIMEOUT; }
			break;
		case SSO_NFC_READ_FIFO_STATUS_REG_ANTICOLLISION :
			NfcSt25rMainState = SSO_NFC_READ_FIFO_ANTICOLLISION;
			NfcFifoDataCount = pSpiSchedulerInData->NfcFifoStat1;
			break;
		case SSO_NFC_READ_FIFO_ANTICOLLISION :
			if (NfcFifoDataCount>1) { NfcFifoDataCount--; }
			else { NfcSt25rMainState = SSO_NFC_TAG_RECEIVED; }
			break;
		case SSO_NFC_NO_RESPONSE     :
			SpiSchedulerOutNfcNoResponseCounter++;
			NfcSt25rMainState = SSO_NFC_END_PATH_2_NFC_DETECTION;
			break;
		case SSO_NFC_TAG_RECEIVED    :
			SpiSchedulerOutNfcReceiveCounter++;
			NfcSt25rMainState = SSO_NFC_END_PATH_2_NFC_DETECTION;
			break;

		case SSO_NFC_END_PATH_2_NFC_DETECTION       :
				NfcSt25rMainState = SSO_NFC_WRITE_OPERATION_CONTROL_REG_DISABLE;
			break;
		case SSO_NFC_WRITE_OPERATION_CONTROL_REG_DISABLE : NfcSt25rMainState = SSO_IDLE_2_START; break;

/* Other states */
		case SSO_NFC_TIMEOUT         : NfcSt25rMainState = SSO_NFC_START_WAKEUP; break;

		case SSO_IDLE_2_START        :
			NfcIdleCountdown = NFC_IDLE_RELOAD_VALUE;
			NfcSt25rMainState = SSO_IDLE_2; break;
			break;

		case SSO_IDLE_2 :
			if (NfcIdleCountdown > 0) { NfcIdleCountdown--; }
			else {
				NfcSt25rMainState = SSO_IDLE_2_END;
			}
			break;
		case SSO_IDLE_2_END : NfcSt25rMainState = SSO_LOOP_END; break;
		case SSO_LOOP_END : NfcSt25rMainState = SSO_LOOP_START; break;
		default : break;
	}
}

unsigned char SpiSchedulerOutGetNfcNoResponseCounter(void) {
	return SpiSchedulerOutNfcNoResponseCounter;
}

unsigned char SpiSchedulerOutGetNfcReceiveCounter(void) {
	return SpiSchedulerOutNfcReceiveCounter;
}
