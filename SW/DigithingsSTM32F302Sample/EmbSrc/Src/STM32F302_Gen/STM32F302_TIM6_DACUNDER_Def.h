// Base Addres of TIM6_DACUNDER = 0x40007400

#define STM32F302_TIM6_DACUNDER_CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN1 : 1;
    unsigned long BOFF1 : 1;
    unsigned long TEN1 : 1;
    unsigned long TSEL1 : 3;
    unsigned long WAVE1 : 2;
    unsigned long MAMP1 : 4;
    unsigned long DMAEN1 : 1;
    unsigned long DMAUDRIE1 : 1;
    unsigned long Res0 : 2;
    unsigned long EN2 : 1;
    unsigned long BOFF2 : 1;
    unsigned long TEN2 : 1;
    unsigned long TSEL2 : 3;
    unsigned long WAVE2 : 2;
    unsigned long MAMP2 : 4;
    unsigned long DMAEN2 : 1;
    unsigned long DMAUDRIE2 : 1;
    unsigned long Res1 : 2;
} sSTM32F302_TIM6_DACUNDER_CR;

typedef union {
    sSTM32F302_TIM6_DACUNDER_CR Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_CR;

#define STM32F302_TIM6_DACUNDER_SWTRIGR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWTRIG1 : 1;
    unsigned long SWTRIG2 : 1;
    unsigned long Res0 : 30;
} sSTM32F302_TIM6_DACUNDER_SWTRIGR;

typedef union {
    sSTM32F302_TIM6_DACUNDER_SWTRIGR Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_SWTRIGR;

#define STM32F302_TIM6_DACUNDER_DHR12R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACC1DHR : 12;
    unsigned long Res0 : 20;
} sSTM32F302_TIM6_DACUNDER_DHR12R1;

typedef union {
    sSTM32F302_TIM6_DACUNDER_DHR12R1 Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_DHR12R1;

#define STM32F302_TIM6_DACUNDER_DHR12L1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long DACC1DHR : 12;
    unsigned long Res1 : 16;
} sSTM32F302_TIM6_DACUNDER_DHR12L1;

typedef union {
    sSTM32F302_TIM6_DACUNDER_DHR12L1 Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_DHR12L1;

#define STM32F302_TIM6_DACUNDER_DHR8R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACC1DHR : 8;
    unsigned long Res0 : 24;
} sSTM32F302_TIM6_DACUNDER_DHR8R1;

typedef union {
    sSTM32F302_TIM6_DACUNDER_DHR8R1 Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_DHR8R1;

#define STM32F302_TIM6_DACUNDER_DHR12R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACC2DHR : 12;
    unsigned long Res0 : 20;
} sSTM32F302_TIM6_DACUNDER_DHR12R2;

typedef union {
    sSTM32F302_TIM6_DACUNDER_DHR12R2 Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_DHR12R2;

#define STM32F302_TIM6_DACUNDER_DHR12L2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long DACC2DHR : 12;
    unsigned long Res1 : 16;
} sSTM32F302_TIM6_DACUNDER_DHR12L2;

typedef union {
    sSTM32F302_TIM6_DACUNDER_DHR12L2 Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_DHR12L2;

#define STM32F302_TIM6_DACUNDER_DHR8R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACC2DHR : 8;
    unsigned long Res0 : 24;
} sSTM32F302_TIM6_DACUNDER_DHR8R2;

typedef union {
    sSTM32F302_TIM6_DACUNDER_DHR8R2 Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_DHR8R2;

#define STM32F302_TIM6_DACUNDER_DHR12RD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACC1DHR : 12;
    unsigned long Res0 : 4;
    unsigned long DACC2DHR : 12;
    unsigned long Res1 : 4;
} sSTM32F302_TIM6_DACUNDER_DHR12RD;

typedef union {
    sSTM32F302_TIM6_DACUNDER_DHR12RD Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_DHR12RD;

#define STM32F302_TIM6_DACUNDER_DHR12LD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long DACC1DHR : 12;
    unsigned long Res1 : 4;
    unsigned long DACC2DHR : 12;
} sSTM32F302_TIM6_DACUNDER_DHR12LD;

