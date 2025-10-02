

#include "../CortexM4/CortexM4Stk.h"
#include "..\Target\Target.h"
#include "..\CortexM4\CortexM4_NVIC_Def.h"
#include "..\System\Main.h"
#include "../DrvIn/Spi3In.h"


void intReset(void) {
	main();
}

void IntUnused(void) {
#if 0
	volatile sCORTEX_M4_NVIC* pCORTEX_M4_NVIC = (sCORTEX_M4_NVIC *)CORTEX_M4_NVIC_ADR;
	ASM("NOP");
	(void)pCORTEX_M4_NVIC;
#endif
	while (1) {}
	ASM("NOP");
}

void intNmi(void) {}
void intHardFault(void) {
#if 0
	volatile unsigned long * pCFSR = (unsigned long *)0xE000ED28;
	volatile unsigned long * pUFSR = (unsigned long *)0xE000ED2A;
	volatile unsigned long * pHFSR = (unsigned long *)0xE000ED2C;
	volatile unsigned long * pMMAR = (unsigned long *)0xE000ED34;
	volatile unsigned long * pBFAR = (unsigned long *)0xE000ED38;
#endif

	while (1) {
		ASM("NOP");
	}
}

void intMemManage(void)        {
	ASM("NOP");
}


void intPendSv(void)           { IntUnused(); }
void intSvCall(void)           { IntUnused(); }
void intSysTick(void)          { CortexM4StkInt(); }

