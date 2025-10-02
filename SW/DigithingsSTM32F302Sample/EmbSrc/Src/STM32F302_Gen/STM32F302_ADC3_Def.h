// Base Addres of ADC3 = 0x50000400

#define STM32F302_ADC3_ISR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ADRDY : 1;
    unsigned long EOSMP : 1;
    unsigned long EOC : 1;
    unsigned long EOS : 1;
    unsigned long OVR : 1;
    unsigned long JEOC : 1;
    unsigned long JEOS : 1;
    unsigned long AWD1 : 1;
    unsigned long AWD2 : 1;
    unsigned long AWD3 : 1;
    unsigned long JQOVF : 1;
    unsigned long Res0 : 21;
} sSTM32F302_ADC3_ISR;

typedef union {
    sSTM32F302_ADC3_ISR Bit;
    unsigned long  All;
} uSTM32F302_ADC3_ISR;

#define STM32F302_ADC3_IER_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ADRDYIE : 1;
    unsigned long EOSMPIE : 1;
    unsigned long EOCIE : 1;
    unsigned long EOSIE : 1;
    unsigned long OVRIE : 1;
    unsigned long JEOCIE : 1;
    unsigned long JEOSIE : 1;
    unsigned long AWD1IE : 1;
    unsigned long AWD2IE : 1;
    unsigned long AWD3IE : 1;
    unsigned long JQOVFIE : 1;
    unsigned long Res0 : 21;
} sSTM32F302_ADC3_IER;

typedef union {
    sSTM32F302_ADC3_IER Bit;
    unsigned long  All;
} uSTM32F302_ADC3_IER;

#define STM32F302_ADC3_CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ADEN : 1;
    unsigned long ADDIS : 1;
    unsigned long ADSTART : 1;
    unsigned long JADSTART : 1;
    unsigned long ADSTP : 1;
    unsigned long JADSTP : 1;
    unsigned long Res0 : 22;
    unsigned long ADVREGEN : 1;
    unsigned long DEEPPWD : 1;
    unsigned long ADCALDIF : 1;
    unsigned long ADCAL : 1;
} sSTM32F302_ADC3_CR;

typedef union {
    sSTM32F302_ADC3_CR Bit;
    unsigned long  All;
} uSTM32F302_ADC3_CR;

#define STM32F302_ADC3_CFGR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DMAEN : 1;
    unsigned long DMACFG : 1;
    unsigned long Res0 : 1;
    unsigned long RES : 2;
    unsigned long ALIGN : 1;
    unsigned long EXTSEL : 4;
    unsigned long EXTEN : 2;
    unsigned long OVRMOD : 1;
    unsigned long CONT : 1;
    unsigned long AUTDLY : 1;
    unsigned long AUTOFF : 1;
    unsigned long DISCEN : 1;
    unsigned long DISCNUM : 3;
    unsigned long JDISCEN : 1;
    unsigned long JQM : 1;
    unsigned long AWD1SGL : 1;
    unsigned long AWD1EN : 1;
    unsigned long JAWD1EN : 1;
    unsigned long JAUTO : 1;
    unsigned long AWDCH1CH : 5;
    unsigned long Res1 : 1;
} sSTM32F302_ADC3_CFGR;

typedef union {
    sSTM32F302_ADC3_CFGR Bit;
    unsigned long  All;
} uSTM32F302_ADC3_CFGR;

#define STM32F302_ADC3_SMPR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 3;
    unsigned long SMP1 : 3;
    unsigned long SMP2 : 3;
    unsigned long SMP3 : 3;
    unsigned long SMP4 : 3;
    unsigned long SMP5 : 3;
    unsigned long SMP6 : 3;
    unsigned long SMP7 : 3;
    unsigned long SMP8 : 3;
    unsigned long SMP9 : 3;
    unsigned long Res1 : 2;
} sSTM32F302_ADC3_SMPR1;

