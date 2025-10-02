// Base Addres of FLASH = 0x40022000

#define STM32F302_FLASH_ACR_RESET_VALUE 0x00000030
typedef struct {
    unsigned long LATENCY : 3;
    unsigned long Res0 : 1;
    unsigned long PRFTBE : 1;
    unsigned long PRFTBS : 1;
    unsigned long Res1 : 26;
} sSTM32F302_FLASH_ACR;

typedef union {
    sSTM32F302_FLASH_ACR Bit;
    unsigned long  All;
} uSTM32F302_FLASH_ACR;

#define STM32F302_FLASH_KEYR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FKEYR : 32;
} sSTM32F302_FLASH_KEYR;

typedef union {
    sSTM32F302_FLASH_KEYR Bit;
    unsigned long  All;
} uSTM32F302_FLASH_KEYR;

#define STM32F302_FLASH_OPTKEYR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OPTKEYR : 32;
} sSTM32F302_FLASH_OPTKEYR;

typedef union {
    sSTM32F302_FLASH_OPTKEYR Bit;
    unsigned long  All;
} uSTM32F302_FLASH_OPTKEYR;

#define STM32F302_FLASH_SR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BSY : 1;
    unsigned long Res0 : 1;
    unsigned long PGERR : 1;
    unsigned long Res1 : 1;
    unsigned long WRPRT : 1;
    unsigned long EOP : 1;
    unsigned long Res2 : 26;
} sSTM32F302_FLASH_SR;

typedef union {
    sSTM32F302_FLASH_SR Bit;
    unsigned long  All;
} uSTM32F302_FLASH_SR;

#define STM32F302_FLASH_CR_RESET_VALUE 0x00000080
typedef struct {
    unsigned long PG : 1;
    unsigned long PER : 1;
    unsigned long MER : 1;
    unsigned long Res0 : 1;
    unsigned long OPTPG : 1;
    unsigned long OPTER : 1;
    unsigned long STRT : 1;
    unsigned long LOCK : 1;
    unsigned long Res1 : 1;
    unsigned long OPTWRE : 1;
    unsigned long ERRIE : 1;
    unsigned long Res2 : 1;
    unsigned long EOPIE : 1;
    unsigned long FORCE_OPTLOAD : 1;
    unsigned long Res3 : 18;
} sSTM32F302_FLASH_CR;

typedef union {
    sSTM32F302_FLASH_CR Bit;
    unsigned long  All;
} uSTM32F302_FLASH_CR;

#define STM32F302_FLASH_AR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FAR : 32;
} sSTM32F302_FLASH_AR;

typedef union {
    sSTM32F302_FLASH_AR Bit;
    unsigned long  All;
} uSTM32F302_FLASH_AR;

#define STM32F302_FLASH_OBR_RESET_VALUE 0xFFFFFF02
typedef struct {
    unsigned long OPTERR : 1;
    unsigned long LEVEL1_PROT : 1;
    unsigned long LEVEL2_PROT : 1;
    unsigned long Res0 : 5;
    unsigned long WDG_SW : 1;
    unsigned long nRST_STOP : 1;
    unsigned long nRST_STDBY : 1;
    unsigned long Res1 : 1;
    unsigned long BOOT1 : 1;
    unsigned long VDDA_MONITOR : 1;
    unsigned long SRAM_PARITY_CHECK : 1;
    unsigned long Res2 : 1;
    unsigned long Data0 : 8;
    unsigned long Data1 : 8;
} sSTM32F302_FLASH_OBR;

typedef union {
    sSTM32F302_FLASH_OBR Bit;
    unsigned long  All;
} uSTM32F302_FLASH_OBR;

#define STM32F302_FLASH_WRPR_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long WRP : 32;
} sSTM32F302_FLASH_WRPR;

typedef union {
    sSTM32F302_FLASH_WRPR Bit;
    unsigned long  All;
} uSTM32F302_FLASH_WRPR;

typedef struct {
    uSTM32F302_FLASH_ACR STM32F302_FLASH_ACR; // Offset: 0x0
    uSTM32F302_FLASH_KEYR STM32F302_FLASH_KEYR; // Offset: 0x4
    uSTM32F302_FLASH_OPTKEYR STM32F302_FLASH_OPTKEYR; // Offset: 0x8
    uSTM32F302_FLASH_SR STM32F302_FLASH_SR; // Offset: 0xc
    uSTM32F302_FLASH_CR STM32F302_FLASH_CR; // Offset: 0x10
    uSTM32F302_FLASH_AR STM32F302_FLASH_AR; // Offset: 0x14
    unsigned long Reserved0;
    uSTM32F302_FLASH_OBR STM32F302_FLASH_OBR; // Offset: 0x1c
    uSTM32F302_FLASH_WRPR STM32F302_FLASH_WRPR; // Offset: 0x20
} sSTM32F302_FLASH;

