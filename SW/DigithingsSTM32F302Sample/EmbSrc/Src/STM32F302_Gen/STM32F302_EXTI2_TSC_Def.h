// Base Addres of EXTI2_TSC = 0x40024000

#define STM32F302_EXTI2_TSC_CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TSCE : 1;
    unsigned long START : 1;
    unsigned long AM : 1;
    unsigned long SYNCPOL : 1;
    unsigned long IODEF : 1;
    unsigned long MCV : 3;
    unsigned long Res0 : 4;
    unsigned long PGPSC : 3;
    unsigned long SSPSC : 1;
    unsigned long SSE : 1;
    unsigned long SSD : 7;
    unsigned long CTPL : 4;
    unsigned long CTPH : 4;
} sSTM32F302_EXTI2_TSC_CR;

typedef union {
    sSTM32F302_EXTI2_TSC_CR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_CR;

#define STM32F302_EXTI2_TSC_IER_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EOAIE : 1;
    unsigned long MCEIE : 1;
    unsigned long Res0 : 30;
} sSTM32F302_EXTI2_TSC_IER;

typedef union {
    sSTM32F302_EXTI2_TSC_IER Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IER;

#define STM32F302_EXTI2_TSC_ICR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EOAIC : 1;
    unsigned long MCEIC : 1;
    unsigned long Res0 : 30;
} sSTM32F302_EXTI2_TSC_ICR;

typedef union {
    sSTM32F302_EXTI2_TSC_ICR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_ICR;

#define STM32F302_EXTI2_TSC_ISR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EOAF : 1;
    unsigned long MCEF : 1;
    unsigned long Res0 : 30;
} sSTM32F302_EXTI2_TSC_ISR;

typedef union {
    sSTM32F302_EXTI2_TSC_ISR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_ISR;

#define STM32F302_EXTI2_TSC_IOHCR_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long G1_IO1 : 1;
    unsigned long G1_IO2 : 1;
    unsigned long G1_IO3 : 1;
    unsigned long G1_IO4 : 1;
    unsigned long G2_IO1 : 1;
    unsigned long G2_IO2 : 1;
    unsigned long G2_IO3 : 1;
    unsigned long G2_IO4 : 1;
    unsigned long G3_IO1 : 1;
    unsigned long G3_IO2 : 1;
    unsigned long G3_IO3 : 1;
    unsigned long G3_IO4 : 1;
    unsigned long G4_IO1 : 1;
    unsigned long G4_IO2 : 1;
    unsigned long G4_IO3 : 1;
    unsigned long G4_IO4 : 1;
    unsigned long G5_IO1 : 1;
    unsigned long G5_IO2 : 1;
    unsigned long G5_IO3 : 1;
    unsigned long G5_IO4 : 1;
    unsigned long G6_IO1 : 1;
    unsigned long G6_IO2 : 1;
    unsigned long G6_IO3 : 1;
    unsigned long G6_IO4 : 1;
    unsigned long G7_IO1 : 1;
    unsigned long G7_IO2 : 1;
    unsigned long G7_IO3 : 1;
    unsigned long G7_IO4 : 1;
    unsigned long G8_IO1 : 1;
    unsigned long G8_IO2 : 1;
    unsigned long G8_IO3 : 1;
    unsigned long G8_IO4 : 1;
} sSTM32F302_EXTI2_TSC_IOHCR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOHCR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOHCR;

#define STM32F302_EXTI2_TSC_IOASCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long G1_IO1 : 1;
    unsigned long G1_IO2 : 1;
    unsigned long G1_IO3 : 1;
    unsigned long G1_IO4 : 1;
    unsigned long G2_IO1 : 1;
    unsigned long G2_IO2 : 1;
    unsigned long G2_IO3 : 1;
    unsigned long G2_IO4 : 1;
    unsigned long G3_IO1 : 1;
    unsigned long G3_IO2 : 1;
    unsigned long G3_IO3 : 1;
    unsigned long G3_IO4 : 1;
    unsigned long G4_IO1 : 1;
    unsigned long G4_IO2 : 1;
    unsigned long G4_IO3 : 1;
    unsigned long G4_IO4 : 1;
    unsigned long G5_IO1 : 1;
    unsigned long G5_IO2 : 1;
    unsigned long G5_IO3 : 1;
    unsigned long G5_IO4 : 1;
    unsigned long G6_IO1 : 1;
    unsigned long G6_IO2 : 1;
    unsigned long G6_IO3 : 1;
    unsigned long G6_IO4 : 1;
    unsigned long G7_IO1 : 1;
    unsigned long G7_IO2 : 1;
    unsigned long G7_IO3 : 1;
    unsigned long G7_IO4 : 1;
    unsigned long G8_IO1 : 1;
    unsigned long G8_IO2 : 1;
    unsigned long G8_IO3 : 1;
    unsigned long G8_IO4 : 1;
} sSTM32F302_EXTI2_TSC_IOASCR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOASCR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOASCR;

