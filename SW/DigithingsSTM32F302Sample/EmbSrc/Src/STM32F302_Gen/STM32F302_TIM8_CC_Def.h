// Base Addres of TIM8_CC = 0x40013400

#define STM32F302_TIM8_CC_CR1_RESET_VALUE 0x0000
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
} sSTM32F302_TIM8_CC_CR1;

typedef union {
    sSTM32F302_TIM8_CC_CR1 Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CR1;

#define STM32F302_TIM8_CC_CR2_RESET_VALUE 0x0000
typedef struct {
    unsigned long CCPC : 1;
    unsigned long Res0 : 1;
    unsigned long CCUS : 1;
    unsigned long CCDS : 1;
    unsigned long MMS : 3;
    unsigned long TI1S : 1;
    unsigned long OIS1 : 1;
    unsigned long OIS1N : 1;
    unsigned long OIS2 : 1;
    unsigned long OIS2N : 1;
    unsigned long OIS3 : 1;
    unsigned long OIS3N : 1;
    unsigned long OIS4 : 1;
    unsigned long Res1 : 1;
    unsigned long OIS5 : 1;
    unsigned long Res2 : 1;
    unsigned long OIS6 : 1;
    unsigned long Res3 : 1;
    unsigned long MMS2 : 4;
    unsigned long Res4 : 8;
} sSTM32F302_TIM8_CC_CR2;

typedef union {
    sSTM32F302_TIM8_CC_CR2 Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CR2;

#define STM32F302_TIM8_CC_SMCR_RESET_VALUE 0x0000
typedef struct {
    unsigned long SMS : 3;
    unsigned long OCCS : 1;
    unsigned long TS : 3;
    unsigned long MSM : 1;
    unsigned long ETF : 4;
    unsigned long ETPS : 2;
    unsigned long ECE : 1;
    unsigned long ETP : 1;
    unsigned long SMS3 : 1;
    unsigned long Res0 : 15;
} sSTM32F302_TIM8_CC_SMCR;

typedef union {
    sSTM32F302_TIM8_CC_SMCR Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_SMCR;

#define STM32F302_TIM8_CC_DIER_RESET_VALUE 0x0000
typedef struct {
    unsigned long UIE : 1;
    unsigned long CC1IE : 1;
    unsigned long CC2IE : 1;
    unsigned long CC3IE : 1;
    unsigned long CC4IE : 1;
    unsigned long COMIE : 1;
    unsigned long TIE : 1;
    unsigned long BIE : 1;
    unsigned long UDE : 1;
    unsigned long CC1DE : 1;
    unsigned long CC2DE : 1;
    unsigned long CC3DE : 1;
    unsigned long CC4DE : 1;
    unsigned long COMDE : 1;
    unsigned long TDE : 1;
    unsigned long Res0 : 17;
} sSTM32F302_TIM8_CC_DIER;

typedef union {
    sSTM32F302_TIM8_CC_DIER Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_DIER;

#define STM32F302_TIM8_CC_SR_RESET_VALUE 0x0000
typedef struct {
    unsigned long UIF : 1;
    unsigned long CC1IF : 1;
    unsigned long CC2IF : 1;
    unsigned long CC3IF : 1;
    unsigned long CC4IF : 1;
    unsigned long COMIF : 1;
    unsigned long TIF : 1;
    unsigned long BIF : 1;
    unsigned long B2IF : 1;
    unsigned long CC1OF : 1;
    unsigned long CC2OF : 1;
    unsigned long CC3OF : 1;
    unsigned long CC4OF : 1;
    unsigned long Res0 : 3;
    unsigned long C5IF : 1;
    unsigned long C6IF : 1;
    unsigned long Res1 : 14;
} sSTM32F302_TIM8_CC_SR;

typedef union {
    sSTM32F302_TIM8_CC_SR Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_SR;

#define STM32F302_TIM8_CC_EGR_RESET_VALUE 0x0000
typedef struct {
    unsigned long UG : 1;
    unsigned long CC1G : 1;
    unsigned long CC2G : 1;
    unsigned long CC3G : 1;
    unsigned long CC4G : 1;
    unsigned long COMG : 1;
    unsigned long TG : 1;
    unsigned long BG : 1;
    unsigned long B2G : 1;
    unsigned long Res0 : 23;
} sSTM32F302_TIM8_CC_EGR;

typedef union {
    sSTM32F302_TIM8_CC_EGR Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_EGR;

#define STM32F302_TIM8_CC_CCMR1_Output_RESET_VALUE 0x00000000
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
} sSTM32F302_TIM8_CC_CCMR1_Output;

typedef union {
    sSTM32F302_TIM8_CC_CCMR1_Output Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCMR1_Output;

#define STM32F302_TIM8_CC_CCMR1_Input_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC1S : 2;
    unsigned long IC1PCS : 2;
    unsigned long IC1F : 4;
    unsigned long CC2S : 2;
    unsigned long IC2PCS : 2;
    unsigned long IC2F : 4;
    unsigned long Res0 : 16;
} sSTM32F302_TIM8_CC_CCMR1_Input;

typedef union {
    sSTM32F302_TIM8_CC_CCMR1_Input Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCMR1_Input;

#define STM32F302_TIM8_CC_CCMR2_Output_RESET_VALUE 0x00000000
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
    unsigned long OC4CE : 1;
    unsigned long OC3M_3 : 1;
    unsigned long Res0 : 7;
    unsigned long OC4M_3 : 1;
    unsigned long Res1 : 7;
} sSTM32F302_TIM8_CC_CCMR2_Output;

typedef union {
    sSTM32F302_TIM8_CC_CCMR2_Output Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCMR2_Output;

#define STM32F302_TIM8_CC_CCMR2_Input_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC3S : 2;
    unsigned long IC3PSC : 2;
    unsigned long IC3F : 4;
    unsigned long CC4S : 2;
    unsigned long IC4PSC : 2;
    unsigned long IC4F : 4;
    unsigned long Res0 : 16;
} sSTM32F302_TIM8_CC_CCMR2_Input;

typedef union {
    sSTM32F302_TIM8_CC_CCMR2_Input Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCMR2_Input;

#define STM32F302_TIM8_CC_CCER_RESET_VALUE 0x0000
typedef struct {
    unsigned long CC1E : 1;
    unsigned long CC1P : 1;
    unsigned long CC1NE : 1;
    unsigned long CC1NP : 1;
    unsigned long CC2E : 1;
    unsigned long CC2P : 1;
    unsigned long CC2NE : 1;
    unsigned long CC2NP : 1;
    unsigned long CC3E : 1;
    unsigned long CC3P : 1;
    unsigned long CC3NE : 1;
    unsigned long CC3NP : 1;
    unsigned long CC4E : 1;
    unsigned long CC4P : 1;
    unsigned long Res0 : 1;
    unsigned long CC4NP : 1;
    unsigned long CC5E : 1;
    unsigned long CC5P : 1;
    unsigned long Res1 : 2;
    unsigned long CC6E : 1;
    unsigned long CC6P : 1;
    unsigned long Res2 : 10;
} sSTM32F302_TIM8_CC_CCER;

typedef union {
    sSTM32F302_TIM8_CC_CCER Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCER;

#define STM32F302_TIM8_CC_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 16;
    unsigned long Res0 : 15;
    unsigned long UIFCPY : 1;
} sSTM32F302_TIM8_CC_CNT;

typedef union {
    sSTM32F302_TIM8_CC_CNT Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CNT;

#define STM32F302_TIM8_CC_PSC_RESET_VALUE 0x0000
typedef struct {
    unsigned long PSC : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM8_CC_PSC;

typedef union {
    sSTM32F302_TIM8_CC_PSC Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_PSC;

#define STM32F302_TIM8_CC_ARR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ARR : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM8_CC_ARR;

typedef union {
    sSTM32F302_TIM8_CC_ARR Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_ARR;

#define STM32F302_TIM8_CC_RCR_RESET_VALUE 0x0000
typedef struct {
    unsigned long REP : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM8_CC_RCR;

typedef union {
    sSTM32F302_TIM8_CC_RCR Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_RCR;

#define STM32F302_TIM8_CC_CCR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR1 : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM8_CC_CCR1;

typedef union {
    sSTM32F302_TIM8_CC_CCR1 Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCR1;

#define STM32F302_TIM8_CC_CCR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR2 : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM8_CC_CCR2;

typedef union {
    sSTM32F302_TIM8_CC_CCR2 Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCR2;

#define STM32F302_TIM8_CC_CCR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR3 : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM8_CC_CCR3;

typedef union {
    sSTM32F302_TIM8_CC_CCR3 Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCR3;

#define STM32F302_TIM8_CC_CCR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR4 : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM8_CC_CCR4;

typedef union {
    sSTM32F302_TIM8_CC_CCR4 Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCR4;

#define STM32F302_TIM8_CC_BDTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DTG : 8;
    unsigned long LOCK : 2;
    unsigned long OSSI : 1;
    unsigned long OSSR : 1;
    unsigned long BKE : 1;
    unsigned long BKP : 1;
    unsigned long AOE : 1;
    unsigned long MOE : 1;
    unsigned long BKF : 4;
    unsigned long BK2F : 4;
    unsigned long BK2E : 1;
    unsigned long BK2P : 1;
    unsigned long Res0 : 6;
} sSTM32F302_TIM8_CC_BDTR;

typedef union {
    sSTM32F302_TIM8_CC_BDTR Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_BDTR;

#define STM32F302_TIM8_CC_DCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DBA : 5;
    unsigned long Res0 : 3;
    unsigned long DBL : 5;
    unsigned long Res1 : 19;
} sSTM32F302_TIM8_CC_DCR;

typedef union {
    sSTM32F302_TIM8_CC_DCR Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_DCR;

#define STM32F302_TIM8_CC_DMAR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DMAB : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM8_CC_DMAR;

typedef union {
    sSTM32F302_TIM8_CC_DMAR Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_DMAR;

#define STM32F302_TIM8_CC_CCMR3_Output_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long OC5FE : 1;
    unsigned long OC5PE : 1;
    unsigned long OC5M : 3;
    unsigned long OC5CE : 1;
    unsigned long Res1 : 2;
    unsigned long OC6FE : 1;
    unsigned long OC6PE : 1;
    unsigned long OC6M : 3;
    unsigned long OC6CE : 1;
    unsigned long OC5M_3 : 1;
    unsigned long Res2 : 7;
    unsigned long OC6M_3 : 1;
    unsigned long Res3 : 7;
} sSTM32F302_TIM8_CC_CCMR3_Output;

typedef union {
    sSTM32F302_TIM8_CC_CCMR3_Output Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCMR3_Output;

#define STM32F302_TIM8_CC_CCR5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR5 : 16;
    unsigned long Res0 : 13;
    unsigned long GC5C1 : 1;
    unsigned long GC5C2 : 1;
    unsigned long GC5C3 : 1;
} sSTM32F302_TIM8_CC_CCR5;

typedef union {
    sSTM32F302_TIM8_CC_CCR5 Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCR5;

#define STM32F302_TIM8_CC_CCR6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR6 : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM8_CC_CCR6;

typedef union {
    sSTM32F302_TIM8_CC_CCR6 Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_CCR6;

#define STM32F302_TIM8_CC_OR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TIM8_ETR_ADC2_RMP : 2;
    unsigned long TIM8_ETR_ADC3_RMP : 2;
    unsigned long Res0 : 28;
} sSTM32F302_TIM8_CC_OR;

typedef union {
    sSTM32F302_TIM8_CC_OR Bit;
    unsigned long  All;
} uSTM32F302_TIM8_CC_OR;

typedef struct {
    uSTM32F302_TIM8_CC_CR1 STM32F302_TIM8_CC_CR1; // Offset: 0x0
    uSTM32F302_TIM8_CC_CR2 STM32F302_TIM8_CC_CR2; // Offset: 0x4
    uSTM32F302_TIM8_CC_SMCR STM32F302_TIM8_CC_SMCR; // Offset: 0x8
    uSTM32F302_TIM8_CC_DIER STM32F302_TIM8_CC_DIER; // Offset: 0xc
    uSTM32F302_TIM8_CC_SR STM32F302_TIM8_CC_SR; // Offset: 0x10
    uSTM32F302_TIM8_CC_EGR STM32F302_TIM8_CC_EGR; // Offset: 0x14
    uSTM32F302_TIM8_CC_CCMR1_Output STM32F302_TIM8_CC_CCMR1_Output; // Offset: 0x18
    uSTM32F302_TIM8_CC_CCMR1_Input STM32F302_TIM8_CC_CCMR1_Input; // Offset: 0x18
    uSTM32F302_TIM8_CC_CCMR2_Output STM32F302_TIM8_CC_CCMR2_Output; // Offset: 0x1c
    uSTM32F302_TIM8_CC_CCMR2_Input STM32F302_TIM8_CC_CCMR2_Input; // Offset: 0x1c
    uSTM32F302_TIM8_CC_CCER STM32F302_TIM8_CC_CCER; // Offset: 0x20
    uSTM32F302_TIM8_CC_CNT STM32F302_TIM8_CC_CNT; // Offset: 0x24
    uSTM32F302_TIM8_CC_PSC STM32F302_TIM8_CC_PSC; // Offset: 0x28
    uSTM32F302_TIM8_CC_ARR STM32F302_TIM8_CC_ARR; // Offset: 0x2c
    uSTM32F302_TIM8_CC_RCR STM32F302_TIM8_CC_RCR; // Offset: 0x30
    uSTM32F302_TIM8_CC_CCR1 STM32F302_TIM8_CC_CCR1; // Offset: 0x34
    uSTM32F302_TIM8_CC_CCR2 STM32F302_TIM8_CC_CCR2; // Offset: 0x38
    uSTM32F302_TIM8_CC_CCR3 STM32F302_TIM8_CC_CCR3; // Offset: 0x3c
    uSTM32F302_TIM8_CC_CCR4 STM32F302_TIM8_CC_CCR4; // Offset: 0x40
    uSTM32F302_TIM8_CC_BDTR STM32F302_TIM8_CC_BDTR; // Offset: 0x44
    uSTM32F302_TIM8_CC_DCR STM32F302_TIM8_CC_DCR; // Offset: 0x48
    uSTM32F302_TIM8_CC_DMAR STM32F302_TIM8_CC_DMAR; // Offset: 0x4c
    unsigned long Reserved0;
    uSTM32F302_TIM8_CC_CCMR3_Output STM32F302_TIM8_CC_CCMR3_Output; // Offset: 0x54
    uSTM32F302_TIM8_CC_CCR5 STM32F302_TIM8_CC_CCR5; // Offset: 0x58
    uSTM32F302_TIM8_CC_CCR6 STM32F302_TIM8_CC_CCR6; // Offset: 0x5c
    uSTM32F302_TIM8_CC_OR STM32F302_TIM8_CC_OR; // Offset: 0x60
} sSTM32F302_TIM8_CC;

