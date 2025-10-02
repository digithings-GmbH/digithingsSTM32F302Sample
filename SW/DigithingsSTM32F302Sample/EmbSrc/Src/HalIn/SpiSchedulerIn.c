#include "../DrvIn/Spi3In.h"
#include "../HalIn/SpiSchedulerIn.h"
#include "../Target/Target.h"
#include "../HalOut/SpiSchedulerOut.h"

tSpiSchedulerInData SpiSchedulerInData;
unsigned char NfcTagUidCount;

void SpiSchedulerInInit(void) {
	//NfcSt25rWait = 0;
	SpiSchedulerInData.NfcIcId = 0;
	SpiSchedulerInData.NfcOperationControl = 0;
	SpiSchedulerInData.NfcModeDefReg = 0;
	SpiSchedulerInData.NfcFifoStat1 = 0;
	SpiSchedulerInData.NfcFifoStat2 = 0;
	SpiSchedulerInData.AccWhoAmI = 0;
	SpiSchedulerInData.NfcIoConf1 = 0;
	SpiSchedulerInData.NfcIoConf2 = 0;
	SpiSchedulerInData.NfcMainIrqMask = 0;
	NfcTagUidCount =0;

	SpiSchedulerInData.NfcOszillatorStableCounter = 0;
	SpiSchedulerInData.NfcEndOfTransmissionCounter = 0;
	SpiSchedulerInData.NfcStartOfReceptionCounter = 0;
	SpiSchedulerInData.NfcEndOfReceptionCounter = 0;
	SpiSchedulerInData.NfcTerminationDirectCommandCounter = 0;
	SpiSchedulerInData.NfcCollisionAdvoidanceCounter = 0;
	SpiSchedulerInData.NfcNoResponseTimerCounter = 0;
	SpiSchedulerInData.NfcWakeUpCounter = 0;
	SpiSchedulerInData.NfcWakeUpTimerCounter = 0;

	SpiSchedulerInData.CapacitanceAdValue = 0;
	SpiSchedulerInData.CapacitanceMeasurementAutoAveragingDisplayRegister = 0;
	SpiSchedulerInData.CapacitanceMeasurementDisplayRegister = 0;

	SpiSchedulerInData.GyroAngularX = 0;
	SpiSchedulerInData.GyroAngularY = 0;
	SpiSchedulerInData.GyroAngularZ = 0;
	SpiSchedulerInData.GyroAccelerationX = 0;
	SpiSchedulerInData.GyroAccelerationY = 0;
	SpiSchedulerInData.GyroAccelerationZ = 0;
}

