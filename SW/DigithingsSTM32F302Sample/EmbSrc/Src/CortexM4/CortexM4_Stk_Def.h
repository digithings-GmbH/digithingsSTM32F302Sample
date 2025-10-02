// Base Addres of SYST = 0xE000E010

#define CORTEX_M4_STK_CTRL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ENABLE : 1;
    unsigned long TICKINT : 1;
    unsigned long CLKSOURCE : 1;
    unsigned long Res0 : 13;
    unsigned long COUNTFLAG : 1;
    unsigned long Res1 : 15;
} sCORTEX_M4_STK_CTRL;

typedef union {
	sCORTEX_M4_STK_CTRL Bit;
    unsigned long  All;
} uCORTEX_M4_STK_CTRL;

#define CORTEX_M4_STK_LOAD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RELOAD : 24;
    unsigned long Res0 : 8;
} sCORTEX_M4_STK_LOAD;

typedef union {
	sCORTEX_M4_STK_LOAD Bit;
    unsigned long  All;
} uCORTEX_M4_STK_LOAD;

#define CORTEX_M4_STK_VAL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CURRENT : 24;
    unsigned long Res0 : 8;
} sCORTEX_M4_STK_VAL;

typedef union {
	sCORTEX_M4_STK_VAL Bit;
    unsigned long  All;
} uCORTEX_M4_STK_VAL;

#define CORTEX_M4_STK_CALIB_RESET_VALUE 0xC0000000
typedef struct {
    unsigned long TENMS : 24;
    unsigned long Res0 : 6;
    unsigned long SKEW : 1;
    unsigned long NOREF : 1;
} sCORTEX_M4_STK_CALIB;

typedef union {
	sCORTEX_M4_STK_CALIB Bit;
    unsigned long  All;
} uCORTEX_M4_STK_CALIB;

typedef struct {
    uCORTEX_M4_STK_CTRL CORTEX_M4_STK_CTRL; // Offset: 0x0
    uCORTEX_M4_STK_LOAD CORTEX_M4_STK_LOAD; // Offset: 0x4
    uCORTEX_M4_STK_VAL CORTEX_M4_STK_VAL; // Offset: 0x8
    uCORTEX_M4_STK_CALIB CORTEX_M4_STK_CALIB; // Offset: 0xc
} sCORTEX_M4_STK;



