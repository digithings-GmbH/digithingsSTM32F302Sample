// Base Addres of IWDG = 0x40003000

#define STM32F302_IWDG_KR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long KEY : 16;
    unsigned long Res0 : 16;
} sSTM32F302_IWDG_KR;

typedef union {
    sSTM32F302_IWDG_KR Bit;
    unsigned long  All;
} uSTM32F302_IWDG_KR;

#define STM32F302_IWDG_PR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PR : 3;
    unsigned long Res0 : 29;
} sSTM32F302_IWDG_PR;

typedef union {
    sSTM32F302_IWDG_PR Bit;
    unsigned long  All;
} uSTM32F302_IWDG_PR;

#define STM32F302_IWDG_RLR_RESET_VALUE 0x00000FFF
typedef struct {
    unsigned long RL : 12;
    unsigned long Res0 : 20;
} sSTM32F302_IWDG_RLR;

typedef union {
    sSTM32F302_IWDG_RLR Bit;
    unsigned long  All;
} uSTM32F302_IWDG_RLR;

#define STM32F302_IWDG_SR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PVU : 1;
    unsigned long RVU : 1;
    unsigned long WVU : 1;
    unsigned long Res0 : 29;
} sSTM32F302_IWDG_SR;

typedef union {
    sSTM32F302_IWDG_SR Bit;
    unsigned long  All;
} uSTM32F302_IWDG_SR;

#define STM32F302_IWDG_WINR_RESET_VALUE 0x00000FFF
typedef struct {
    unsigned long WIN : 12;
    unsigned long Res0 : 20;
} sSTM32F302_IWDG_WINR;

typedef union {
    sSTM32F302_IWDG_WINR Bit;
    unsigned long  All;
} uSTM32F302_IWDG_WINR;

typedef struct {
    uSTM32F302_IWDG_KR STM32F302_IWDG_KR; // Offset: 0x0
    uSTM32F302_IWDG_PR STM32F302_IWDG_PR; // Offset: 0x4
    uSTM32F302_IWDG_RLR STM32F302_IWDG_RLR; // Offset: 0x8
    uSTM32F302_IWDG_SR STM32F302_IWDG_SR; // Offset: 0xc
    uSTM32F302_IWDG_WINR STM32F302_IWDG_WINR; // Offset: 0x10
} sSTM32F302_IWDG;

