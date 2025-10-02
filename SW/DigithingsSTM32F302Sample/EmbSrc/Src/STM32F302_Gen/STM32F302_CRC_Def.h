// Base Addres of CRC = 0x40023000

#define STM32F302_CRC_DR_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long DR : 32;
} sSTM32F302_CRC_DR;

typedef union {
    sSTM32F302_CRC_DR Bit;
    unsigned long  All;
} uSTM32F302_CRC_DR;

#define STM32F302_CRC_IDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IDR : 8;
    unsigned long Res0 : 24;
} sSTM32F302_CRC_IDR;

typedef union {
    sSTM32F302_CRC_IDR Bit;
    unsigned long  All;
} uSTM32F302_CRC_IDR;

#define STM32F302_CRC_CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RESET : 1;
    unsigned long Res0 : 2;
    unsigned long POLYSIZE : 2;
    unsigned long REV_IN : 2;
    unsigned long REV_OUT : 1;
    unsigned long Res1 : 24;
} sSTM32F302_CRC_CR;

typedef union {
    sSTM32F302_CRC_CR Bit;
    unsigned long  All;
} uSTM32F302_CRC_CR;

#define STM32F302_CRC_INIT_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long INIT : 32;
} sSTM32F302_CRC_INIT;

typedef union {
    sSTM32F302_CRC_INIT Bit;
    unsigned long  All;
} uSTM32F302_CRC_INIT;

#define STM32F302_CRC_POL_RESET_VALUE 0x04C11DB7
typedef struct {
    unsigned long POL : 32;
} sSTM32F302_CRC_POL;

typedef union {
    sSTM32F302_CRC_POL Bit;
    unsigned long  All;
} uSTM32F302_CRC_POL;

typedef struct {
    uSTM32F302_CRC_DR STM32F302_CRC_DR; // Offset: 0x0
    uSTM32F302_CRC_IDR STM32F302_CRC_IDR; // Offset: 0x4
    uSTM32F302_CRC_CR STM32F302_CRC_CR; // Offset: 0x8
    unsigned long Reserved0;
    uSTM32F302_CRC_INIT STM32F302_CRC_INIT; // Offset: 0x10
    uSTM32F302_CRC_POL STM32F302_CRC_POL; // Offset: 0x14
} sSTM32F302_CRC;

