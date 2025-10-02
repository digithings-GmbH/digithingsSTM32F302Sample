// Base Addres of USB_WKUP_EXTI = 0x40010400

#define STM32F302_USB_WKUP_EXTI_IMR1_RESET_VALUE 0x1F800000
typedef struct {
    unsigned long MR0 : 1;
    unsigned long MR1 : 1;
    unsigned long MR2 : 1;
    unsigned long MR3 : 1;
    unsigned long MR4 : 1;
    unsigned long MR5 : 1;
    unsigned long MR6 : 1;
    unsigned long MR7 : 1;
    unsigned long MR8 : 1;
    unsigned long MR9 : 1;
    unsigned long MR10 : 1;
    unsigned long MR11 : 1;
    unsigned long MR12 : 1;
    unsigned long MR13 : 1;
    unsigned long MR14 : 1;
    unsigned long MR15 : 1;
    unsigned long MR16 : 1;
    unsigned long MR17 : 1;
    unsigned long MR18 : 1;
    unsigned long MR19 : 1;
    unsigned long MR20 : 1;
    unsigned long MR21 : 1;
    unsigned long MR22 : 1;
    unsigned long MR23 : 1;
    unsigned long MR24 : 1;
    unsigned long MR25 : 1;
    unsigned long MR26 : 1;
    unsigned long MR27 : 1;
    unsigned long MR28 : 1;
    unsigned long MR29 : 1;
    unsigned long MR30 : 1;
    unsigned long MR31 : 1;
} sSTM32F302_USB_WKUP_EXTI_IMR1;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_IMR1 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_IMR1;

#define STM32F302_USB_WKUP_EXTI_EMR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MR0 : 1;
    unsigned long MR1 : 1;
    unsigned long MR2 : 1;
    unsigned long MR3 : 1;
    unsigned long MR4 : 1;
    unsigned long MR5 : 1;
    unsigned long MR6 : 1;
    unsigned long MR7 : 1;
    unsigned long MR8 : 1;
    unsigned long MR9 : 1;
    unsigned long MR10 : 1;
    unsigned long MR11 : 1;
    unsigned long MR12 : 1;
    unsigned long MR13 : 1;
    unsigned long MR14 : 1;
    unsigned long MR15 : 1;
    unsigned long MR16 : 1;
    unsigned long MR17 : 1;
    unsigned long MR18 : 1;
    unsigned long MR19 : 1;
    unsigned long MR20 : 1;
    unsigned long MR21 : 1;
    unsigned long MR22 : 1;
    unsigned long MR23 : 1;
    unsigned long MR24 : 1;
    unsigned long MR25 : 1;
    unsigned long MR26 : 1;
    unsigned long MR27 : 1;
    unsigned long MR28 : 1;
    unsigned long MR29 : 1;
    unsigned long MR30 : 1;
    unsigned long MR31 : 1;
} sSTM32F302_USB_WKUP_EXTI_EMR1;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_EMR1 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_EMR1;

#define STM32F302_USB_WKUP_EXTI_RTSR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TR0 : 1;
    unsigned long TR1 : 1;
    unsigned long TR2 : 1;
    unsigned long TR3 : 1;
    unsigned long TR4 : 1;
    unsigned long TR5 : 1;
    unsigned long TR6 : 1;
    unsigned long TR7 : 1;
    unsigned long TR8 : 1;
    unsigned long TR9 : 1;
    unsigned long TR10 : 1;
    unsigned long TR11 : 1;
    unsigned long TR12 : 1;
    unsigned long TR13 : 1;
    unsigned long TR14 : 1;
    unsigned long TR15 : 1;
    unsigned long TR16 : 1;
    unsigned long TR17 : 1;
    unsigned long TR18 : 1;
    unsigned long TR19 : 1;
    unsigned long TR20 : 1;
    unsigned long TR21 : 1;
    unsigned long TR22 : 1;
    unsigned long Res0 : 6;
    unsigned long TR29 : 1;
    unsigned long TR30 : 1;
    unsigned long TR31 : 1;
} sSTM32F302_USB_WKUP_EXTI_RTSR1;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_RTSR1 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_RTSR1;

