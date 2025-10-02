// Base Addres of SYSCFG_COMP_OPAMP = 0x40010000

#define STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MEM_MODE : 2;
    unsigned long Res0 : 3;
    unsigned long USB_IT_RMP : 1;
    unsigned long TIM1_ITR_RMP : 1;
    unsigned long DAC_TRIG_RMP : 1;
    unsigned long ADC24_DMA_RMP : 1;
    unsigned long Res1 : 2;
    unsigned long TIM16_DMA_RMP : 1;
    unsigned long TIM17_DMA_RMP : 1;
    unsigned long TIM6_DAC1_DMA_RMP : 1;
    unsigned long TIM7_DAC2_DMA_RMP : 1;
    unsigned long Res2 : 1;
    unsigned long I2C_PB6_FM : 1;
    unsigned long I2C_PB7_FM : 1;
    unsigned long I2C_PB8_FM : 1;
    unsigned long I2C_PB9_FM : 1;
    unsigned long I2C1_FM : 1;
    unsigned long I2C2_FM : 1;
    unsigned long ENCODER_MODE : 2;
    unsigned long Res3 : 2;
    unsigned long FPU_IT : 6;
} sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR1;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR1 Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR1;

#define STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1_RESET_VALUE 0x0000
typedef struct {
    unsigned long EXTI0 : 4;
    unsigned long EXTI1 : 4;
    unsigned long EXTI2 : 4;
    unsigned long EXTI3 : 4;
    unsigned long Res0 : 16;
} sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1 Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1;

#define STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2_RESET_VALUE 0x0000
typedef struct {
    unsigned long EXTI4 : 4;
    unsigned long EXTI5 : 4;
    unsigned long EXTI6 : 4;
    unsigned long EXTI7 : 4;
    unsigned long Res0 : 16;
} sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2 Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2;

#define STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3_RESET_VALUE 0x0000
typedef struct {
    unsigned long EXTI8 : 4;
    unsigned long EXTI9 : 4;
    unsigned long EXTI10 : 4;
    unsigned long EXTI11 : 4;
    unsigned long Res0 : 16;
} sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3 Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3;

#define STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4_RESET_VALUE 0x0000
typedef struct {
    unsigned long EXTI12 : 4;
    unsigned long EXTI13 : 4;
    unsigned long EXTI14 : 4;
    unsigned long EXTI15 : 4;
    unsigned long Res0 : 16;
} sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4 Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4;

#define STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_RESET_VALUE 0x0000
typedef struct {
    unsigned long LOCUP_LOCK : 1;
    unsigned long SRAM_PARITY_LOCK : 1;
    unsigned long PVD_LOCK : 1;
    unsigned long Res0 : 1;
    unsigned long BYP_ADD_PAR : 1;
    unsigned long Res1 : 3;
    unsigned long SRAM_PEF : 1;
    unsigned long Res2 : 23;
} sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR2;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR2 Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR2;

#define STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_RCR_RESET_VALUE 0x0000
typedef struct {
    unsigned long PAGE0_WP : 1;
    unsigned long PAGE1_WP : 1;
    unsigned long PAGE2_WP : 1;
    unsigned long PAGE3_WP : 1;
    unsigned long PAGE4_WP : 1;
    unsigned long PAGE5_WP : 1;
    unsigned long PAGE6_WP : 1;
    unsigned long PAGE7_WP : 1;
    unsigned long Res0 : 24;
} sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_RCR;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_RCR Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_RCR;

#define STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR3_RESET_VALUE 0x0000
typedef struct {
    unsigned long SPI1_RX_DMA_RMP : 2;
    unsigned long SPI1_TX_DMA_RMP : 2;
    unsigned long I2C1_RX_DMA_RMP : 2;
    unsigned long ADC2_DMA_RMP_0 : 2;
    unsigned long Res0 : 1;
    unsigned long ADC2_DMA_RMP_1 : 1;
    unsigned long Res1 : 6;
    unsigned long DAC1_TRIG3_RMP : 1;
    unsigned long DAC1_TRIG5_RMP : 1;
    unsigned long Res2 : 14;
} sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR3;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR3 Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR3;

#define STM32F302_SYSCFG_COMP_OPAMP_OPAMP2_CSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OPAMP2EN : 1;
    unsigned long FORCE_VP : 1;
    unsigned long VP_SEL : 2;
    unsigned long Res0 : 1;
    unsigned long VM_SEL : 2;
    unsigned long TCM_EN : 1;
    unsigned long VMS_SEL : 1;
    unsigned long VPS_SEL : 2;
    unsigned long CALON : 1;
    unsigned long CAL_SEL : 2;
    unsigned long PGA_GAIN : 4;
    unsigned long USER_TRIM : 1;
    unsigned long TRIMOFFSETP : 5;
    unsigned long TRIMOFFSETN : 5;
    unsigned long TSTREF : 1;
    unsigned long OUTCAL : 1;
    unsigned long LOCK : 1;
} sSTM32F302_SYSCFG_COMP_OPAMP_OPAMP2_CSR;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_OPAMP2_CSR Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_OPAMP2_CSR;

