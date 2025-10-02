// Base Addres of RCC = 0x40021000

#define STM32F302_RCC_CR_RESET_VALUE 0x00000083
typedef struct {
    unsigned long HSION : 1;
    unsigned long HSIRDY : 1;
    unsigned long Res0 : 1;
    unsigned long HSITRIM : 5;
    unsigned long HSICAL : 8;
    unsigned long HSEON : 1;
    unsigned long HSERDY : 1;
    unsigned long HSEBYP : 1;
    unsigned long CSSON : 1;
    unsigned long Res1 : 4;
    unsigned long PLLON : 1;
    unsigned long PLLRDY : 1;
    unsigned long Res2 : 6;
} sSTM32F302_RCC_CR;

typedef union {
    sSTM32F302_RCC_CR Bit;
    unsigned long  All;
} uSTM32F302_RCC_CR;

#define STM32F302_RCC_CFGR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SW : 2;
    unsigned long SWS : 2;
    unsigned long HPRE : 4;
    unsigned long PPRE1 : 3;
    unsigned long PPRE2 : 3;
    unsigned long Res0 : 1;
    unsigned long PLLSRC : 2;
    unsigned long PLLXTPRE : 1;
    unsigned long PLLMUL : 4;
    unsigned long USBPRES : 1;
    unsigned long I2SSRC : 1;
    unsigned long MCO : 3;
    unsigned long Res1 : 1;
    unsigned long MCOF : 1;
    unsigned long MCOPRE : 2;
    unsigned long Res2 : 1;
} sSTM32F302_RCC_CFGR;

typedef union {
    sSTM32F302_RCC_CFGR Bit;
    unsigned long  All;
} uSTM32F302_RCC_CFGR;

#define STM32F302_RCC_CIR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LSIRDYF : 1;
    unsigned long LSERDYF : 1;
    unsigned long HSIRDYF : 1;
    unsigned long HSERDYF : 1;
    unsigned long PLLRDYF : 1;
    unsigned long Res0 : 2;
    unsigned long CSSF : 1;
    unsigned long LSIRDYIE : 1;
    unsigned long LSERDYIE : 1;
    unsigned long HSIRDYIE : 1;
    unsigned long HSERDYIE : 1;
    unsigned long PLLRDYIE : 1;
    unsigned long Res1 : 3;
    unsigned long LSIRDYC : 1;
    unsigned long LSERDYC : 1;
    unsigned long HSIRDYC : 1;
    unsigned long HSERDYC : 1;
    unsigned long PLLRDYC : 1;
    unsigned long Res2 : 2;
    unsigned long CSSC : 1;
    unsigned long Res3 : 8;
} sSTM32F302_RCC_CIR;

typedef union {
    sSTM32F302_RCC_CIR Bit;
    unsigned long  All;
} uSTM32F302_RCC_CIR;

#define STM32F302_RCC_APB2RSTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SYSCFGRST : 1;
    unsigned long Res0 : 10;
    unsigned long TIM1RST : 1;
    unsigned long SPI1RST : 1;
    unsigned long TIM8RST : 1;
    unsigned long USART1RST : 1;
    unsigned long Res1 : 1;
    unsigned long TIM15RST : 1;
    unsigned long TIM16RST : 1;
    unsigned long TIM17RST : 1;
    unsigned long Res2 : 13;
} sSTM32F302_RCC_APB2RSTR;

typedef union {
    sSTM32F302_RCC_APB2RSTR Bit;
    unsigned long  All;
} uSTM32F302_RCC_APB2RSTR;

#define STM32F302_RCC_APB1RSTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TIM2RST : 1;
    unsigned long TIM3RST : 1;
    unsigned long TIM4RST : 1;
    unsigned long Res0 : 1;
    unsigned long TIM6RST : 1;
    unsigned long TIM7RST : 1;
    unsigned long Res1 : 5;
    unsigned long WWDGRST : 1;
    unsigned long Res2 : 2;
    unsigned long SPI2RST : 1;
    unsigned long SPI3RST : 1;
    unsigned long Res3 : 1;
    unsigned long USART2RST : 1;
    unsigned long USART3RST : 1;
    unsigned long UART4RST : 1;
    unsigned long UART5RST : 1;
    unsigned long I2C1RST : 1;
    unsigned long I2C2RST : 1;
    unsigned long USBRST : 1;
    unsigned long Res4 : 1;
    unsigned long CANRST : 1;
    unsigned long Res5 : 2;
    unsigned long PWRRST : 1;
    unsigned long DACRST : 1;
    unsigned long Res6 : 2;
} sSTM32F302_RCC_APB1RSTR;

