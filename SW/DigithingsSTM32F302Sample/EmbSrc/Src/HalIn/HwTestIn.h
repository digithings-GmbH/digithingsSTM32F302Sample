typedef struct {
	unsigned char HwInProtDataInt8[24];
} tHwInProtDataIn;

void HwTestInInit(void);
void HwTestInMain(void);
tHwInProtDataIn* HwTestInGetData(void);