#define STM32F302_USB_WKUP_EXTI_FTSR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TR0 : 1;
    unsigned long TR1 : 1;
    unsigned long TR2 : 1;
    unsigned long TR3 : 1;
    unsigned long TR4 : 1;
    unsigned long TR5 : 1;
    unsigned long TR6 : 1;
    unsigned long TR7 : 1;
    unsigned long TR8 : 1;
    unsigned long TR9 : 1;
    unsigned long TR10 : 1;
    unsigned long TR11 : 1;
    unsigned long TR12 : 1;
    unsigned long TR13 : 1;
    unsigned long TR14 : 1;
    unsigned long TR15 : 1;
    unsigned long TR16 : 1;
    unsigned long TR17 : 1;
    unsigned long TR18 : 1;
    unsigned long TR19 : 1;
    unsigned long TR20 : 1;
    unsigned long TR21 : 1;
    unsigned long TR22 : 1;
    unsigned long Res0 : 6;
    unsigned long TR29 : 1;
    unsigned long TR30 : 1;
    unsigned long TR31 : 1;
} sSTM32F302_USB_WKUP_EXTI_FTSR1;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_FTSR1 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_FTSR1;

#define STM32F302_USB_WKUP_EXTI_SWIER1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWIER0 : 1;
    unsigned long SWIER1 : 1;
    unsigned long SWIER2 : 1;
    unsigned long SWIER3 : 1;
    unsigned long SWIER4 : 1;
    unsigned long SWIER5 : 1;
    unsigned long SWIER6 : 1;
    unsigned long SWIER7 : 1;
    unsigned long SWIER8 : 1;
    unsigned long SWIER9 : 1;
    unsigned long SWIER10 : 1;
    unsigned long SWIER11 : 1;
    unsigned long SWIER12 : 1;
    unsigned long SWIER13 : 1;
    unsigned long SWIER14 : 1;
    unsigned long SWIER15 : 1;
    unsigned long SWIER16 : 1;
    unsigned long SWIER17 : 1;
    unsigned long SWIER18 : 1;
    unsigned long SWIER19 : 1;
    unsigned long SWIER20 : 1;
    unsigned long SWIER21 : 1;
    unsigned long SWIER22 : 1;
    unsigned long Res0 : 6;
    unsigned long SWIER29 : 1;
    unsigned long SWIER30 : 1;
    unsigned long SWIER31 : 1;
} sSTM32F302_USB_WKUP_EXTI_SWIER1;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_SWIER1 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_SWIER1;

#define STM32F302_USB_WKUP_EXTI_PR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PR0 : 1;
    unsigned long PR1 : 1;
    unsigned long PR2 : 1;
    unsigned long PR3 : 1;
    unsigned long PR4 : 1;
    unsigned long PR5 : 1;
    unsigned long PR6 : 1;
    unsigned long PR7 : 1;
    unsigned long PR8 : 1;
    unsigned long PR9 : 1;
    unsigned long PR10 : 1;
    unsigned long PR11 : 1;
    unsigned long PR12 : 1;
    unsigned long PR13 : 1;
    unsigned long PR14 : 1;
    unsigned long PR15 : 1;
    unsigned long PR16 : 1;
    unsigned long PR17 : 1;
    unsigned long PR18 : 1;
    unsigned long PR19 : 1;
    unsigned long PR20 : 1;
    unsigned long PR21 : 1;
    unsigned long PR22 : 1;
    unsigned long Res0 : 6;
    unsigned long PR29 : 1;
    unsigned long PR30 : 1;
    unsigned long PR31 : 1;
} sSTM32F302_USB_WKUP_EXTI_PR1;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_PR1 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_PR1;