typedef union {
    sSTM32F302_RCC_APB1RSTR Bit;
    unsigned long  All;
} uSTM32F302_RCC_APB1RSTR;

#define STM32F302_RCC_AHBENR_RESET_VALUE 0x00000014
typedef struct {
    unsigned long DMAEN : 1;
    unsigned long DMA2EN : 1;
    unsigned long SRAMEN : 1;
    unsigned long Res0 : 1;
    unsigned long FLITFEN : 1;
    unsigned long Res1 : 1;
    unsigned long CRCEN : 1;
    unsigned long Res2 : 10;
    unsigned long IOPAEN : 1;
    unsigned long IOPBEN : 1;
    unsigned long IOPCEN : 1;
    unsigned long IOPDEN : 1;
    unsigned long IOPEEN : 1;
    unsigned long IOPFEN : 1;
    unsigned long Res3 : 1;
    unsigned long TSCEN : 1;
    unsigned long Res4 : 3;
    unsigned long ADC12EN : 1;
    unsigned long ADC34EN : 1;
    unsigned long Res5 : 2;
} sSTM32F302_RCC_AHBENR;

typedef union {
    sSTM32F302_RCC_AHBENR Bit;
    unsigned long  All;
} uSTM32F302_RCC_AHBENR;

#define STM32F302_RCC_APB2ENR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SYSCFGEN : 1;
    unsigned long Res0 : 10;
    unsigned long TIM1EN : 1;
    unsigned long SPI1EN : 1;
    unsigned long TIM8EN : 1;
    unsigned long USART1EN : 1;
    unsigned long Res1 : 1;
    unsigned long TIM15EN : 1;
    unsigned long TIM16EN : 1;
    unsigned long TIM17EN : 1;
    unsigned long Res2 : 13;
} sSTM32F302_RCC_APB2ENR;

typedef union {
    sSTM32F302_RCC_APB2ENR Bit;
    unsigned long  All;
} uSTM32F302_RCC_APB2ENR;

#define STM32F302_RCC_APB1ENR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TIM2EN : 1;
    unsigned long TIM3EN : 1;
    unsigned long TIM4EN : 1;
    unsigned long Res0 : 1;
    unsigned long TIM6EN : 1;
    unsigned long TIM7EN : 1;
    unsigned long Res1 : 5;
    unsigned long WWDGEN : 1;
    unsigned long Res2 : 2;
    unsigned long SPI2EN : 1;
    unsigned long SPI3EN : 1;
    unsigned long Res3 : 1;
    unsigned long USART2EN : 1;
    unsigned long Res4 : 3;
    unsigned long I2C1EN : 1;
    unsigned long I2C2EN : 1;
    unsigned long USBEN : 1;
    unsigned long Res5 : 1;
    unsigned long CANEN : 1;
    unsigned long Res6 : 2;
    unsigned long PWREN : 1;
    unsigned long DACEN : 1;
    unsigned long Res7 : 2;
} sSTM32F302_RCC_APB1ENR;

typedef union {
    sSTM32F302_RCC_APB1ENR Bit;
    unsigned long  All;
} uSTM32F302_RCC_APB1ENR;

#define STM32F302_RCC_BDCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LSEON : 1;
    unsigned long LSERDY : 1;
    unsigned long LSEBYP : 1;
    unsigned long LSEDRV : 2;
    unsigned long Res0 : 3;
    unsigned long RTCSEL : 2;
    unsigned long Res1 : 5;
    unsigned long RTCEN : 1;
    unsigned long BDRST : 1;
    unsigned long Res2 : 15;
} sSTM32F302_RCC_BDCR;

typedef union {
    sSTM32F302_RCC_BDCR Bit;
    unsigned long  All;
} uSTM32F302_RCC_BDCR;

