// Base Addres of I2C2_EV_EXTI24 = 0x40007800

#define STM32F302_I2C2_EV_EXTI24_CR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PE : 1;
    unsigned long TXIE : 1;
    unsigned long RXIE : 1;
    unsigned long ADDRIE : 1;
    unsigned long NACKIE : 1;
    unsigned long STOPIE : 1;
    unsigned long TCIE : 1;
    unsigned long ERRIE : 1;
    unsigned long DNF : 4;
    unsigned long ANFOFF : 1;
    unsigned long SWRST : 1;
    unsigned long TXDMAEN : 1;
    unsigned long RXDMAEN : 1;
    unsigned long SBC : 1;
    unsigned long NOSTRETCH : 1;
    unsigned long WUPEN : 1;
    unsigned long GCEN : 1;
    unsigned long SMBHEN : 1;
    unsigned long SMBDEN : 1;
    unsigned long ALERTEN : 1;
    unsigned long PECEN : 1;
    unsigned long Res0 : 8;
} sSTM32F302_I2C2_EV_EXTI24_CR1;

typedef union {
    sSTM32F302_I2C2_EV_EXTI24_CR1 Bit;
    unsigned long  All;
} uSTM32F302_I2C2_EV_EXTI24_CR1;

#define STM32F302_I2C2_EV_EXTI24_CR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SADD0 : 1;
    unsigned long SADD1 : 7;
    unsigned long SADD8 : 2;
    unsigned long RD_WRN : 1;
    unsigned long ADD10 : 1;
    unsigned long HEAD10R : 1;
    unsigned long START : 1;
    unsigned long STOP : 1;
    unsigned long NACK : 1;
    unsigned long NBYTES : 8;
    unsigned long RELOAD : 1;
    unsigned long AUTOEND : 1;
    unsigned long PECBYTE : 1;
    unsigned long Res0 : 5;
} sSTM32F302_I2C2_EV_EXTI24_CR2;

typedef union {
    sSTM32F302_I2C2_EV_EXTI24_CR2 Bit;
    unsigned long  All;
} uSTM32F302_I2C2_EV_EXTI24_CR2;

#define STM32F302_I2C2_EV_EXTI24_OAR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OA1_0 : 1;
    unsigned long OA1_1 : 7;
    unsigned long OA1_8 : 2;
    unsigned long OA1MODE : 1;
    unsigned long Res0 : 4;
    unsigned long OA1EN : 1;
    unsigned long Res1 : 16;
} sSTM32F302_I2C2_EV_EXTI24_OAR1;

typedef union {
    sSTM32F302_I2C2_EV_EXTI24_OAR1 Bit;
    unsigned long  All;
} uSTM32F302_I2C2_EV_EXTI24_OAR1;

#define STM32F302_I2C2_EV_EXTI24_OAR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long OA2 : 7;
    unsigned long OA2MSK : 3;
    unsigned long Res1 : 4;
    unsigned long OA2EN : 1;
    unsigned long Res2 : 16;
} sSTM32F302_I2C2_EV_EXTI24_OAR2;

typedef union {
    sSTM32F302_I2C2_EV_EXTI24_OAR2 Bit;
    unsigned long  All;
} uSTM32F302_I2C2_EV_EXTI24_OAR2;

#define STM32F302_I2C2_EV_EXTI24_TIMINGR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SCLL : 8;
    unsigned long SCLH : 8;
    unsigned long SDADEL : 4;
    unsigned long SCLDEL : 4;
    unsigned long Res0 : 4;
    unsigned long PRESC : 4;
} sSTM32F302_I2C2_EV_EXTI24_TIMINGR;

typedef union {
    sSTM32F302_I2C2_EV_EXTI24_TIMINGR Bit;
    unsigned long  All;
} uSTM32F302_I2C2_EV_EXTI24_TIMINGR;

#define STM32F302_I2C2_EV_EXTI24_TIMEOUTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TIMEOUTA : 12;
    unsigned long TIDLE : 1;
    unsigned long Res0 : 2;
    unsigned long TIMOUTEN : 1;
    unsigned long TIMEOUTB : 12;
    unsigned long Res1 : 3;
    unsigned long TEXTEN : 1;
} sSTM32F302_I2C2_EV_EXTI24_TIMEOUTR;

typedef union {
    sSTM32F302_I2C2_EV_EXTI24_TIMEOUTR Bit;
    unsigned long  All;
} uSTM32F302_I2C2_EV_EXTI24_TIMEOUTR;

