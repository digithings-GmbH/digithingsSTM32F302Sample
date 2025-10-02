typedef struct {
	unsigned char RFU       :1;
	unsigned char I_rx_rest :1;
	unsigned char I_col     :1;
	unsigned char I_txe     :1;
	unsigned char I_rxe     :1;
	unsigned char I_rxs     :1;
	unsigned char I_wl      :1;
	unsigned char I_osc     :1;
} tNfcMainInterruptRegister;

typedef union {
	tNfcMainInterruptRegister Bits;
	unsigned char All;
}uNfcMainInterruptRegister;

typedef struct {
	unsigned char I_nfct    :1;
	unsigned char I_cat     :1;
	unsigned char I_cac     :1;
	unsigned char I_eof     :1;
	unsigned char I_eon     :1;
	unsigned char I_gpe     :1;
	unsigned char I_nre     :1;
	unsigned char I_dct       :1;
} tNfcTmerAndNfcInterruptRegister;

typedef union {
	tNfcTmerAndNfcInterruptRegister Bits;
	unsigned char All;
}uNfcTmerAndNfcInterruptRegister;

typedef struct {
	unsigned char I_wcap      :1;
	unsigned char I_wph       :1;
	unsigned char I_warm      :1;
	unsigned char I_wt        :1;
	unsigned char I_err1      :1;
	unsigned char I_err2      :1;
	unsigned char I_par       :1;
	unsigned char I_crc       :1;
} tNfcErrorAndWakeupInterruptRegister;

typedef union {
	tNfcErrorAndWakeupInterruptRegister Bits;
	unsigned char All;
}uNfcErrorAndWakeupInterruptRegister;

typedef struct {
	unsigned char NfcTagUid[4];
} tNfcTagUid;

typedef struct {
	unsigned char NfcOperationControl;
	unsigned char NfcModeDefReg;
	unsigned char NfcFifoStat1;
	unsigned char NfcFifoStat2;
	unsigned char NfcIcId;
	unsigned char NfcWhoAmI;
	unsigned char NfcIoConf1;
	unsigned char NfcIoConf2;
	unsigned char NfcMainIrqMask;
	unsigned short FlashIdent;
	uNfcMainInterruptRegister           NfcMainIrqReg;
	uNfcTmerAndNfcInterruptRegister     NfcNfcIrqReg;
	uNfcErrorAndWakeupInterruptRegister NfcErrWupIrqReg;
	unsigned char AccWhoAmI;
	tNfcTagUid NfcTagUid;
	unsigned char NfcOszillatorStableCounter;
	unsigned char NfcEndOfTransmissionCounter;
	unsigned char NfcStartOfReceptionCounter;
	unsigned char NfcEndOfReceptionCounter;
	unsigned char NfcTerminationDirectCommandCounter;
	unsigned char NfcCollisionAdvoidanceCounter;
	unsigned char NfcNoResponseTimerCounter;
	unsigned char NfcWakeUpCounter;
	unsigned char NfcWakeUpTimerCounter;
	unsigned char CapacitanceMeasurementReferenceRegister;
	unsigned char CapacitanceMeasurementAutoAveragingDisplayRegister;
	unsigned char CapacitanceMeasurementDisplayRegister;
	unsigned char CapacitanceAdValue;
	signed short GyroAngularX;
	signed short GyroAngularY;
	signed short GyroAngularZ;
	signed short GyroAccelerationX;
	signed short GyroAccelerationY;
	signed short GyroAccelerationZ;
} tSpiSchedulerInData;

void SpiSchedulerInInit(void);
void SpiSchedulerInMain(void);
tSpiSchedulerInData * SpiSchedulerInGetData(void);