#define STM32F302_RCC_CSR_RESET_VALUE 0x0C000000
typedef struct {
    unsigned long LSION : 1;
    unsigned long LSIRDY : 1;
    unsigned long Res0 : 22;
    unsigned long RMVF : 1;
    unsigned long OBLRSTF : 1;
    unsigned long PINRSTF : 1;
    unsigned long PORRSTF : 1;
    unsigned long SFTRSTF : 1;
    unsigned long IWDGRSTF : 1;
    unsigned long WWDGRSTF : 1;
    unsigned long LPWRRSTF : 1;
} sSTM32F302_RCC_CSR;

typedef union {
    sSTM32F302_RCC_CSR Bit;
    unsigned long  All;
} uSTM32F302_RCC_CSR;

#define STM32F302_RCC_AHBRSTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 17;
    unsigned long IOPARST : 1;
    unsigned long IOPBRST : 1;
    unsigned long IOPCRST : 1;
    unsigned long IOPDRST : 1;
    unsigned long IOPERST : 1;
    unsigned long IOPFRST : 1;
    unsigned long Res1 : 1;
    unsigned long TSCRST : 1;
    unsigned long Res2 : 3;
    unsigned long ADC12RST : 1;
    unsigned long ADC34RST : 1;
    unsigned long Res3 : 2;
} sSTM32F302_RCC_AHBRSTR;

typedef union {
    sSTM32F302_RCC_AHBRSTR Bit;
    unsigned long  All;
} uSTM32F302_RCC_AHBRSTR;

#define STM32F302_RCC_CFGR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PREDIV : 4;
    unsigned long ADC12PRES : 5;
    unsigned long ADC34PRES : 5;
    unsigned long Res0 : 18;
} sSTM32F302_RCC_CFGR2;

typedef union {
    sSTM32F302_RCC_CFGR2 Bit;
    unsigned long  All;
} uSTM32F302_RCC_CFGR2;

#define STM32F302_RCC_CFGR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long USART1SW : 2;
    unsigned long Res0 : 2;
    unsigned long I2C1SW : 1;
    unsigned long I2C2SW : 1;
    unsigned long Res1 : 2;
    unsigned long TIM1SW : 1;
    unsigned long TIM8SW : 1;
    unsigned long Res2 : 6;
    unsigned long USART2SW : 2;
    unsigned long USART3SW : 2;
    unsigned long UART4SW : 2;
    unsigned long UART5SW : 2;
    unsigned long Res3 : 8;
} sSTM32F302_RCC_CFGR3;

typedef union {
    sSTM32F302_RCC_CFGR3 Bit;
    unsigned long  All;
} uSTM32F302_RCC_CFGR3;

typedef struct {
    uSTM32F302_RCC_CR STM32F302_RCC_CR; // Offset: 0x0
    uSTM32F302_RCC_CFGR STM32F302_RCC_CFGR; // Offset: 0x4
    uSTM32F302_RCC_CIR STM32F302_RCC_CIR; // Offset: 0x8
    uSTM32F302_RCC_APB2RSTR STM32F302_RCC_APB2RSTR; // Offset: 0xc
    uSTM32F302_RCC_APB1RSTR STM32F302_RCC_APB1RSTR; // Offset: 0x10
    uSTM32F302_RCC_AHBENR STM32F302_RCC_AHBENR; // Offset: 0x14
    uSTM32F302_RCC_APB2ENR STM32F302_RCC_APB2ENR; // Offset: 0x18
    uSTM32F302_RCC_APB1ENR STM32F302_RCC_APB1ENR; // Offset: 0x1c
    uSTM32F302_RCC_BDCR STM32F302_RCC_BDCR; // Offset: 0x20
    uSTM32F302_RCC_CSR STM32F302_RCC_CSR; // Offset: 0x24
    uSTM32F302_RCC_AHBRSTR STM32F302_RCC_AHBRSTR; // Offset: 0x28
    uSTM32F302_RCC_CFGR2 STM32F302_RCC_CFGR2; // Offset: 0x2c
    uSTM32F302_RCC_CFGR3 STM32F302_RCC_CFGR3; // Offset: 0x30
} sSTM32F302_RCC;