typedef union {
    sSTM32F302_ADC3_SMPR1 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_SMPR1;

#define STM32F302_ADC3_SMPR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SMP10 : 3;
    unsigned long SMP11 : 3;
    unsigned long SMP12 : 3;
    unsigned long SMP13 : 3;
    unsigned long SMP14 : 3;
    unsigned long SMP15 : 3;
    unsigned long SMP16 : 3;
    unsigned long SMP17 : 3;
    unsigned long SMP18 : 3;
    unsigned long Res0 : 5;
} sSTM32F302_ADC3_SMPR2;

typedef union {
    sSTM32F302_ADC3_SMPR2 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_SMPR2;

#define STM32F302_ADC3_TR1_RESET_VALUE 0x0FFF0000
typedef struct {
    unsigned long LT1 : 12;
    unsigned long Res0 : 4;
    unsigned long HT1 : 12;
    unsigned long Res1 : 4;
} sSTM32F302_ADC3_TR1;

typedef union {
    sSTM32F302_ADC3_TR1 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_TR1;

#define STM32F302_ADC3_TR2_RESET_VALUE 0x0FFF0000
typedef struct {
    unsigned long LT2 : 8;
    unsigned long Res0 : 8;
    unsigned long HT2 : 8;
    unsigned long Res1 : 8;
} sSTM32F302_ADC3_TR2;

typedef union {
    sSTM32F302_ADC3_TR2 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_TR2;

#define STM32F302_ADC3_TR3_RESET_VALUE 0x0FFF0000
typedef struct {
    unsigned long LT3 : 8;
    unsigned long Res0 : 8;
    unsigned long HT3 : 8;
    unsigned long Res1 : 8;
} sSTM32F302_ADC3_TR3;

typedef union {
    sSTM32F302_ADC3_TR3 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_TR3;

#define STM32F302_ADC3_SQR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long L3 : 4;
    unsigned long Res0 : 2;
    unsigned long SQ1 : 5;
    unsigned long Res1 : 1;
    unsigned long SQ2 : 5;
    unsigned long Res2 : 1;
    unsigned long SQ3 : 5;
    unsigned long Res3 : 1;
    unsigned long SQ4 : 5;
    unsigned long Res4 : 3;
} sSTM32F302_ADC3_SQR1;

typedef union {
    sSTM32F302_ADC3_SQR1 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_SQR1;

#define STM32F302_ADC3_SQR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SQ5 : 5;
    unsigned long Res0 : 1;
    unsigned long SQ6 : 5;
    unsigned long Res1 : 1;
    unsigned long SQ7 : 5;
    unsigned long Res2 : 1;
    unsigned long SQ8 : 5;
    unsigned long Res3 : 1;
    unsigned long SQ9 : 5;
    unsigned long Res4 : 3;
} sSTM32F302_ADC3_SQR2;

typedef union {
    sSTM32F302_ADC3_SQR2 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_SQR2;

#define STM32F302_ADC3_SQR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SQ10 : 5;
    unsigned long Res0 : 1;
    unsigned long SQ11 : 5;
    unsigned long Res1 : 1;
    unsigned long SQ12 : 5;
    unsigned long Res2 : 1;
    unsigned long SQ13 : 5;
    unsigned long Res3 : 1;
    unsigned long SQ14 : 5;
    unsigned long Res4 : 3;
} sSTM32F302_ADC3_SQR3;

typedef union {
    sSTM32F302_ADC3_SQR3 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_SQR3;

#define STM32F302_ADC3_SQR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SQ15 : 5;
    unsigned long Res0 : 1;
    unsigned long SQ16 : 5;
    unsigned long Res1 : 21;
} sSTM32F302_ADC3_SQR4;

typedef union {
    sSTM32F302_ADC3_SQR4 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_SQR4;

#define STM32F302_ADC3_DR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long regularDATA : 16;
    unsigned long Res0 : 16;
} sSTM32F302_ADC3_DR;

typedef union {
    sSTM32F302_ADC3_DR Bit;
    unsigned long  All;
} uSTM32F302_ADC3_DR;

#define STM32F302_ADC3_JSQR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long JL : 2;
    unsigned long JEXTSEL : 4;
    unsigned long JEXTEN : 2;
    unsigned long JSQ1 : 5;
    unsigned long Res0 : 1;
    unsigned long JSQ2 : 5;
    unsigned long Res1 : 1;
    unsigned long JSQ3 : 5;
    unsigned long Res2 : 1;
    unsigned long JSQ4 : 5;
    unsigned long Res3 : 1;
} sSTM32F302_ADC3_JSQR;

typedef union {
    sSTM32F302_ADC3_JSQR Bit;
    unsigned long  All;
} uSTM32F302_ADC3_JSQR;

#define STM32F302_ADC3_OFR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OFFSET1 : 12;
    unsigned long Res0 : 14;
    unsigned long OFFSET1_CH : 5;
    unsigned long OFFSET1_EN : 1;
} sSTM32F302_ADC3_OFR1;

typedef union {
    sSTM32F302_ADC3_OFR1 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_OFR1;

#define STM32F302_ADC3_OFR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OFFSET2 : 12;
    unsigned long Res0 : 14;
    unsigned long OFFSET2_CH : 5;
    unsigned long OFFSET2_EN : 1;
} sSTM32F302_ADC3_OFR2;

typedef union {
    sSTM32F302_ADC3_OFR2 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_OFR2;

#define STM32F302_ADC3_OFR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OFFSET3 : 12;
    unsigned long Res0 : 14;
    unsigned long OFFSET3_CH : 5;
    unsigned long OFFSET3_EN : 1;
} sSTM32F302_ADC3_OFR3;

typedef union {
    sSTM32F302_ADC3_OFR3 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_OFR3;

#define STM32F302_ADC3_OFR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OFFSET4 : 12;
    unsigned long Res0 : 14;
    unsigned long OFFSET4_CH : 5;
    unsigned long OFFSET4_EN : 1;
} sSTM32F302_ADC3_OFR4;

typedef union {
    sSTM32F302_ADC3_OFR4 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_OFR4;

#define STM32F302_ADC3_JDR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long JDATA1 : 16;
    unsigned long Res0 : 16;
} sSTM32F302_ADC3_JDR1;

typedef union {
    sSTM32F302_ADC3_JDR1 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_JDR1;

#define STM32F302_ADC3_JDR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long JDATA2 : 16;
    unsigned long Res0 : 16;
} sSTM32F302_ADC3_JDR2;

typedef union {
    sSTM32F302_ADC3_JDR2 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_JDR2;

#define STM32F302_ADC3_JDR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long JDATA3 : 16;
    unsigned long Res0 : 16;
} sSTM32F302_ADC3_JDR3;

typedef union {
    sSTM32F302_ADC3_JDR3 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_JDR3;

#define STM32F302_ADC3_JDR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long JDATA4 : 16;
    unsigned long Res0 : 16;
} sSTM32F302_ADC3_JDR4;

typedef union {
    sSTM32F302_ADC3_JDR4 Bit;
    unsigned long  All;
} uSTM32F302_ADC3_JDR4;

#define STM32F302_ADC3_AWD2CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long AWD2CH : 18;
    unsigned long Res1 : 13;
} sSTM32F302_ADC3_AWD2CR;