void SpiSchedulerInMain(void) {
	tSpiInData SpiInData;

    /* Read the spi data from the previous transfer before sending new commands */
	SpiInData = Spi3InGetData();

	enum eNfcSt25rState NfcSt25rMainState;
	NfcSt25rMainState = NfcSt25rGetState();

	switch (NfcSt25rMainState) {
		case SSO_NFC_READ_DEVICE_ID                         : SpiSchedulerInData.NfcWhoAmI = SpiInData.Data[1];             break;
		//case NFC_READ_OP_REGISTER                     : NfcSt25rData.NfcOperationControl = SpiInData; break;
		case SSO_NFC_READ_FIFO_STATUS_REG_REQA              : /* ! read the same register in different states */
		case SSO_NFC_READ_FIFO_STATUS_REG_ANTICOLLISION     :
			NfcTagUidCount = 0;
			SpiSchedulerInData.NfcFifoStat1 = SpiInData.Data[1]; SpiSchedulerInData.NfcFifoStat2 = SpiInData.Data[2];        break;
		//case NFC_READ_MODE_DEFINITION_REG               : NfcSt25rData.NfcModeDefReg = SpiInData;       break;
		case SSO_NFC_WAIT_OSC_STABLE_OR_TIMEOUT                           : /* ! read the same register in different states */
		case SSO_NFC_WAIT_ADJUST_REGULATORS_OR_TIMEOUT                    :
		case SSO_NFC_WAIT_FIELD_ON_OR_TIMEOUT				              :
		case SSO_NFC_WAIT_MEASURE_AMPLITUDE_OR_TIMEOUT                    :
		case SSO_NFC_WAIT_END_OF_TRANSMISSION_REQA                        :
		case SSO_NFC_WAIT_START_OF_RECEPTION_REQA                         :
		case SSO_NFC_WAIT_END_OF_RECEPTION_REQA                           :
		case SSO_NFC_WAIT_END_OF_TRANSMISSION_ANTICOLLISION               :
		case SSO_NFC_WAIT_START_OF_RECEPTION_ANTICOLLISION                :
		case SSO_NFC_WAIT_END_OF_RECEPTION_ANTICOLLISION                  :
		case SSO_NFC_CHECK_BRANCH_TO_TAG_DETECTION                              :
		case SSO_NFC_WAIT_TERMINATION_DIRECT_COMMAND_MEASURE_CAPACITANCE  :
		case SSO_NFC_WAIT_TERMINATION_DIRECT_COMMAND_CALIBRATE_CAPACITANCE_SENSOR  :
		case SSO_NFC_PATH_2_READ_IRQ :
			SpiSchedulerInData.NfcMainIrqReg.All   = SpiInData.Data[1];
			SpiSchedulerInData.NfcNfcIrqReg.All    = SpiInData.Data[2];
			SpiSchedulerInData.NfcErrWupIrqReg.All = SpiInData.Data[3];
			if (1 == SpiSchedulerInData.NfcMainIrqReg.Bits.I_osc)     { SpiSchedulerInData.NfcOszillatorStableCounter++; }
			if (1 == SpiSchedulerInData.NfcMainIrqReg.Bits.I_txe)     { SpiSchedulerInData.NfcEndOfTransmissionCounter++; }
			if (1 == SpiSchedulerInData.NfcMainIrqReg.Bits.I_rxs)     { SpiSchedulerInData.NfcStartOfReceptionCounter++; }
			if (1 == SpiSchedulerInData.NfcMainIrqReg.Bits.I_rxe)     { SpiSchedulerInData.NfcEndOfReceptionCounter++; }
			if (1 == SpiSchedulerInData.NfcNfcIrqReg.Bits.I_dct)      { SpiSchedulerInData.NfcTerminationDirectCommandCounter++; }
			if (1 == SpiSchedulerInData.NfcNfcIrqReg.Bits.I_cat)      { SpiSchedulerInData.NfcCollisionAdvoidanceCounter++; }
			if (1 == SpiSchedulerInData.NfcNfcIrqReg.Bits.I_nre)      { SpiSchedulerInData.NfcNoResponseTimerCounter++; }
			if (1 == SpiSchedulerInData.NfcErrWupIrqReg.Bits.I_wcap)  { SpiSchedulerInData.NfcWakeUpCounter++; }
			if (1 == SpiSchedulerInData.NfcErrWupIrqReg.Bits.I_wt)  { SpiSchedulerInData.NfcWakeUpTimerCounter++; }
			break;
		case SSO_GYRO_READ_WHO_AM_I         : SpiSchedulerInData.AccWhoAmI = SpiInData.Data[1];     break;
		case SSO_FLASH_READ_IDENTIFICATION  : SpiSchedulerInData.FlashIdent = SpiInData.Data[1];    break;
		case SSO_NFC_READ_FIFO_ANTICOLLISION :
			if (NfcTagUidCount<4) {
				SpiSchedulerInData.NfcTagUid.NfcTagUid[NfcTagUidCount] = SpiInData.Data[1];
				NfcTagUidCount++;
			}
				break;
		case SSO_NFC_CAPACITIVE_SENSOR_READ_AD_REG :
			SpiSchedulerInData.CapacitanceAdValue              = SpiInData.Data[1];
		break;

		case  SSO_NFC_READ_CAPACITIVE_SENSOR_DISPLAY_REG :
			SpiSchedulerInData.CapacitanceMeasurementDisplayRegister                = SpiInData.Data[1];
			break;

		case  SSO_GYRO_READ_OUT_X_G :
			SpiSchedulerInData.GyroAngularX = SpiInData.Data[2];
			SpiSchedulerInData.GyroAngularX <<= 8;
			SpiSchedulerInData.GyroAngularX += SpiInData.Data[1];
			break;
		case  SSO_GYRO_READ_OUT_Y_G :
			SpiSchedulerInData.GyroAngularY = SpiInData.Data[2];
			SpiSchedulerInData.GyroAngularY <<= 8;
			SpiSchedulerInData.GyroAngularY += SpiInData.Data[1];
			break;
		case  SSO_GYRO_READ_OUT_Z_G :
			SpiSchedulerInData.GyroAngularZ = SpiInData.Data[2];
			SpiSchedulerInData.GyroAngularZ <<= 8;
			SpiSchedulerInData.GyroAngularZ += SpiInData.Data[1];
			break;
		case  SSO_GYRO_READ_OUT_X_A :
			SpiSchedulerInData.GyroAccelerationX = SpiInData.Data[2];
			SpiSchedulerInData.GyroAccelerationX <<= 8;
			SpiSchedulerInData.GyroAccelerationX += SpiInData.Data[1];
			if (SpiSchedulerInData.GyroAccelerationX < 0) {
				ASM("NOP");
			}
			break;
		case  SSO_GYRO_READ_OUT_Y_A :
			SpiSchedulerInData.GyroAccelerationY = SpiInData.Data[2];
			SpiSchedulerInData.GyroAccelerationY <<= 8;
			SpiSchedulerInData.GyroAccelerationY += SpiInData.Data[1];
			break;
		case  SSO_GYRO_READ_OUT_Z_A :
			SpiSchedulerInData.GyroAccelerationZ = SpiInData.Data[2];
			SpiSchedulerInData.GyroAccelerationZ <<= 8;
			SpiSchedulerInData.GyroAccelerationZ += SpiInData.Data[1];
			break;

		default :
			break;
	}
}

tSpiSchedulerInData * SpiSchedulerInGetData(void) {
	return &SpiSchedulerInData;
}
