#include "../HalOut/SpiDataOutDef.h"
#include "SpiProt.h"
#include "SpiSchedulerOut.h"

const tSpiOutData SpiOutData[50] = {
	{ SPI_NFC,   0, { 0,0,0,0 } },                //  0: NFC_IDLE
	{ SPI_NFC,   1, { 0xC1,0,0,0 } },             //  1: NFC_DIRECT_SET_DEFAULT
	{ SPI_NFC,   2, { 0x7F,0,0,0 } },             //  2: NFC_READ_DEVICE_ID
	{ SPI_NFC,   2, { 0x01,0x9C,0,0 } },          //  3: NFC_WRITE_CONF_2_REG_3V3
	{ SPI_NFC,   2, { 0x02,0x80,0,0 } },          //  4: NFC_WRITE_OPERATION_CONTROL_REG_ENABLE
	{ SPI_NFC,   1, { 0xD6,0,0,0 } },             //  5: NFC_DIRECT_ADJUST_REGULATORS
	{ SPI_NFC,   1, { 0xC8,0,0,0 } },             //  6: NFC_DIRECT_FIELD_ON
	{ SPI_NFC,   2, { 0x42,0,0,0 } },             //  7: NFC_READ_OP_REGISTER
	{ SPI_NFC,   2, { 0x02,0xCB,0,0 } },          //  8: NFC_WRITE_OPERATION_CONTROL_RX_EN
	{ SPI_NFC,   1, { 0xC6,0,0,0 } },             //  9: NFC_DIRECT_TRANSMIT_REQA

	{ SPI_NFC,   1, { 0xC7,0,0,0 } },             // 10: NFC_DIRECT_TRANSMIT_WUPA
	{ SPI_NFC,   3, { 0x5E,0,0,0 } },             // 11: NFC_READ_FIFO_STATUS_REG
	{ SPI_NFC,   2, { 0x43,0,0,0 } },             // 12: NFC_READ_MODE_DEFINITION_REG
	{ SPI_NFC,   4, { 0x5A,0,0,0 } },             // 13: NFC_READ_MAIN_INTERUPT_REG
	{ SPI_NFC,   3, { 0x2A,0x11,0x00,0 } },       // 14: NFC_WRITE_EXT_FIELD_DET_ACT_REG
	//{ SPI_NFC,   3, { 0x0B,0x08,0x2D,0 } },     // 15: NFC_WRITE_RECEIVER_CONF_REG -> Gain Reduction -15 dB
	{ SPI_NFC,   4, { 0x0B,0x08,0x2D,0xD8 } },    // 15: NFC_WRITE_RECEIVER_CONF_REG -> Full Gain 0 dB
	//{ SPI_NFC,   4, { 0x0B,0x08,0x2D,0xFC } },  // 15: NFC_WRITE_RECEIVER_CONF_REG -> Boost +5.5 dB
	{ SPI_NFC,   3, { 0x10,0x00,0x2D,0 } },       // 16: NFC_WRITE_NO_RESPONSE_TIMER_REG
	{ SPI_NFC,   2, { 0x0A,0x90,0,0 } },          // 17: NFC_WRITE_NO_AUXILARY_DEF_REG
	{ SPI_NFC,   1, { 0xC2,0,0,0 } },             // 18: NFC_STOP_ALL
	{ SPI_NFC,   1, { 0xD5,0,0,0 } },             // 19: NFC_RESET_RX_GAIN

	{ SPI_NFC,   1, { 0xD3,0,0,0 } },             // 20: NFC_MEASURE_AMPLITUDE
	{ SPI_NFC,   3, { 0x13,0x02,0xC8,0 } },       // 21: NFC_WRITE_GENERAL_PURPOSE_TIMER_REG
	{ SPI_NFC,   3, { 0xFB,0x15,0,0 } },          // 22: NFC_READ_FIELD_ON_GUARD_TIMER_REG
	{ SPI_NFC,   3, { 0xFB,0x55,0,0 } },          // 23: NFC_WRITE_FIELD_ON_GUARD_TIMER_REG
	{ SPI_NFC,   2, { 0x9F,0,0,0 } },             // 24: NFC_READ_FIFO
	{ SPI_NFC,   3, { 0x22,0x00,0x10,0 } },       // 25: NFC_WRITE_TRANSMITTED_BYTE_REG_ANTICOLLISION
	{ SPI_NFC,   3, { 0x80,0x93,0x20,0 } },       // 26: NFC_LOAD_FIFO_ANTICOLLISION
	{ SPI_NFC,   1, { 0xC5,0,0,0 } },             // 27: NFC_TRANSMIT_WITHOUT_CRC
	{ SPI_GYRO,  2, { 0x8F,0,0,0 } },             // 28: GYRO_READ_WHO_AM_I
	{ SPI_FLASH, 4, { 0x9F,0,0,0 } },             // 29: FLASH_READ_IDENTIFICATION

	{ SPI_NFC,   2, { 0x02,0x00,0,0 } },          // 30: SSO_NFC_WRITE_OPERATION_CONTROL_REG_DISABLE
	{ SPI_NFC,   2, { 0x32,0x01,0,0 } },          // 31: NFC_WRITE_WAKE_UP_TIMER_CONTROL_REG
	{ SPI_NFC,   2, { 0x3B,0,0,0 } },             // 32: NFC_CAPACITANCE_MEASUREMENT_CONF_REG
	{ SPI_NFC,   1, { 0xDE,0,0,0 } },             // 33: SSO_NFC_READ_CAPACITIVE_SENSOR
	{ SPI_NFC,   1, { 0xDD,0,0,0 } },             // 34: NFC_CALIBRATE_CAPACITIVE_SENSOR
	{ SPI_NFC,   2, { 0x65,0,0,0 } },             // 35: SSO_NFC_CAPACITIVE_SENSOR_READ_AD_REG
	{ SPI_NFC,   3, { 0x7D,0,0,0 } },             // 36: NFC_READ_CAPACITIVE_SENSOR_DISPLAY_REG
	{ SPI_NFC,   4, { 0x1A,0,0,0xFE } },          // 37: NFC_WRITE_WAKE_UP_INT_ONLY
	//{ SPI_NFC   4, { 0x1A,0,0,0 } },             // 37: NFC_WRITE_WAKE_UP_INT_ONLY
	{ SPI_NFC,   1, { 0xE1,0,0,0 } },             // 38: NFC_DIRECT_START_WAKEUP_TIMER
	{ SPI_NFC,   2, { 0x2F,0x01,0,0 } },          // 39: NFC_WRITE_CAPACITIVE_SENSOR_CONTROL_REG

	{ SPI_NFC,   2, { 0x3C,0,0,0 } },             // 40: NFC_WRITE_CAPACITIVE_MEASUREMENT_REF_REG
	{ SPI_GYRO,  3, { 0xA2,0,0,0 } },             // 41: GYRO_READ_OUT_X_G
	{ SPI_GYRO,  3, { 0xA4,0,0,0 } },             // 42: GYRO_READ_OUT_Y_G
	{ SPI_GYRO,  3, { 0xA6,0,0,0 } },             // 43: GYRO_READ_OUT_Z_G
	{ SPI_GYRO,  3, { 0xA8,0,0,0 } },             // 44: GYRO_READ_OUT_X_A
	{ SPI_GYRO,  3, { 0xAA,0,0,0 } },             // 45: GYRO_READ_OUT_Y_A
	{ SPI_GYRO,  3, { 0xAC,0,0,0 } },             // 46: GYRO_READ_OUT_Z_A
	{ SPI_GYRO,  3, { 0x10,0x10,0x10,0 } },       // 47: GYRO_WRITE_CONF_1_2_REG
	{ SPI_NFC,   2, { 0x02,0,0,0 } },             // 48: NFC_OPERATON_CONTROL_STOP_WAKE_UP_MODE
	{ SPI_NFC,   2, { 0x65,0,0,0 } },             // 49: NFC_READ_AD_CONVERTER_OUTPUT
};

