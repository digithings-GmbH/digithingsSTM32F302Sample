


#include "..\Target\Target.h"
#include "CortexM4_Stk_Def.h"


unsigned long Syst_Cnt;


void CortexM4StkInit(void) {
	volatile sCORTEX_M4_STK* pCORTEX_M4_STK = (sCORTEX_M4_STK*)(CORTEX_M4_STK_ADR);
	uCORTEX_M4_STK_CTRL CORTEX_M4_STK_CTRL;
	uCORTEX_M4_STK_LOAD CORTEX_M4_STK_LOAD;

	Syst_Cnt = 0;

	CORTEX_M4_STK_LOAD.All = CORTEX_M4_STK_LOAD_RESET_VALUE;
	CORTEX_M4_STK_LOAD.Bit.RELOAD = (480000000/20000);
	pCORTEX_M4_STK->CORTEX_M4_STK_LOAD.All = CORTEX_M4_STK_LOAD.All;

	CORTEX_M4_STK_CTRL.All = CORTEX_M4_STK_CTRL_RESET_VALUE;
	CORTEX_M4_STK_CTRL.Bit.ENABLE = 1;
	CORTEX_M4_STK_CTRL.Bit.TICKINT = 1;		// 1: Counting down to zero to asserts the SysTick exception request.
	CORTEX_M4_STK_CTRL.Bit.CLKSOURCE = 1;	// 1: Processor clock (AHB)
	pCORTEX_M4_STK->CORTEX_M4_STK_CTRL.All = CORTEX_M4_STK_CTRL.All;
}

void CortexM4StkInt(void) {
	Syst_Cnt++;
}

unsigned int  CortexM4StkGetCounter(void) {
	return Syst_Cnt;
}