#define STM32F302_EXTI2_TSC_IOSCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long G1_IO1 : 1;
    unsigned long G1_IO2 : 1;
    unsigned long G1_IO3 : 1;
    unsigned long G1_IO4 : 1;
    unsigned long G2_IO1 : 1;
    unsigned long G2_IO2 : 1;
    unsigned long G2_IO3 : 1;
    unsigned long G2_IO4 : 1;
    unsigned long G3_IO1 : 1;
    unsigned long G3_IO2 : 1;
    unsigned long G3_IO3 : 1;
    unsigned long G3_IO4 : 1;
    unsigned long G4_IO1 : 1;
    unsigned long G4_IO2 : 1;
    unsigned long G4_IO3 : 1;
    unsigned long G4_IO4 : 1;
    unsigned long G5_IO1 : 1;
    unsigned long G5_IO2 : 1;
    unsigned long G5_IO3 : 1;
    unsigned long G5_IO4 : 1;
    unsigned long G6_IO1 : 1;
    unsigned long G6_IO2 : 1;
    unsigned long G6_IO3 : 1;
    unsigned long G6_IO4 : 1;
    unsigned long G7_IO1 : 1;
    unsigned long G7_IO2 : 1;
    unsigned long G7_IO3 : 1;
    unsigned long G7_IO4 : 1;
    unsigned long G8_IO1 : 1;
    unsigned long G8_IO2 : 1;
    unsigned long G8_IO3 : 1;
    unsigned long G8_IO4 : 1;
} sSTM32F302_EXTI2_TSC_IOSCR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOSCR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOSCR;

#define STM32F302_EXTI2_TSC_IOCCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long G1_IO1 : 1;
    unsigned long G1_IO2 : 1;
    unsigned long G1_IO3 : 1;
    unsigned long G1_IO4 : 1;
    unsigned long G2_IO1 : 1;
    unsigned long G2_IO2 : 1;
    unsigned long G2_IO3 : 1;
    unsigned long G2_IO4 : 1;
    unsigned long G3_IO1 : 1;
    unsigned long G3_IO2 : 1;
    unsigned long G3_IO3 : 1;
    unsigned long G3_IO4 : 1;
    unsigned long G4_IO1 : 1;
    unsigned long G4_IO2 : 1;
    unsigned long G4_IO3 : 1;
    unsigned long G4_IO4 : 1;
    unsigned long G5_IO1 : 1;
    unsigned long G5_IO2 : 1;
    unsigned long G5_IO3 : 1;
    unsigned long G5_IO4 : 1;
    unsigned long G6_IO1 : 1;
    unsigned long G6_IO2 : 1;
    unsigned long G6_IO3 : 1;
    unsigned long G6_IO4 : 1;
    unsigned long G7_IO1 : 1;
    unsigned long G7_IO2 : 1;
    unsigned long G7_IO3 : 1;
    unsigned long G7_IO4 : 1;
    unsigned long G8_IO1 : 1;
    unsigned long G8_IO2 : 1;
    unsigned long G8_IO3 : 1;
    unsigned long G8_IO4 : 1;
} sSTM32F302_EXTI2_TSC_IOCCR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOCCR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOCCR;

#define STM32F302_EXTI2_TSC_IOGCSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long G1E : 1;
    unsigned long G2E : 1;
    unsigned long G3E : 1;
    unsigned long G4E : 1;
    unsigned long G5E : 1;
    unsigned long G6E : 1;
    unsigned long G7E : 1;
    unsigned long G8E : 1;
    unsigned long Res0 : 8;
    unsigned long G1S : 1;
    unsigned long G2S : 1;
    unsigned long G3S : 1;
    unsigned long G4S : 1;
    unsigned long G5S : 1;
    unsigned long G6S : 1;
    unsigned long G7S : 1;
    unsigned long G8S : 1;
    unsigned long Res1 : 8;
} sSTM32F302_EXTI2_TSC_IOGCSR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOGCSR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOGCSR;

