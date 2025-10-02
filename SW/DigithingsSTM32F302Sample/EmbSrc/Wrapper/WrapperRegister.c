#include "../Wrapper/WrapperDef.h"
#include "../Src/Target/Target.h"

unsigned char * WrapperRegisterGetAddress(tTargetPeriph Peri) {
	unsigned char * pAdr;
	pAdr = &TargetMemory[Peri];
	return pAdr;
}

unsigned long WrapperRegisterReadData(enum PeriperalRegister Peri, unsigned char Offset) {
	unsigned char * pCharAdr;
	unsigned long * pLongAdr;
	pCharAdr = WrapperRegisterGetAddress(Peri);
	pLongAdr = &pCharAdr[Offset];
	return *pLongAdr;
}

void WrapperRegisterWriteData(enum PeriperalRegister Peri, unsigned char Offset, unsigned long Data) {
	unsigned char * pCharAdr;
	unsigned long * pLongAdr;
	pCharAdr = WrapperRegisterGetAddress(Peri);
	pLongAdr = &pCharAdr[Offset];
	*pLongAdr = Data;
}

DLL_EXPORT unsigned long WrapperRegisterRead(enum PeriperalRegister Peri, unsigned char Offset) {
	return WrapperRegisterReadData(Peri, Offset);
}

DLL_EXPORT void WrapperRegisterWrite(enum PeriperalRegister Peri, unsigned char Adr, unsigned long Data) {
	WrapperRegisterWriteData(Peri, Adr, Data);
}
