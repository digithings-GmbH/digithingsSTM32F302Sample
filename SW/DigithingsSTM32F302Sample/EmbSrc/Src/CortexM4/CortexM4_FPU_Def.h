//  Addres of FPU = 0xE000ED88


#define CORTEX_M7_FPU_CPACR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 20;
    unsigned long CP10 : 2;
    unsigned long CP11 : 2;
    unsigned long Res1 : 8;
} sCORTEX_M7_FPU_CPACR;

typedef union {
	sCORTEX_M7_FPU_CPACR Bit;
    unsigned long  All;
} uCORTEX_M7_FPU_CPACR;

typedef struct {
	uCORTEX_M7_FPU_CPACR CORTEX_M7_FPU_CPACR;
} sCORTEX_M7_FPU;



/*
 *
 *
 *











 *
 */
