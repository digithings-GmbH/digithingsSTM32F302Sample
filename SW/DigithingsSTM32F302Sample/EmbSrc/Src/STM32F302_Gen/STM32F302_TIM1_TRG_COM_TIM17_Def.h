// Base Addres of TIM1_TRG_COM_TIM17 = 0x40014800

#define STM32F302_TIM1_TRG_COM_TIM17_CR1_RESET_VALUE 0x0000
typedef struct {
    unsigned long CEN : 1;
    unsigned long UDIS : 1;
    unsigned long URS : 1;
    unsigned long OPM : 1;
    unsigned long Res0 : 3;
    unsigned long ARPE : 1;
    unsigned long CKD : 2;
    unsigned long Res1 : 1;
    unsigned long UIFREMAP : 1;
    unsigned long Res2 : 20;
} sSTM32F302_TIM1_TRG_COM_TIM17_CR1;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_CR1 Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_CR1;

#define STM32F302_TIM1_TRG_COM_TIM17_CR2_RESET_VALUE 0x0000
typedef struct {
    unsigned long CCPC : 1;
    unsigned long Res0 : 1;
    unsigned long CCUS : 1;
    unsigned long CCDS : 1;
    unsigned long Res1 : 4;
    unsigned long OIS1 : 1;
    unsigned long OIS1N : 1;
    unsigned long Res2 : 22;
} sSTM32F302_TIM1_TRG_COM_TIM17_CR2;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_CR2 Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_CR2;

#define STM32F302_TIM1_TRG_COM_TIM17_DIER_RESET_VALUE 0x0000
typedef struct {
    unsigned long UIE : 1;
    unsigned long CC1IE : 1;
    unsigned long Res0 : 3;
    unsigned long COMIE : 1;
    unsigned long TIE : 1;
    unsigned long BIE : 1;
    unsigned long UDE : 1;
    unsigned long CC1DE : 1;
    unsigned long Res1 : 3;
    unsigned long COMDE : 1;
    unsigned long TDE : 1;
    unsigned long Res2 : 17;
} sSTM32F302_TIM1_TRG_COM_TIM17_DIER;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_DIER Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_DIER;

#define STM32F302_TIM1_TRG_COM_TIM17_SR_RESET_VALUE 0x0000
typedef struct {
    unsigned long UIF : 1;
    unsigned long CC1IF : 1;
    unsigned long Res0 : 3;
    unsigned long COMIF : 1;
    unsigned long TIF : 1;
    unsigned long BIF : 1;
    unsigned long Res1 : 1;
    unsigned long CC1OF : 1;
    unsigned long Res2 : 22;
} sSTM32F302_TIM1_TRG_COM_TIM17_SR;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_SR Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_SR;

#define STM32F302_TIM1_TRG_COM_TIM17_EGR_RESET_VALUE 0x0000
typedef struct {
    unsigned long UG : 1;
    unsigned long CC1G : 1;
    unsigned long Res0 : 3;
    unsigned long COMG : 1;
    unsigned long TG : 1;
    unsigned long BG : 1;
    unsigned long Res1 : 24;
} sSTM32F302_TIM1_TRG_COM_TIM17_EGR;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_EGR Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_EGR;

#define STM32F302_TIM1_TRG_COM_TIM17_CCMR1_Output_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC1S : 2;
    unsigned long OC1FE : 1;
    unsigned long OC1PE : 1;
    unsigned long OC1M : 3;
    unsigned long Res0 : 9;
    unsigned long OC1M_3 : 1;
    unsigned long Res1 : 15;
} sSTM32F302_TIM1_TRG_COM_TIM17_CCMR1_Output;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_CCMR1_Output Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_CCMR1_Output;

#define STM32F302_TIM1_TRG_COM_TIM17_CCMR1_Input_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC1S : 2;
    unsigned long IC1PSC : 2;
    unsigned long IC1F : 4;
    unsigned long Res0 : 24;
} sSTM32F302_TIM1_TRG_COM_TIM17_CCMR1_Input;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_CCMR1_Input Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_CCMR1_Input;

#define STM32F302_TIM1_TRG_COM_TIM17_CCER_RESET_VALUE 0x0000
typedef struct {
    unsigned long CC1E : 1;
    unsigned long CC1P : 1;
    unsigned long CC1NE : 1;
    unsigned long CC1NP : 1;
    unsigned long Res0 : 28;
} sSTM32F302_TIM1_TRG_COM_TIM17_CCER;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_CCER Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_CCER;

#define STM32F302_TIM1_TRG_COM_TIM17_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 16;
    unsigned long Res0 : 15;
    unsigned long UIFCPY : 1;
} sSTM32F302_TIM1_TRG_COM_TIM17_CNT;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_CNT Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_CNT;