#define STM32F302_EXTI2_TSC_IOG1CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 14;
    unsigned long Res0 : 18;
} sSTM32F302_EXTI2_TSC_IOG1CR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOG1CR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOG1CR;

#define STM32F302_EXTI2_TSC_IOG2CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 14;
    unsigned long Res0 : 18;
} sSTM32F302_EXTI2_TSC_IOG2CR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOG2CR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOG2CR;

#define STM32F302_EXTI2_TSC_IOG3CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 14;
    unsigned long Res0 : 18;
} sSTM32F302_EXTI2_TSC_IOG3CR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOG3CR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOG3CR;

#define STM32F302_EXTI2_TSC_IOG4CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 14;
    unsigned long Res0 : 18;
} sSTM32F302_EXTI2_TSC_IOG4CR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOG4CR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOG4CR;

#define STM32F302_EXTI2_TSC_IOG5CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 14;
    unsigned long Res0 : 18;
} sSTM32F302_EXTI2_TSC_IOG5CR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOG5CR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOG5CR;

#define STM32F302_EXTI2_TSC_IOG6CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 14;
    unsigned long Res0 : 18;
} sSTM32F302_EXTI2_TSC_IOG6CR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOG6CR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOG6CR;

#define STM32F302_EXTI2_TSC_IOG7CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 14;
    unsigned long Res0 : 18;
} sSTM32F302_EXTI2_TSC_IOG7CR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOG7CR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOG7CR;

#define STM32F302_EXTI2_TSC_IOG8CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 14;
    unsigned long Res0 : 18;
} sSTM32F302_EXTI2_TSC_IOG8CR;

typedef union {
    sSTM32F302_EXTI2_TSC_IOG8CR Bit;
    unsigned long  All;
} uSTM32F302_EXTI2_TSC_IOG8CR;

typedef struct {
    uSTM32F302_EXTI2_TSC_CR STM32F302_EXTI2_TSC_CR; // Offset: 0x0
    uSTM32F302_EXTI2_TSC_IER STM32F302_EXTI2_TSC_IER; // Offset: 0x4
    uSTM32F302_EXTI2_TSC_ICR STM32F302_EXTI2_TSC_ICR; // Offset: 0x8
    uSTM32F302_EXTI2_TSC_ISR STM32F302_EXTI2_TSC_ISR; // Offset: 0xc
    uSTM32F302_EXTI2_TSC_IOHCR STM32F302_EXTI2_TSC_IOHCR; // Offset: 0x10
    unsigned long Reserved0;
    uSTM32F302_EXTI2_TSC_IOASCR STM32F302_EXTI2_TSC_IOASCR; // Offset: 0x18
    unsigned long Reserved1;
    uSTM32F302_EXTI2_TSC_IOSCR STM32F302_EXTI2_TSC_IOSCR; // Offset: 0x20
    unsigned long Reserved2;
    uSTM32F302_EXTI2_TSC_IOCCR STM32F302_EXTI2_TSC_IOCCR; // Offset: 0x28
    unsigned long Reserved3;
    uSTM32F302_EXTI2_TSC_IOGCSR STM32F302_EXTI2_TSC_IOGCSR; // Offset: 0x30
    uSTM32F302_EXTI2_TSC_IOG1CR STM32F302_EXTI2_TSC_IOG1CR; // Offset: 0x34
    uSTM32F302_EXTI2_TSC_IOG2CR STM32F302_EXTI2_TSC_IOG2CR; // Offset: 0x38
    uSTM32F302_EXTI2_TSC_IOG3CR STM32F302_EXTI2_TSC_IOG3CR; // Offset: 0x3c
    uSTM32F302_EXTI2_TSC_IOG4CR STM32F302_EXTI2_TSC_IOG4CR; // Offset: 0x40
    uSTM32F302_EXTI2_TSC_IOG5CR STM32F302_EXTI2_TSC_IOG5CR; // Offset: 0x44
    uSTM32F302_EXTI2_TSC_IOG6CR STM32F302_EXTI2_TSC_IOG6CR; // Offset: 0x48
    uSTM32F302_EXTI2_TSC_IOG7CR STM32F302_EXTI2_TSC_IOG7CR; // Offset: 0x4c
    uSTM32F302_EXTI2_TSC_IOG8CR STM32F302_EXTI2_TSC_IOG8CR; // Offset: 0x50
} sSTM32F302_EXTI2_TSC;