#define STM32F302_SYSCFG_COMP_OPAMP_COMP2_CSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long COMP2EN : 1;
    unsigned long Res0 : 1;
    unsigned long COMP2MODE : 2;
    unsigned long COMP2INSEL : 3;
    unsigned long COMP2INPSEL : 1;
    unsigned long Res1 : 1;
    unsigned long COMP2INMSEL : 1;
    unsigned long COMP2_OUT_SEL : 4;
    unsigned long Res2 : 1;
    unsigned long COMP2POL : 1;
    unsigned long COMP2HYST : 2;
    unsigned long COMP2_BLANKING : 3;
    unsigned long Res3 : 9;
    unsigned long COMP2OUT : 1;
    unsigned long COMP2LOCK : 1;
} sSTM32F302_SYSCFG_COMP_OPAMP_COMP2_CSR;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_COMP2_CSR Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_COMP2_CSR;

#define STM32F302_SYSCFG_COMP_OPAMP_COMP4_CSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long COMP4EN : 1;
    unsigned long Res0 : 1;
    unsigned long COMP4MODE : 2;
    unsigned long COMP4INSEL : 3;
    unsigned long COMP4INPSEL : 1;
    unsigned long Res1 : 1;
    unsigned long COM4WINMODE : 1;
    unsigned long COMP4_OUT_SEL : 4;
    unsigned long Res2 : 1;
    unsigned long COMP4POL : 1;
    unsigned long COMP4HYST : 2;
    unsigned long COMP4_BLANKING : 3;
    unsigned long Res3 : 9;
    unsigned long COMP4OUT : 1;
    unsigned long COMP4LOCK : 1;
} sSTM32F302_SYSCFG_COMP_OPAMP_COMP4_CSR;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_COMP4_CSR Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_COMP4_CSR;

#define STM32F302_SYSCFG_COMP_OPAMP_COMP6_CSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long COMP6EN : 1;
    unsigned long Res0 : 1;
    unsigned long COMP6MODE : 2;
    unsigned long COMP6INSEL : 3;
    unsigned long COMP6INPSEL : 1;
    unsigned long Res1 : 1;
    unsigned long COM6WINMODE : 1;
    unsigned long COMP6_OUT_SEL : 4;
    unsigned long Res2 : 1;
    unsigned long COMP6POL : 1;
    unsigned long COMP6HYST : 2;
    unsigned long COMP6_BLANKING : 3;
    unsigned long Res3 : 9;
    unsigned long COMP6OUT : 1;
    unsigned long COMP6LOCK : 1;
} sSTM32F302_SYSCFG_COMP_OPAMP_COMP6_CSR;

typedef union {
    sSTM32F302_SYSCFG_COMP_OPAMP_COMP6_CSR Bit;
    unsigned long  All;
} uSTM32F302_SYSCFG_COMP_OPAMP_COMP6_CSR;

typedef struct {
    uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR1 STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR1; // Offset: 0x0
    unsigned long Reserved0;
    uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1 STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1; // Offset: 0x8
    uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2 STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2; // Offset: 0xc
    uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3 STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3; // Offset: 0x10
    uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4 STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4; // Offset: 0x14
    uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR2 STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR2; // Offset: 0x18
    uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_RCR STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_RCR; // Offset: 0x4
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    unsigned long Reserved15;
    unsigned long Reserved16;
    unsigned long Reserved17;
    unsigned long Reserved18;
    uSTM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR3 STM32F302_SYSCFG_COMP_OPAMP_SYSCFG_CFGR3; // Offset: 0x50
    uSTM32F302_SYSCFG_COMP_OPAMP_OPAMP2_CSR STM32F302_SYSCFG_COMP_OPAMP_OPAMP2_CSR; // Offset: 0x3c
    uSTM32F302_SYSCFG_COMP_OPAMP_COMP2_CSR STM32F302_SYSCFG_COMP_OPAMP_COMP2_CSR; // Offset: 0x20
    unsigned long Reserved19;
    uSTM32F302_SYSCFG_COMP_OPAMP_COMP4_CSR STM32F302_SYSCFG_COMP_OPAMP_COMP4_CSR; // Offset: 0x28
    unsigned long Reserved20;
    uSTM32F302_SYSCFG_COMP_OPAMP_COMP6_CSR STM32F302_SYSCFG_COMP_OPAMP_COMP6_CSR; // Offset: 0x30
} sSTM32F302_SYSCFG_COMP_OPAMP;

