// Base Addres of PVD = 0x40007000

#define STM32F302_PVD_CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LPDS : 1;
    unsigned long PDDS : 1;
    unsigned long CWUF : 1;
    unsigned long CSBF : 1;
    unsigned long PVDE : 1;
    unsigned long PLS : 3;
    unsigned long DBP : 1;
    unsigned long Res0 : 23;
} sSTM32F302_PVD_CR;

typedef union {
    sSTM32F302_PVD_CR Bit;
    unsigned long  All;
} uSTM32F302_PVD_CR;

#define STM32F302_PVD_CSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WUF : 1;
    unsigned long SBF : 1;
    unsigned long PVDO : 1;
    unsigned long Res0 : 5;
    unsigned long EWUP1 : 1;
    unsigned long EWUP2 : 1;
    unsigned long Res1 : 22;
} sSTM32F302_PVD_CSR;

typedef union {
    sSTM32F302_PVD_CSR Bit;
    unsigned long  All;
} uSTM32F302_PVD_CSR;

typedef struct {
    uSTM32F302_PVD_CR STM32F302_PVD_CR; // Offset: 0x0
    uSTM32F302_PVD_CSR STM32F302_PVD_CSR; // Offset: 0x4
} sSTM32F302_PVD;