#define STM32F302_TIM1_TRG_COM_TIM17_PSC_RESET_VALUE 0x0000
typedef struct {
    unsigned long PSC : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM1_TRG_COM_TIM17_PSC;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_PSC Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_PSC;

#define STM32F302_TIM1_TRG_COM_TIM17_ARR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ARR : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM1_TRG_COM_TIM17_ARR;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_ARR Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_ARR;

#define STM32F302_TIM1_TRG_COM_TIM17_RCR_RESET_VALUE 0x0000
typedef struct {
    unsigned long REP : 8;
    unsigned long Res0 : 24;
} sSTM32F302_TIM1_TRG_COM_TIM17_RCR;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_RCR Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_RCR;

#define STM32F302_TIM1_TRG_COM_TIM17_CCR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR1 : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM1_TRG_COM_TIM17_CCR1;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_CCR1 Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_CCR1;

#define STM32F302_TIM1_TRG_COM_TIM17_BDTR_RESET_VALUE 0x0000
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
    unsigned long Res0 : 12;
} sSTM32F302_TIM1_TRG_COM_TIM17_BDTR;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_BDTR Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_BDTR;

#define STM32F302_TIM1_TRG_COM_TIM17_DCR_RESET_VALUE 0x0000
typedef struct {
    unsigned long DBA : 5;
    unsigned long Res0 : 3;
    unsigned long DBL : 5;
    unsigned long Res1 : 19;
} sSTM32F302_TIM1_TRG_COM_TIM17_DCR;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_DCR Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_DCR;

#define STM32F302_TIM1_TRG_COM_TIM17_DMAR_RESET_VALUE 0x0000
typedef struct {
    unsigned long DMAB : 16;
    unsigned long Res0 : 16;
} sSTM32F302_TIM1_TRG_COM_TIM17_DMAR;

typedef union {
    sSTM32F302_TIM1_TRG_COM_TIM17_DMAR Bit;
    unsigned long  All;
} uSTM32F302_TIM1_TRG_COM_TIM17_DMAR;

typedef struct {
    uSTM32F302_TIM1_TRG_COM_TIM17_CR1 STM32F302_TIM1_TRG_COM_TIM17_CR1; // Offset: 0x0
    uSTM32F302_TIM1_TRG_COM_TIM17_CR2 STM32F302_TIM1_TRG_COM_TIM17_CR2; // Offset: 0x4
    unsigned long Reserved0;
    uSTM32F302_TIM1_TRG_COM_TIM17_DIER STM32F302_TIM1_TRG_COM_TIM17_DIER; // Offset: 0xc
    uSTM32F302_TIM1_TRG_COM_TIM17_SR STM32F302_TIM1_TRG_COM_TIM17_SR; // Offset: 0x10
    uSTM32F302_TIM1_TRG_COM_TIM17_EGR STM32F302_TIM1_TRG_COM_TIM17_EGR; // Offset: 0x14
    uSTM32F302_TIM1_TRG_COM_TIM17_CCMR1_Output STM32F302_TIM1_TRG_COM_TIM17_CCMR1_Output; // Offset: 0x18
    uSTM32F302_TIM1_TRG_COM_TIM17_CCMR1_Input STM32F302_TIM1_TRG_COM_TIM17_CCMR1_Input; // Offset: 0x18
    unsigned long Reserved1;
    uSTM32F302_TIM1_TRG_COM_TIM17_CCER STM32F302_TIM1_TRG_COM_TIM17_CCER; // Offset: 0x20
    uSTM32F302_TIM1_TRG_COM_TIM17_CNT STM32F302_TIM1_TRG_COM_TIM17_CNT; // Offset: 0x24
    uSTM32F302_TIM1_TRG_COM_TIM17_PSC STM32F302_TIM1_TRG_COM_TIM17_PSC; // Offset: 0x28
    uSTM32F302_TIM1_TRG_COM_TIM17_ARR STM32F302_TIM1_TRG_COM_TIM17_ARR; // Offset: 0x2c
    uSTM32F302_TIM1_TRG_COM_TIM17_RCR STM32F302_TIM1_TRG_COM_TIM17_RCR; // Offset: 0x30
    uSTM32F302_TIM1_TRG_COM_TIM17_CCR1 STM32F302_TIM1_TRG_COM_TIM17_CCR1; // Offset: 0x34
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    uSTM32F302_TIM1_TRG_COM_TIM17_BDTR STM32F302_TIM1_TRG_COM_TIM17_BDTR; // Offset: 0x44
    uSTM32F302_TIM1_TRG_COM_TIM17_DCR STM32F302_TIM1_TRG_COM_TIM17_DCR; // Offset: 0x48
    uSTM32F302_TIM1_TRG_COM_TIM17_DMAR STM32F302_TIM1_TRG_COM_TIM17_DMAR; // Offset: 0x4c
} sSTM32F302_TIM1_TRG_COM_TIM17;