typedef union {
    sSTM32F302_ADC3_AWD2CR Bit;
    unsigned long  All;
} uSTM32F302_ADC3_AWD2CR;

#define STM32F302_ADC3_AWD3CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long AWD3CH : 18;
    unsigned long Res1 : 13;
} sSTM32F302_ADC3_AWD3CR;

typedef union {
    sSTM32F302_ADC3_AWD3CR Bit;
    unsigned long  All;
} uSTM32F302_ADC3_AWD3CR;

#define STM32F302_ADC3_DIFSEL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long DIFSEL_1_15 : 15;
    unsigned long DIFSEL_16_18 : 3;
    unsigned long Res1 : 13;
} sSTM32F302_ADC3_DIFSEL;

typedef union {
    sSTM32F302_ADC3_DIFSEL Bit;
    unsigned long  All;
} uSTM32F302_ADC3_DIFSEL;

#define STM32F302_ADC3_CALFACT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALFACT_S : 7;
    unsigned long Res0 : 9;
    unsigned long CALFACT_D : 7;
    unsigned long Res1 : 9;
} sSTM32F302_ADC3_CALFACT;

typedef union {
    sSTM32F302_ADC3_CALFACT Bit;
    unsigned long  All;
} uSTM32F302_ADC3_CALFACT;