typedef union {
    sSTM32F302_TIM6_DACUNDER_DHR12LD Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_DHR12LD;

#define STM32F302_TIM6_DACUNDER_DHR8RD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACC1DHR : 8;
    unsigned long DACC2DHR : 8;
    unsigned long Res0 : 16;
} sSTM32F302_TIM6_DACUNDER_DHR8RD;

typedef union {
    sSTM32F302_TIM6_DACUNDER_DHR8RD Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_DHR8RD;

#define STM32F302_TIM6_DACUNDER_DOR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACC1DOR : 12;
    unsigned long Res0 : 20;
} sSTM32F302_TIM6_DACUNDER_DOR1;

typedef union {
    sSTM32F302_TIM6_DACUNDER_DOR1 Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_DOR1;

#define STM32F302_TIM6_DACUNDER_DOR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACC2DOR : 12;
    unsigned long Res0 : 20;
} sSTM32F302_TIM6_DACUNDER_DOR2;

typedef union {
    sSTM32F302_TIM6_DACUNDER_DOR2 Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_DOR2;

#define STM32F302_TIM6_DACUNDER_SR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 13;
    unsigned long DMAUDR1 : 1;
    unsigned long Res1 : 15;
    unsigned long DMAUDR2 : 1;
    unsigned long Res2 : 2;
} sSTM32F302_TIM6_DACUNDER_SR;

typedef union {
    sSTM32F302_TIM6_DACUNDER_SR Bit;
    unsigned long  All;
} uSTM32F302_TIM6_DACUNDER_SR;

typedef struct {
    uSTM32F302_TIM6_DACUNDER_CR STM32F302_TIM6_DACUNDER_CR; // Offset: 0x0
    uSTM32F302_TIM6_DACUNDER_SWTRIGR STM32F302_TIM6_DACUNDER_SWTRIGR; // Offset: 0x4
    uSTM32F302_TIM6_DACUNDER_DHR12R1 STM32F302_TIM6_DACUNDER_DHR12R1; // Offset: 0x8
    uSTM32F302_TIM6_DACUNDER_DHR12L1 STM32F302_TIM6_DACUNDER_DHR12L1; // Offset: 0xc
    uSTM32F302_TIM6_DACUNDER_DHR8R1 STM32F302_TIM6_DACUNDER_DHR8R1; // Offset: 0x10
    uSTM32F302_TIM6_DACUNDER_DHR12R2 STM32F302_TIM6_DACUNDER_DHR12R2; // Offset: 0x14
    uSTM32F302_TIM6_DACUNDER_DHR12L2 STM32F302_TIM6_DACUNDER_DHR12L2; // Offset: 0x18
    uSTM32F302_TIM6_DACUNDER_DHR8R2 STM32F302_TIM6_DACUNDER_DHR8R2; // Offset: 0x1c
    uSTM32F302_TIM6_DACUNDER_DHR12RD STM32F302_TIM6_DACUNDER_DHR12RD; // Offset: 0x20
    uSTM32F302_TIM6_DACUNDER_DHR12LD STM32F302_TIM6_DACUNDER_DHR12LD; // Offset: 0x24
    uSTM32F302_TIM6_DACUNDER_DHR8RD STM32F302_TIM6_DACUNDER_DHR8RD; // Offset: 0x28
    uSTM32F302_TIM6_DACUNDER_DOR1 STM32F302_TIM6_DACUNDER_DOR1; // Offset: 0x2c
    uSTM32F302_TIM6_DACUNDER_DOR2 STM32F302_TIM6_DACUNDER_DOR2; // Offset: 0x30
    uSTM32F302_TIM6_DACUNDER_SR STM32F302_TIM6_DACUNDER_SR; // Offset: 0x34
} sSTM32F302_TIM6_DACUNDER;