#define STM32F302_USB_WKUP_EXTI_IMR2_RESET_VALUE 0xFFFFFFFC
typedef struct {
    unsigned long MR32 : 1;
    unsigned long MR33 : 1;
    unsigned long MR34 : 1;
    unsigned long MR35 : 1;
    unsigned long Res0 : 28;
} sSTM32F302_USB_WKUP_EXTI_IMR2;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_IMR2 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_IMR2;

#define STM32F302_USB_WKUP_EXTI_EMR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MR32 : 1;
    unsigned long MR33 : 1;
    unsigned long MR34 : 1;
    unsigned long MR35 : 1;
    unsigned long Res0 : 28;
} sSTM32F302_USB_WKUP_EXTI_EMR2;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_EMR2 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_EMR2;

#define STM32F302_USB_WKUP_EXTI_RTSR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TR32 : 1;
    unsigned long TR33 : 1;
    unsigned long Res0 : 30;
} sSTM32F302_USB_WKUP_EXTI_RTSR2;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_RTSR2 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_RTSR2;

#define STM32F302_USB_WKUP_EXTI_FTSR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TR32 : 1;
    unsigned long TR33 : 1;
    unsigned long Res0 : 30;
} sSTM32F302_USB_WKUP_EXTI_FTSR2;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_FTSR2 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_FTSR2;

#define STM32F302_USB_WKUP_EXTI_SWIER2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWIER32 : 1;
    unsigned long SWIER33 : 1;
    unsigned long Res0 : 30;
} sSTM32F302_USB_WKUP_EXTI_SWIER2;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_SWIER2 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_SWIER2;

#define STM32F302_USB_WKUP_EXTI_PR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PR32 : 1;
    unsigned long PR33 : 1;
    unsigned long Res0 : 30;
} sSTM32F302_USB_WKUP_EXTI_PR2;

typedef union {
    sSTM32F302_USB_WKUP_EXTI_PR2 Bit;
    unsigned long  All;
} uSTM32F302_USB_WKUP_EXTI_PR2;

typedef struct {
    uSTM32F302_USB_WKUP_EXTI_IMR1 STM32F302_USB_WKUP_EXTI_IMR1; // Offset: 0x0
    uSTM32F302_USB_WKUP_EXTI_EMR1 STM32F302_USB_WKUP_EXTI_EMR1; // Offset: 0x4
    uSTM32F302_USB_WKUP_EXTI_RTSR1 STM32F302_USB_WKUP_EXTI_RTSR1; // Offset: 0x8
    uSTM32F302_USB_WKUP_EXTI_FTSR1 STM32F302_USB_WKUP_EXTI_FTSR1; // Offset: 0xc
    uSTM32F302_USB_WKUP_EXTI_SWIER1 STM32F302_USB_WKUP_EXTI_SWIER1; // Offset: 0x10
    uSTM32F302_USB_WKUP_EXTI_PR1 STM32F302_USB_WKUP_EXTI_PR1; // Offset: 0x14
    uSTM32F302_USB_WKUP_EXTI_IMR2 STM32F302_USB_WKUP_EXTI_IMR2; // Offset: 0x18
    uSTM32F302_USB_WKUP_EXTI_EMR2 STM32F302_USB_WKUP_EXTI_EMR2; // Offset: 0x1c
    uSTM32F302_USB_WKUP_EXTI_RTSR2 STM32F302_USB_WKUP_EXTI_RTSR2; // Offset: 0x20
    uSTM32F302_USB_WKUP_EXTI_FTSR2 STM32F302_USB_WKUP_EXTI_FTSR2; // Offset: 0x24
    uSTM32F302_USB_WKUP_EXTI_SWIER2 STM32F302_USB_WKUP_EXTI_SWIER2; // Offset: 0x28
    uSTM32F302_USB_WKUP_EXTI_PR2 STM32F302_USB_WKUP_EXTI_PR2; // Offset: 0x2c
} sSTM32F302_USB_WKUP_EXTI;