#define STM32F302_I2C2_EV_EXTI24_ISR_RESET_VALUE 0x00000001
typedef struct {
    unsigned long TXE : 1;
    unsigned long TXIS : 1;
    unsigned long RXNE : 1;
    unsigned long ADDR : 1;
    unsigned long NACKF : 1;
    unsigned long STOPF : 1;
    unsigned long TC : 1;
    unsigned long TCR : 1;
    unsigned long BERR : 1;
    unsigned long ARLO : 1;
    unsigned long OVR : 1;
    unsigned long PECERR : 1;
    unsigned long TIMEOUT : 1;
    unsigned long ALERT : 1;
    unsigned long Res0 : 1;
    unsigned long BUSY : 1;
    unsigned long DIR : 1;
    unsigned long ADDCODE : 7;
    unsigned long Res1 : 8;
} sSTM32F302_I2C2_EV_EXTI24_ISR;

typedef union {
    sSTM32F302_I2C2_EV_EXTI24_ISR Bit;
    unsigned long  All;
} uSTM32F302_I2C2_EV_EXTI24_ISR;

#define STM32F302_I2C2_EV_EXTI24_ICR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 3;
    unsigned long ADDRCF : 1;
    unsigned long NACKCF : 1;
    unsigned long STOPCF : 1;
    unsigned long Res1 : 2;
    unsigned long BERRCF : 1;
    unsigned long ARLOCF : 1;
    unsigned long OVRCF : 1;
    unsigned long PECCF : 1;
    unsigned long TIMOUTCF : 1;
    unsigned long ALERTCF : 1;
    unsigned long Res2 : 18;
} sSTM32F302_I2C2_EV_EXTI24_ICR;

typedef union {
    sSTM32F302_I2C2_EV_EXTI24_ICR Bit;
    unsigned long  All;
} uSTM32F302_I2C2_EV_EXTI24_ICR;

#define STM32F302_I2C2_EV_EXTI24_PECR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PEC : 8;
    unsigned long Res0 : 24;
} sSTM32F302_I2C2_EV_EXTI24_PECR;

typedef union {
    sSTM32F302_I2C2_EV_EXTI24_PECR Bit;
    unsigned long  All;
} uSTM32F302_I2C2_EV_EXTI24_PECR;

#define STM32F302_I2C2_EV_EXTI24_RXDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RXDATA : 8;
    unsigned long Res0 : 24;
} sSTM32F302_I2C2_EV_EXTI24_RXDR;

typedef union {
    sSTM32F302_I2C2_EV_EXTI24_RXDR Bit;
    unsigned long  All;
} uSTM32F302_I2C2_EV_EXTI24_RXDR;

#define STM32F302_I2C2_EV_EXTI24_TXDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXDATA : 8;
    unsigned long Res0 : 24;
} sSTM32F302_I2C2_EV_EXTI24_TXDR;

typedef union {
    sSTM32F302_I2C2_EV_EXTI24_TXDR Bit;
    unsigned long  All;
} uSTM32F302_I2C2_EV_EXTI24_TXDR;

typedef struct {
    uSTM32F302_I2C2_EV_EXTI24_CR1 STM32F302_I2C2_EV_EXTI24_CR1; // Offset: 0x0
    uSTM32F302_I2C2_EV_EXTI24_CR2 STM32F302_I2C2_EV_EXTI24_CR2; // Offset: 0x4
    uSTM32F302_I2C2_EV_EXTI24_OAR1 STM32F302_I2C2_EV_EXTI24_OAR1; // Offset: 0x8
    uSTM32F302_I2C2_EV_EXTI24_OAR2 STM32F302_I2C2_EV_EXTI24_OAR2; // Offset: 0xc
    uSTM32F302_I2C2_EV_EXTI24_TIMINGR STM32F302_I2C2_EV_EXTI24_TIMINGR; // Offset: 0x10
    uSTM32F302_I2C2_EV_EXTI24_TIMEOUTR STM32F302_I2C2_EV_EXTI24_TIMEOUTR; // Offset: 0x14
    uSTM32F302_I2C2_EV_EXTI24_ISR STM32F302_I2C2_EV_EXTI24_ISR; // Offset: 0x18
    uSTM32F302_I2C2_EV_EXTI24_ICR STM32F302_I2C2_EV_EXTI24_ICR; // Offset: 0x1c
    uSTM32F302_I2C2_EV_EXTI24_PECR STM32F302_I2C2_EV_EXTI24_PECR; // Offset: 0x20
    uSTM32F302_I2C2_EV_EXTI24_RXDR STM32F302_I2C2_EV_EXTI24_RXDR; // Offset: 0x24
    uSTM32F302_I2C2_EV_EXTI24_TXDR STM32F302_I2C2_EV_EXTI24_TXDR; // Offset: 0x28
} sSTM32F302_I2C2_EV_EXTI24;

