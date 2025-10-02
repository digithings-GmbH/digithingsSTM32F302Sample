// Base Addres of ADC1_2 = 0x50000300

#define STM32F302_ADC1_2_CSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ADDRDY_MST : 1;
    unsigned long EOSMP_MST : 1;
    unsigned long EOC_MST : 1;
    unsigned long EOS_MST : 1;
    unsigned long OVR_MST : 1;
    unsigned long JEOC_MST : 1;
    unsigned long JEOS_MST : 1;
    unsigned long AWD1_MST : 1;
    unsigned long AWD2_MST : 1;
    unsigned long AWD3_MST : 1;
    unsigned long JQOVF_MST : 1;
    unsigned long Res0 : 5;
    unsigned long ADRDY_SLV : 1;
    unsigned long EOSMP_SLV : 1;
    unsigned long EOC_SLV : 1;
    unsigned long EOS_SLV : 1;
    unsigned long OVR_SLV : 1;
    unsigned long JEOC_SLV : 1;
    unsigned long JEOS_SLV : 1;
    unsigned long AWD1_SLV : 1;
    unsigned long AWD2_SLV : 1;
    unsigned long AWD3_SLV : 1;
    unsigned long JQOVF_SLV : 1;
    unsigned long Res1 : 5;
} sSTM32F302_ADC1_2_CSR;

typedef union {
    sSTM32F302_ADC1_2_CSR Bit;
    unsigned long  All;
} uSTM32F302_ADC1_2_CSR;

#define STM32F302_ADC1_2_CCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MULT : 5;
    unsigned long Res0 : 3;
    unsigned long DELAY : 4;
    unsigned long Res1 : 1;
    unsigned long DMACFG : 1;
    unsigned long MDMA : 2;
    unsigned long CKMODE : 2;
    unsigned long Res2 : 4;
    unsigned long VREFEN : 1;
    unsigned long TSEN : 1;
    unsigned long VBATEN : 1;
    unsigned long Res3 : 7;
} sSTM32F302_ADC1_2_CCR;

typedef union {
    sSTM32F302_ADC1_2_CCR Bit;
    unsigned long  All;
} uSTM32F302_ADC1_2_CCR;

#define STM32F302_ADC1_2_CDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RDATA_MST : 16;
    unsigned long RDATA_SLV : 16;
} sSTM32F302_ADC1_2_CDR;

typedef union {
    sSTM32F302_ADC1_2_CDR Bit;
    unsigned long  All;
} uSTM32F302_ADC1_2_CDR;

typedef struct {
    uSTM32F302_ADC1_2_CSR STM32F302_ADC1_2_CSR; // Offset: 0x0
    unsigned long Reserved0;
    uSTM32F302_ADC1_2_CCR STM32F302_ADC1_2_CCR; // Offset: 0x8
    uSTM32F302_ADC1_2_CDR STM32F302_ADC1_2_CDR; // Offset: 0xc
} sSTM32F302_ADC1_2;