const tSpiOutData * NfcGetData(void) {
	unsigned short int SpiCommandIdx;
	enum eNfcSt25rState State;
	State = NfcSt25rGetState();

	switch (State) {
		case SSO_NFC_DIRECT_SET_DEFAULT                       : SpiCommandIdx =  1; break;
		case SSO_NFC_CAPACITIVE_SET_DEFAULT                   : SpiCommandIdx =  1; break;
		case SSO_NFC_READ_DEVICE_ID                           : SpiCommandIdx =  2; break;
		case SSO_NFC_WRITE_CONF_2_REG_3V3                     : SpiCommandIdx =  3; break;
		case SSO_NFC_WRITE_OPERATION_CONTROL_REG_ENABLE       : SpiCommandIdx =  4; break;
		case SSO_NFC_DIRECT_ADJUST_REGULATORS                 : SpiCommandIdx =  5; break;
		case SSO_NFC_DIRECT_FIELD_ON                          : SpiCommandIdx =  6; break;
		case SSO_NFC_READ_OP_REGISTER                         : SpiCommandIdx =  7; break;
		case SSO_NFC_WRITE_OPERATION_CONTROL_RX_EN            : SpiCommandIdx =  8; break;
		case SSO_NFC_DIRECT_TRANSMIT_REQA                     : SpiCommandIdx =  9; break;
		case SSO_NFC_DIRECT_TRANSMIT_WUPA                     : SpiCommandIdx = 10; break;
		case SSO_NFC_READ_FIFO_STATUS_REG_REQA                : SpiCommandIdx = 11; break;
		case SSO_NFC_READ_FIFO_STATUS_REG_ANTICOLLISION       : SpiCommandIdx = 11; break;
		case SSO_NFC_READ_MODE_DEFINITION_REG                 : SpiCommandIdx = 12; break;
		case SSO_NFC_WAIT_OSC_STABLE_OR_TIMEOUT               : SpiCommandIdx = 13; break;
		case SSO_NFC_WAIT_FIELD_ON_OR_TIMEOUT                 : SpiCommandIdx = 13; break;
		case SSO_NFC_WAIT_END_OF_TRANSMISSION_REQA            : SpiCommandIdx = 13; break;
		case SSO_NFC_WAIT_START_OF_RECEPTION_REQA             : SpiCommandIdx = 13; break;
		case SSO_NFC_WAIT_END_OF_RECEPTION_REQA               : SpiCommandIdx = 13; break;
		case SSO_NFC_WAIT_END_OF_TRANSMISSION_ANTICOLLISION   : SpiCommandIdx = 13; break;
		case SSO_NFC_WAIT_START_OF_RECEPTION_ANTICOLLISION    : SpiCommandIdx = 13; break;
		case SSO_NFC_WAIT_END_OF_RECEPTION_ANTICOLLISION      : SpiCommandIdx = 13; break;
		case SSO_NFC_WAIT_ADJUST_REGULATORS_OR_TIMEOUT        : SpiCommandIdx = 13; break;
		case SSO_NFC_WAIT_MEASURE_AMPLITUDE_OR_TIMEOUT        : SpiCommandIdx = 13; break;
		//case NFC_WAIT_WAKE_UP_BY_INT_OR_TIMEOUT                  : SpiCommandIdx = 13; break;
		case SSO_NFC_WAIT_TERMINATION_DIRECT_COMMAND_MEASURE_CAPACITANCE           : SpiCommandIdx = 13; break;
		case SSO_NFC_WAIT_TERMINATION_DIRECT_COMMAND_CALIBRATE_CAPACITANCE_SENSOR  : SpiCommandIdx = 13; break;
		case SSO_NFC_CLEAR_INT_AFTER_WAKEUP                   : SpiCommandIdx = 13; break;
		case SSO_NFC_PATH_2_READ_IRQ                   		  : SpiCommandIdx = 13; break;
		case SSO_NFC_WRITE_EXT_FIELD_DET_ACT_REG              : SpiCommandIdx = 14; break;
		case SSO_NFC_WRITE_RECEIVER_CONF_REG                  : SpiCommandIdx = 15; break;
		case SSO_NFC_WRITE_NO_RESPONSE_TIMER_REG              : SpiCommandIdx = 16; break;
		case SSO_NFC_WRITE_NO_AUXILARY_DEF_REG                : SpiCommandIdx = 17; break;
		case SSO_NFC_STOP_ALL                                 : SpiCommandIdx = 18; break;
		case SSO_NFC_RESET_RX_GAIN                            : SpiCommandIdx = 19; break;
		case SSO_NFC_MEASURE_AMPLITUDE                        : SpiCommandIdx = 20; break;
		case SSO_NFC_WRITE_GENERAL_PURPOSE_TIMER_REG          : SpiCommandIdx = 21; break;
		case SSO_NFC_READ_FIELD_ON_GUARD_TIMER_REG            : SpiCommandIdx = 22; break;
		case SSO_NFC_WRITE_FIELD_ON_GUARD_TIMER_REG           : SpiCommandIdx = 23; break;
		case SSO_NFC_READ_FIFO_REQA                           : SpiCommandIdx = 24; break;
		case SSO_NFC_READ_FIFO_ANTICOLLISION                  : SpiCommandIdx = 24; break;
		case SSO_NFC_WRITE_TRANSMITTED_BYTE_REG_ANTICOLLISION : SpiCommandIdx = 25; break;
		case SSO_NFC_LOAD_FIFO_ANTICOLLISION                  : SpiCommandIdx = 26; break;
		case SSO_NFC_TRANSMIT_ANTICOLLISION                   : SpiCommandIdx = 27; break;
		case SSO_GYRO_READ_WHO_AM_I                           : SpiCommandIdx = 28; break;
		case SSO_FLASH_READ_IDENTIFICATION                    : SpiCommandIdx = 29; break;
		case SSO_NFC_WRITE_OPERATION_CONTROL_REG_DISABLE      : SpiCommandIdx = 30; break;
		case SSO_NFC_WRITE_WAKE_UP_TIMER_CONTROL_REG          : SpiCommandIdx = 31; break;
		case SSO_NFC_WRITE_CAPACITANCE_MEASUREMENT_CONF_REG   : SpiCommandIdx = 32; break;
		case SSO_NFC_READ_CAPACITIVE_SENSOR                   : SpiCommandIdx = 33; break;
		case SSO_NFC_DIRECT_CALIBRATE_CAPACITIVE_SENSOR       : SpiCommandIdx = 34; break;
		case SSO_NFC_CAPACITIVE_SENSOR_READ_AD_REG            : SpiCommandIdx = 35; break;
		case SSO_NFC_READ_CAPACITIVE_SENSOR_DISPLAY_REG       : SpiCommandIdx = 36; break;
		case SSO_NFC_WRITE_WAKE_UP_INT_ONLY                   : SpiCommandIdx = 37; break;
		case SSO_NFC_DIRECT_START_WAKEUP_TIMER                : SpiCommandIdx = 38; break;
		case SSO_NFC_WRITE_CAPACITIVE_SENSOR_CONTROL_REG      : SpiCommandIdx = 39; break;
		case SSO_NFC_WRITE_CAPACITIVE_MEASUREMENT_REF_REG     : SpiCommandIdx = 40; break;
		case SSO_GYRO_READ_OUT_X_G                            : SpiCommandIdx = 41; break;
		case SSO_GYRO_READ_OUT_Y_G                            : SpiCommandIdx = 42; break;
		case SSO_GYRO_READ_OUT_Z_G                            : SpiCommandIdx = 43; break;
		case SSO_GYRO_READ_OUT_X_A                            : SpiCommandIdx = 44; break;
		case SSO_GYRO_READ_OUT_Y_A                            : SpiCommandIdx = 45; break;
		case SSO_GYRO_READ_OUT_Z_A                            : SpiCommandIdx = 46; break;
		case SSO_GYRO_WRITE_CONF_1_2_REG                      : SpiCommandIdx = 47; break;
		case SSO_NFC_OPERATON_CONTROL_STOP_WAKE_UP_MODE       : SpiCommandIdx = 48; break;
		case SSO_NFC_READ_AD_CONVERTER_OUTPUT                 : SpiCommandIdx = 49; break;

		default : SpiCommandIdx = 0; break;
	};

	//return &SpiOutData[3];
	return &SpiOutData[SpiCommandIdx];
}
