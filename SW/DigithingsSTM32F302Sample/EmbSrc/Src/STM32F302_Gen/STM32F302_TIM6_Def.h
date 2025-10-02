// Base Addres of TIM6 = 0x40001000

#define STM32F302_TIM6_CR1_RESET_VALUE 0x0000
typedef struct {
    unsigned long CEN : 1;
    unsigned long UDIS : 1;
    unsigned long URS : 1;
    unsigned long OPM : 1;
    unsigned long Res0 : 3;
    unsigned long ARPE : 1;
    unsigned long Res1 : 3;
    unsigned long UIFREMAP : 1;
    unsigned long Res2 : 20;
} sSTM32F302_TIM6_CR1;

typedef union {
    sSTM32F302_TIM6_CR1 Bit;
    unsigned long  All;
} uSTM32F302_TIM6_CR1;

#define STM32F302_TIM6_CR2_RESET_VALUE 0x0000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long MMS : 3;
    unsigned long Res1 : 25;
} sSTM32F302_TIM6_CR2;

typedef union {
    sSTM32F302_TIM6_CR2 Bit;
    unsigned long  All;
} uSTM32F302_TIM6_CR2;

#define STM32F302_TIM6_DIER_RESET_VALUE 0x0000
typedef struct {
    unsigned long UIE : 1;
    unsigned long Res0 : 7;
    unsigned long UDE : 1;
    unsigned long Res1 : 23;
} sSTM32F302_TIM6_DIER;

typedef union {
    sSTM32F302_TIM6_DIER Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DIER;

#define STM32F302_TIM6_SR_RESET_VALUE 0x0000
typedef struct {
    unsigned long UIF : 1;
    unsigned long Res0 : 31;
} sSTM32F302_TIM6_SR;

typedef union {
    sSTM32F302_TIM6_SR Bit;
    unsigned long  All;
} uSTM32F302_TIM6_SR;

#define STM32F302_TIM6_EGR_RESET_VALUE 0x0000
typedef struct {
    unsigned long UG : 1;
    unsigned long Res0 : 31;
} sSTM32F302_TIM6_EGR;

typedef union {
    sSTM32F302_TIM6_EGR Bit;
    unsigned long  All;
} uSTM32F302_TIM6_EGR;

#define STM32F302_TIM6_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 16;
    unsigned long Res0 : 15;
    unsigned long UIFCPY : 1;
} sSTM32F302_TIM6_CNT;

typedef union {
    sSTM32F302_TIM6_CNT Bit;
    unsigned long  All;
} uSTM32F302_TIM6_CNT;

#define STM32F302_TIM6_PSC_RESET_VALUE 0x0000
typedef struct {
    unsigned long PSC : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM6_PSC;

typedef union {
    sSTM32F302_TIM6_PSC Bit;
    unsigned long  All;
} uSTM32F302_TIM6_PSC;

#define STM32F302_TIM6_ARR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ARR : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM6_ARR;

typedef union {
    sSTM32F302_TIM6_ARR Bit;
    unsigned long  All;
} uSTM32F302_TIM6_ARR;

typedef struct {
    uSTM32F302_TIM6_CR1 STM32F302_TIM6_CR1; // Offset: 0x0
    uSTM32F302_TIM6_CR2 STM32F302_TIM6_CR2; // Offset: 0x4
    unsigned long Reserved0;
    uSTM32F302_TIM6_DIER STM32F302_TIM6_DIER; // Offset: 0xc
    uSTM32F302_TIM6_SR STM32F302_TIM6_SR; // Offset: 0x10
    uSTM32F302_TIM6_EGR STM32F302_TIM6_EGR; // Offset: 0x14
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    uSTM32F302_TIM6_CNT STM32F302_TIM6_CNT; // Offset: 0x24
    uSTM32F302_TIM6_PSC STM32F302_TIM6_PSC; // Offset: 0x28
    uSTM32F302_TIM6_ARR STM32F302_TIM6_ARR; // Offset: 0x2c
} sSTM32F302_TIM6;

