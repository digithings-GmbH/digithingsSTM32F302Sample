// Base Addres of WWDG = 0x40002C00

#define STM32F302_WWDG_CR_RESET_VALUE 0x0000007F
typedef struct {
    unsigned long T : 7;
    unsigned long WDGA : 1;
    unsigned long Res0 : 24;
} sSTM32F302_WWDG_CR;

typedef union {
    sSTM32F302_WWDG_CR Bit;
    unsigned long  All;
} uSTM32F302_WWDG_CR;

#define STM32F302_WWDG_CFR_RESET_VALUE 0x0000007F
typedef struct {
    unsigned long W : 7;
    unsigned long WDGTB : 2;
    unsigned long EWI : 1;
    unsigned long Res0 : 22;
} sSTM32F302_WWDG_CFR;

typedef union {
    sSTM32F302_WWDG_CFR Bit;
    unsigned long  All;
} uSTM32F302_WWDG_CFR;

#define STM32F302_WWDG_SR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EWIF : 1;
    unsigned long Res0 : 31;
} sSTM32F302_WWDG_SR;

typedef union {
    sSTM32F302_WWDG_SR Bit;
    unsigned long  All;
} uSTM32F302_WWDG_SR;

typedef struct {
    uSTM32F302_WWDG_CR STM32F302_WWDG_CR; // Offset: 0x0
    uSTM32F302_WWDG_CFR STM32F302_WWDG_CFR; // Offset: 0x4
    uSTM32F302_WWDG_SR STM32F302_WWDG_SR; // Offset: 0x8
} sSTM32F302_WWDG;

