// Base Addres of TIM4 = 0x40000800

#define STM32F302_TIM4_CR1_RESET_VALUE 0x0000
typedef struct {
    unsigned long CEN : 1;
    unsigned long UDIS : 1;
    unsigned long URS : 1;
    unsigned long OPM : 1;
    unsigned long DIR : 1;
    unsigned long CMS : 2;
    unsigned long ARPE : 1;
    unsigned long CKD : 2;
    unsigned long Res0 : 1;
    unsigned long UIFREMAP : 1;
    unsigned long Res1 : 20;
} sSTM32F302_TIM4_CR1;

typedef union {
    sSTM32F302_TIM4_CR1 Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CR1;

#define STM32F302_TIM4_CR2_RESET_VALUE 0x0000
typedef struct {
    unsigned long Res0 : 3;
    unsigned long CCDS : 1;
    unsigned long MMS : 3;
    unsigned long TI1S : 1;
    unsigned long Res1 : 24;
} sSTM32F302_TIM4_CR2;

typedef union {
    sSTM32F302_TIM4_CR2 Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CR2;

#define STM32F302_TIM4_SMCR_RESET_VALUE 0x0000
typedef struct {
    unsigned long SMS : 3;
    unsigned long OCCS : 1;
    unsigned long TS : 3;
    unsigned long MSM : 1;
    unsigned long ETF : 4;
    unsigned long ETPS : 2;
    unsigned long ECE : 1;
    unsigned long ETP : 1;
    unsigned long SMS_3 : 1;
    unsigned long Res0 : 15;
} sSTM32F302_TIM4_SMCR;

typedef union {
    sSTM32F302_TIM4_SMCR Bit;
    unsigned long  All;
} uSTM32F302_TIM4_SMCR;

#define STM32F302_TIM4_DIER_RESET_VALUE 0x0000
typedef struct {
    unsigned long UIE : 1;
    unsigned long CC1IE : 1;
    unsigned long CC2IE : 1;
    unsigned long CC3IE : 1;
    unsigned long CC4IE : 1;
    unsigned long Res0 : 1;
    unsigned long TIE : 1;
    unsigned long Res1 : 1;
    unsigned long UDE : 1;
    unsigned long CC1DE : 1;
    unsigned long CC2DE : 1;
    unsigned long CC3DE : 1;
    unsigned long CC4DE : 1;
    unsigned long Res2 : 1;
    unsigned long TDE : 1;
    unsigned long Res3 : 17;
} sSTM32F302_TIM4_DIER;

typedef union {
    sSTM32F302_TIM4_DIER Bit;
    unsigned long  All;
} uSTM32F302_TIM4_DIER;

#define STM32F302_TIM4_SR_RESET_VALUE 0x0000
typedef struct {
    unsigned long UIF : 1;
    unsigned long CC1IF : 1;
    unsigned long CC2IF : 1;
    unsigned long CC3IF : 1;
    unsigned long CC4IF : 1;
    unsigned long Res0 : 1;
    unsigned long TIF : 1;
    unsigned long Res1 : 2;
    unsigned long CC1OF : 1;
    unsigned long CC2OF : 1;
    unsigned long CC3OF : 1;
    unsigned long CC4OF : 1;
    unsigned long Res2 : 19;
} sSTM32F302_TIM4_SR;

typedef union {
    sSTM32F302_TIM4_SR Bit;
    unsigned long  All;
} uSTM32F302_TIM4_SR;

#define STM32F302_TIM4_EGR_RESET_VALUE 0x0000
typedef struct {
    unsigned long UG : 1;
    unsigned long CC1G : 1;
    unsigned long CC2G : 1;
    unsigned long CC3G : 1;
    unsigned long CC4G : 1;
    unsigned long Res0 : 1;
    unsigned long TG : 1;
    unsigned long Res1 : 25;
} sSTM32F302_TIM4_EGR;

typedef union {
    sSTM32F302_TIM4_EGR Bit;
    unsigned long  All;
} uSTM32F302_TIM4_EGR;

#define STM32F302_TIM4_CCMR1_Output_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC1S : 2;
    unsigned long OC1FE : 1;
    unsigned long OC1PE : 1;
    unsigned long OC1M : 3;
    unsigned long OC1CE : 1;
    unsigned long CC2S : 2;
    unsigned long OC2FE : 1;
    unsigned long OC2PE : 1;
    unsigned long OC2M : 3;
    unsigned long OC2CE : 1;
    unsigned long OC1M_3 : 1;
    unsigned long Res0 : 7;
    unsigned long OC2M_3 : 1;
    unsigned long Res1 : 7;
} sSTM32F302_TIM4_CCMR1_Output;

typedef union {
    sSTM32F302_TIM4_CCMR1_Output Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CCMR1_Output;

#define STM32F302_TIM4_CCMR1_Input_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC1S : 2;
    unsigned long IC1PSC : 2;
    unsigned long IC1F : 4;
    unsigned long CC2S : 2;
    unsigned long IC2PSC : 2;
    unsigned long IC2F : 4;
    unsigned long Res0 : 16;
} sSTM32F302_TIM4_CCMR1_Input;

typedef union {
    sSTM32F302_TIM4_CCMR1_Input Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CCMR1_Input;

#define STM32F302_TIM4_CCMR2_Output_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC3S : 2;
    unsigned long OC3FE : 1;
    unsigned long OC3PE : 1;
    unsigned long OC3M : 3;
    unsigned long OC3CE : 1;
    unsigned long CC4S : 2;
    unsigned long OC4FE : 1;
    unsigned long OC4PE : 1;
    unsigned long OC4M : 3;
    unsigned long O24CE : 1;
    unsigned long OC3M_3 : 1;
    unsigned long Res0 : 7;
    unsigned long OC4M_3 : 1;
    unsigned long Res1 : 7;
} sSTM32F302_TIM4_CCMR2_Output;

typedef union {
    sSTM32F302_TIM4_CCMR2_Output Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CCMR2_Output;

#define STM32F302_TIM4_CCMR2_Input_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC3S : 2;
    unsigned long IC3PSC : 2;
    unsigned long IC3F : 4;
    unsigned long CC4S : 2;
    unsigned long IC4PSC : 2;
    unsigned long IC4F : 4;
    unsigned long Res0 : 16;
} sSTM32F302_TIM4_CCMR2_Input;

typedef union {
    sSTM32F302_TIM4_CCMR2_Input Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CCMR2_Input;

#define STM32F302_TIM4_CCER_RESET_VALUE 0x0000
typedef struct {
    unsigned long CC1E : 1;
    unsigned long CC1P : 1;
    unsigned long Res0 : 1;
    unsigned long CC1NP : 1;
    unsigned long CC2E : 1;
    unsigned long CC2P : 1;
    unsigned long Res1 : 1;
    unsigned long CC2NP : 1;
    unsigned long CC3E : 1;
    unsigned long CC3P : 1;
    unsigned long Res2 : 1;
    unsigned long CC3NP : 1;
    unsigned long CC4E : 1;
    unsigned long CC4P : 1;
    unsigned long Res3 : 1;
    unsigned long CC4NP : 1;
    unsigned long Res4 : 16;
} sSTM32F302_TIM4_CCER;

typedef union {
    sSTM32F302_TIM4_CCER Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CCER;

#define STM32F302_TIM4_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTL : 16;
    unsigned long CNTH : 15;
    unsigned long CNT_or_UIFCPY : 1;
} sSTM32F302_TIM4_CNT;

typedef union {
    sSTM32F302_TIM4_CNT Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CNT;

#define STM32F302_TIM4_PSC_RESET_VALUE 0x0000
typedef struct {
    unsigned long PSC : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM4_PSC;

typedef union {
    sSTM32F302_TIM4_PSC Bit;
    unsigned long  All;
} uSTM32F302_TIM4_PSC;

#define STM32F302_TIM4_ARR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ARRL : 16;
    unsigned long ARRH : 16;
} sSTM32F302_TIM4_ARR;

typedef union {
    sSTM32F302_TIM4_ARR Bit;
    unsigned long  All;
} uSTM32F302_TIM4_ARR;

#define STM32F302_TIM4_CCR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR1L : 16;
    unsigned long CCR1H : 16;
} sSTM32F302_TIM4_CCR1;

typedef union {
    sSTM32F302_TIM4_CCR1 Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CCR1;

#define STM32F302_TIM4_CCR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR2L : 16;
    unsigned long CCR2H : 16;
} sSTM32F302_TIM4_CCR2;

typedef union {
    sSTM32F302_TIM4_CCR2 Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CCR2;

#define STM32F302_TIM4_CCR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR3L : 16;
    unsigned long CCR3H : 16;
} sSTM32F302_TIM4_CCR3;

typedef union {
    sSTM32F302_TIM4_CCR3 Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CCR3;

#define STM32F302_TIM4_CCR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR4L : 16;
    unsigned long CCR4H : 16;
} sSTM32F302_TIM4_CCR4;

typedef union {
    sSTM32F302_TIM4_CCR4 Bit;
    unsigned long  All;
} uSTM32F302_TIM4_CCR4;

#define STM32F302_TIM4_DCR_RESET_VALUE 0x0000
typedef struct {
    unsigned long DBA : 5;
    unsigned long Res0 : 3;
    unsigned long DBL : 5;
    unsigned long Res1 : 19;
} sSTM32F302_TIM4_DCR;

typedef union {
    sSTM32F302_TIM4_DCR Bit;
    unsigned long  All;
} uSTM32F302_TIM4_DCR;

#define STM32F302_TIM4_DMAR_RESET_VALUE 0x0000
typedef struct {
    unsigned long DMAB : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM4_DMAR;

typedef union {
    sSTM32F302_TIM4_DMAR Bit;
    unsigned long  All;
} uSTM32F302_TIM4_DMAR;

typedef struct {
    uSTM32F302_TIM4_CR1 STM32F302_TIM4_CR1; // Offset: 0x0
    uSTM32F302_TIM4_CR2 STM32F302_TIM4_CR2; // Offset: 0x4
    uSTM32F302_TIM4_SMCR STM32F302_TIM4_SMCR; // Offset: 0x8
    uSTM32F302_TIM4_DIER STM32F302_TIM4_DIER; // Offset: 0xc
    uSTM32F302_TIM4_SR STM32F302_TIM4_SR; // Offset: 0x10
    uSTM32F302_TIM4_EGR STM32F302_TIM4_EGR; // Offset: 0x14
    uSTM32F302_TIM4_CCMR1_Output STM32F302_TIM4_CCMR1_Output; // Offset: 0x18
    uSTM32F302_TIM4_CCMR1_Input STM32F302_TIM4_CCMR1_Input; // Offset: 0x18
    uSTM32F302_TIM4_CCMR2_Output STM32F302_TIM4_CCMR2_Output; // Offset: 0x1c
    uSTM32F302_TIM4_CCMR2_Input STM32F302_TIM4_CCMR2_Input; // Offset: 0x1c
    uSTM32F302_TIM4_CCER STM32F302_TIM4_CCER; // Offset: 0x20
    uSTM32F302_TIM4_CNT STM32F302_TIM4_CNT; // Offset: 0x24
    uSTM32F302_TIM4_PSC STM32F302_TIM4_PSC; // Offset: 0x28
    uSTM32F302_TIM4_ARR STM32F302_TIM4_ARR; // Offset: 0x2c
    unsigned long Reserved0;
    uSTM32F302_TIM4_CCR1 STM32F302_TIM4_CCR1; // Offset: 0x34
    uSTM32F302_TIM4_CCR2 STM32F302_TIM4_CCR2; // Offset: 0x38
    uSTM32F302_TIM4_CCR3 STM32F302_TIM4_CCR3; // Offset: 0x3c
    uSTM32F302_TIM4_CCR4 STM32F302_TIM4_CCR4; // Offset: 0x40
    unsigned long Reserved1;
    uSTM32F302_TIM4_DCR STM32F302_TIM4_DCR; // Offset: 0x48
    uSTM32F302_TIM4_DMAR STM32F302_TIM4_DMAR; // Offset: 0x4c
} sSTM32F302_TIM4;