typedef struct {
    uSTM32F302_ADC3_ISR STM32F302_ADC3_ISR; // Offset: 0x0
    uSTM32F302_ADC3_IER STM32F302_ADC3_IER; // Offset: 0x4
    uSTM32F302_ADC3_CR STM32F302_ADC3_CR; // Offset: 0x8
    uSTM32F302_ADC3_CFGR STM32F302_ADC3_CFGR; // Offset: 0xc
    unsigned long Reserved0;
    uSTM32F302_ADC3_SMPR1 STM32F302_ADC3_SMPR1; // Offset: 0x14
    uSTM32F302_ADC3_SMPR2 STM32F302_ADC3_SMPR2; // Offset: 0x18
    unsigned long Reserved1;
    uSTM32F302_ADC3_TR1 STM32F302_ADC3_TR1; // Offset: 0x20
    uSTM32F302_ADC3_TR2 STM32F302_ADC3_TR2; // Offset: 0x24
    uSTM32F302_ADC3_TR3 STM32F302_ADC3_TR3; // Offset: 0x28
    unsigned long Reserved2;
    uSTM32F302_ADC3_SQR1 STM32F302_ADC3_SQR1; // Offset: 0x30
    uSTM32F302_ADC3_SQR2 STM32F302_ADC3_SQR2; // Offset: 0x34
    uSTM32F302_ADC3_SQR3 STM32F302_ADC3_SQR3; // Offset: 0x38
    uSTM32F302_ADC3_SQR4 STM32F302_ADC3_SQR4; // Offset: 0x3c
    uSTM32F302_ADC3_DR STM32F302_ADC3_DR; // Offset: 0x40
    unsigned long Reserved3;
    unsigned long Reserved4;
    uSTM32F302_ADC3_JSQR STM32F302_ADC3_JSQR; // Offset: 0x4c
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    uSTM32F302_ADC3_OFR1 STM32F302_ADC3_OFR1; // Offset: 0x60
    uSTM32F302_ADC3_OFR2 STM32F302_ADC3_OFR2; // Offset: 0x64
    uSTM32F302_ADC3_OFR3 STM32F302_ADC3_OFR3; // Offset: 0x68
    uSTM32F302_ADC3_OFR4 STM32F302_ADC3_OFR4; // Offset: 0x6c
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    unsigned long Reserved12;
    uSTM32F302_ADC3_JDR1 STM32F302_ADC3_JDR1; // Offset: 0x80
    uSTM32F302_ADC3_JDR2 STM32F302_ADC3_JDR2; // Offset: 0x84
    uSTM32F302_ADC3_JDR3 STM32F302_ADC3_JDR3; // Offset: 0x88
    uSTM32F302_ADC3_JDR4 STM32F302_ADC3_JDR4; // Offset: 0x8c
    unsigned long Reserved13;
    unsigned long Reserved14;
    unsigned long Reserved15;
    unsigned long Reserved16;
    uSTM32F302_ADC3_AWD2CR STM32F302_ADC3_AWD2CR; // Offset: 0xa0
    uSTM32F302_ADC3_AWD3CR STM32F302_ADC3_AWD3CR; // Offset: 0xa4
    unsigned long Reserved17;
    unsigned long Reserved18;
    uSTM32F302_ADC3_DIFSEL STM32F302_ADC3_DIFSEL; // Offset: 0xb0
    uSTM32F302_ADC3_CALFACT STM32F302_ADC3_CALFACT; // Offset: 0xb4
} sSTM32F302_ADC3;

