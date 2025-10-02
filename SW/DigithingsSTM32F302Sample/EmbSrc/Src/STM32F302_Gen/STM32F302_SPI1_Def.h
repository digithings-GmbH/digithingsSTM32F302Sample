// Base Addres of SPI1 = 0x40013000

#define STM32F302_SPI1_CR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CPHA : 1;
    unsigned long CPOL : 1;
    unsigned long MSTR : 1;
    unsigned long BR : 3;
    unsigned long SPE : 1;
    unsigned long LSBFIRST : 1;
    unsigned long SSI : 1;
    unsigned long SSM : 1;
    unsigned long RXONLY : 1;
    unsigned long CRCL : 1;
    unsigned long CRCNEXT : 1;
    unsigned long CRCEN : 1;
    unsigned long BIDIOE : 1;
    unsigned long BIDIMODE : 1;
    unsigned long Res0 : 16;
} sSTM32F302_SPI1_CR1;

typedef union {
    sSTM32F302_SPI1_CR1 Bit;
    unsigned long  All;
} uSTM32F302_SPI1_CR1;

#define STM32F302_SPI1_CR2_RESET_VALUE 0x00000700
typedef struct {
    unsigned long RXDMAEN : 1;
    unsigned long TXDMAEN : 1;
    unsigned long SSOE : 1;
    unsigned long NSSP : 1;
    unsigned long FRF : 1;
    unsigned long ERRIE : 1;
    unsigned long RXNEIE : 1;
    unsigned long TXEIE : 1;
    unsigned long DS : 4;
    unsigned long FRXTH : 1;
    unsigned long LDMA_RX : 1;
    unsigned long LDMA_TX : 1;
    unsigned long Res0 : 17;
} sSTM32F302_SPI1_CR2;

typedef union {
    sSTM32F302_SPI1_CR2 Bit;
    unsigned long  All;
} uSTM32F302_SPI1_CR2;

#define STM32F302_SPI1_SR_RESET_VALUE 0x00000002
typedef struct {
    unsigned long RXNE : 1;
    unsigned long TXE : 1;
    unsigned long CHSIDE : 1;
    unsigned long UDR : 1;
    unsigned long CRCERR : 1;
    unsigned long MODF : 1;
    unsigned long OVR : 1;
    unsigned long BSY : 1;
    unsigned long TIFRFE : 1;
    unsigned long FRLVL : 2;
    unsigned long FTLVL : 2;
    unsigned long Res0 : 19;
} sSTM32F302_SPI1_SR;

typedef union {
    sSTM32F302_SPI1_SR Bit;
    unsigned long  All;
} uSTM32F302_SPI1_SR;

#define STM32F302_SPI1_DR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DR : 16;
    unsigned long Res0 : 16;
} sSTM32F302_SPI1_DR;

typedef union {
    sSTM32F302_SPI1_DR Bit;
    unsigned long  All;
} uSTM32F302_SPI1_DR;

#define STM32F302_SPI1_CRCPR_RESET_VALUE 0x00000007
typedef struct {
    unsigned long CRCPOLY : 16;
    unsigned long Res0 : 16;
} sSTM32F302_SPI1_CRCPR;

typedef union {
    sSTM32F302_SPI1_CRCPR Bit;
    unsigned long  All;
} uSTM32F302_SPI1_CRCPR;

#define STM32F302_SPI1_RXCRCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RxCRC : 16;
    unsigned long Res0 : 16;
} sSTM32F302_SPI1_RXCRCR;

typedef union {
    sSTM32F302_SPI1_RXCRCR Bit;
    unsigned long  All;
} uSTM32F302_SPI1_RXCRCR;

#define STM32F302_SPI1_TXCRCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TxCRC : 16;
    unsigned long Res0 : 16;
} sSTM32F302_SPI1_TXCRCR;

typedef union {
    sSTM32F302_SPI1_TXCRCR Bit;
    unsigned long  All;
} uSTM32F302_SPI1_TXCRCR;

#define STM32F302_SPI1_I2SCFGR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CHLEN : 1;
    unsigned long DATLEN : 2;
    unsigned long CKPOL : 1;
    unsigned long I2SSTD : 2;
    unsigned long Res0 : 1;
    unsigned long PCMSYNC : 1;
    unsigned long I2SCFG : 2;
    unsigned long I2SE : 1;
    unsigned long I2SMOD : 1;
    unsigned long Res1 : 20;
} sSTM32F302_SPI1_I2SCFGR;

typedef union {
    sSTM32F302_SPI1_I2SCFGR Bit;
    unsigned long  All;
} uSTM32F302_SPI1_I2SCFGR;

#define STM32F302_SPI1_I2SPR_RESET_VALUE 0x00000010
typedef struct {
    unsigned long I2SDIV : 8;
    unsigned long ODD : 1;
    unsigned long MCKOE : 1;
    unsigned long Res0 : 22;
} sSTM32F302_SPI1_I2SPR;

typedef union {
    sSTM32F302_SPI1_I2SPR Bit;
    unsigned long  All;
} uSTM32F302_SPI1_I2SPR;

typedef struct {
    uSTM32F302_SPI1_CR1 STM32F302_SPI1_CR1; // Offset: 0x0
    uSTM32F302_SPI1_CR2 STM32F302_SPI1_CR2; // Offset: 0x4
    uSTM32F302_SPI1_SR STM32F302_SPI1_SR; // Offset: 0x8
    uSTM32F302_SPI1_DR STM32F302_SPI1_DR; // Offset: 0xc
    uSTM32F302_SPI1_CRCPR STM32F302_SPI1_CRCPR; // Offset: 0x10
    uSTM32F302_SPI1_RXCRCR STM32F302_SPI1_RXCRCR; // Offset: 0x14
    uSTM32F302_SPI1_TXCRCR STM32F302_SPI1_TXCRCR; // Offset: 0x18
    uSTM32F302_SPI1_I2SCFGR STM32F302_SPI1_I2SCFGR; // Offset: 0x1c
    uSTM32F302_SPI1_I2SPR STM32F302_SPI1_I2SPR; // Offset: 0x20
} sSTM32F302_SPI1;

