// Base Addres of GPIOB = 0x48000400

#define STM32F302_GPIOB_MODER_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MODER0 : 2;
    unsigned long MODER1 : 2;
    unsigned long MODER2 : 2;
    unsigned long MODER3 : 2;
    unsigned long MODER4 : 2;
    unsigned long MODER5 : 2;
    unsigned long MODER6 : 2;
    unsigned long MODER7 : 2;
    unsigned long MODER8 : 2;
    unsigned long MODER9 : 2;
    unsigned long MODER10 : 2;
    unsigned long MODER11 : 2;
    unsigned long MODER12 : 2;
    unsigned long MODER13 : 2;
    unsigned long MODER14 : 2;
    unsigned long MODER15 : 2;
} sSTM32F302_GPIOB_MODER;

typedef union {
    sSTM32F302_GPIOB_MODER Bit;
    unsigned long  All;
} uSTM32F302_GPIOB_MODER;

#define STM32F302_GPIOB_OTYPER_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OT0 : 1;
    unsigned long OT1 : 1;
    unsigned long OT2 : 1;
    unsigned long OT3 : 1;
    unsigned long OT4 : 1;
    unsigned long OT5 : 1;
    unsigned long OT6 : 1;
    unsigned long OT7 : 1;
    unsigned long OT8 : 1;
    unsigned long OT9 : 1;
    unsigned long OT10 : 1;
    unsigned long OT11 : 1;
    unsigned long OT12 : 1;
    unsigned long OT13 : 1;
    unsigned long OT14 : 1;
    unsigned long OT15 : 1;
    unsigned long Res0 : 16;
} sSTM32F302_GPIOB_OTYPER;

typedef union {
    sSTM32F302_GPIOB_OTYPER Bit;
    unsigned long  All;
} uSTM32F302_GPIOB_OTYPER;

#define STM32F302_GPIOB_OSPEEDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OSPEEDR0 : 2;
    unsigned long OSPEEDR1 : 2;
    unsigned long OSPEEDR2 : 2;
    unsigned long OSPEEDR3 : 2;
    unsigned long OSPEEDR4 : 2;
    unsigned long OSPEEDR5 : 2;
    unsigned long OSPEEDR6 : 2;
    unsigned long OSPEEDR7 : 2;
    unsigned long OSPEEDR8 : 2;
    unsigned long OSPEEDR9 : 2;
    unsigned long OSPEEDR10 : 2;
    unsigned long OSPEEDR11 : 2;
    unsigned long OSPEEDR12 : 2;
    unsigned long OSPEEDR13 : 2;
    unsigned long OSPEEDR14 : 2;
    unsigned long OSPEEDR15 : 2;
} sSTM32F302_GPIOB_OSPEEDR;

typedef union {
    sSTM32F302_GPIOB_OSPEEDR Bit;
    unsigned long  All;
} uSTM32F302_GPIOB_OSPEEDR;

#define STM32F302_GPIOB_PUPDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PUPDR0 : 2;
    unsigned long PUPDR1 : 2;
    unsigned long PUPDR2 : 2;
    unsigned long PUPDR3 : 2;
    unsigned long PUPDR4 : 2;
    unsigned long PUPDR5 : 2;
    unsigned long PUPDR6 : 2;
    unsigned long PUPDR7 : 2;
    unsigned long PUPDR8 : 2;
    unsigned long PUPDR9 : 2;
    unsigned long PUPDR10 : 2;
    unsigned long PUPDR11 : 2;
    unsigned long PUPDR12 : 2;
    unsigned long PUPDR13 : 2;
    unsigned long PUPDR14 : 2;
    unsigned long PUPDR15 : 2;
} sSTM32F302_GPIOB_PUPDR;

typedef union {
    sSTM32F302_GPIOB_PUPDR Bit;
    unsigned long  All;
} uSTM32F302_GPIOB_PUPDR;

#define STM32F302_GPIOB_IDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IDR0 : 1;
    unsigned long IDR1 : 1;
    unsigned long IDR2 : 1;
    unsigned long IDR3 : 1;
    unsigned long IDR4 : 1;
    unsigned long IDR5 : 1;
    unsigned long IDR6 : 1;
    unsigned long IDR7 : 1;
    unsigned long IDR8 : 1;
    unsigned long IDR9 : 1;
    unsigned long IDR10 : 1;
    unsigned long IDR11 : 1;
    unsigned long IDR12 : 1;
    unsigned long IDR13 : 1;
    unsigned long IDR14 : 1;
    unsigned long IDR15 : 1;
    unsigned long Res0 : 16;
} sSTM32F302_GPIOB_IDR;

typedef union {
    sSTM32F302_GPIOB_IDR Bit;
    unsigned long  All;
} uSTM32F302_GPIOB_IDR;

#define STM32F302_GPIOB_ODR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ODR0 : 1;
    unsigned long ODR1 : 1;
    unsigned long ODR2 : 1;
    unsigned long ODR3 : 1;
    unsigned long ODR4 : 1;
    unsigned long ODR5 : 1;
    unsigned long ODR6 : 1;
    unsigned long ODR7 : 1;
    unsigned long ODR8 : 1;
    unsigned long ODR9 : 1;
    unsigned long ODR10 : 1;
    unsigned long ODR11 : 1;
    unsigned long ODR12 : 1;
    unsigned long ODR13 : 1;
    unsigned long ODR14 : 1;
    unsigned long ODR15 : 1;
    unsigned long Res0 : 16;
} sSTM32F302_GPIOB_ODR;

typedef union {
    sSTM32F302_GPIOB_ODR Bit;
    unsigned long  All;
} uSTM32F302_GPIOB_ODR;

#define STM32F302_GPIOB_BSRR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BS0 : 1;
    unsigned long BS1 : 1;
    unsigned long BS2 : 1;
    unsigned long BS3 : 1;
    unsigned long BS4 : 1;
    unsigned long BS5 : 1;
    unsigned long BS6 : 1;
    unsigned long BS7 : 1;
    unsigned long BS8 : 1;
    unsigned long BS9 : 1;
    unsigned long BS10 : 1;
    unsigned long BS11 : 1;
    unsigned long BS12 : 1;
    unsigned long BS13 : 1;
    unsigned long BS14 : 1;
    unsigned long BS15 : 1;
    unsigned long BR0 : 1;
    unsigned long BR1 : 1;
    unsigned long BR2 : 1;
    unsigned long BR3 : 1;
    unsigned long BR4 : 1;
    unsigned long BR5 : 1;
    unsigned long BR6 : 1;
    unsigned long BR7 : 1;
    unsigned long BR8 : 1;
    unsigned long BR9 : 1;
    unsigned long BR10 : 1;
    unsigned long BR11 : 1;
    unsigned long BR12 : 1;
    unsigned long BR13 : 1;
    unsigned long BR14 : 1;
    unsigned long BR15 : 1;
} sSTM32F302_GPIOB_BSRR;

typedef union {
    sSTM32F302_GPIOB_BSRR Bit;
    unsigned long  All;
} uSTM32F302_GPIOB_BSRR;

#define STM32F302_GPIOB_LCKR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LCK0 : 1;
    unsigned long LCK1 : 1;
    unsigned long LCK2 : 1;
    unsigned long LCK3 : 1;
    unsigned long LCK4 : 1;
    unsigned long LCK5 : 1;
    unsigned long LCK6 : 1;
    unsigned long LCK7 : 1;
    unsigned long LCK8 : 1;
    unsigned long LCK9 : 1;
    unsigned long LCK10 : 1;
    unsigned long LCK11 : 1;
    unsigned long LCK12 : 1;
    unsigned long LCK13 : 1;
    unsigned long LCK14 : 1;
    unsigned long LCK15 : 1;
    unsigned long LCKK : 1;
    unsigned long Res0 : 15;
} sSTM32F302_GPIOB_LCKR;

typedef union {
    sSTM32F302_GPIOB_LCKR Bit;
    unsigned long  All;
} uSTM32F302_GPIOB_LCKR;

#define STM32F302_GPIOB_AFRL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long AFRL0 : 4;
    unsigned long AFRL1 : 4;
    unsigned long AFRL2 : 4;
    unsigned long AFRL3 : 4;
    unsigned long AFRL4 : 4;
    unsigned long AFRL5 : 4;
    unsigned long AFRL6 : 4;
    unsigned long AFRL7 : 4;
} sSTM32F302_GPIOB_AFRL;

typedef union {
    sSTM32F302_GPIOB_AFRL Bit;
    unsigned long  All;
} uSTM32F302_GPIOB_AFRL;

#define STM32F302_GPIOB_AFRH_RESET_VALUE 0x00000000
typedef struct {
    unsigned long AFRH8 : 4;
    unsigned long AFRH9 : 4;
    unsigned long AFRH10 : 4;
    unsigned long AFRH11 : 4;
    unsigned long AFRH12 : 4;
    unsigned long AFRH13 : 4;
    unsigned long AFRH14 : 4;
    unsigned long AFRH15 : 4;
} sSTM32F302_GPIOB_AFRH;

typedef union {
    sSTM32F302_GPIOB_AFRH Bit;
    unsigned long  All;
} uSTM32F302_GPIOB_AFRH;

#define STM32F302_GPIOB_BRR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BR0 : 1;
    unsigned long BR1 : 1;
    unsigned long BR2 : 1;
    unsigned long BR3 : 1;
    unsigned long BR4 : 1;
    unsigned long BR5 : 1;
    unsigned long BR6 : 1;
    unsigned long BR7 : 1;
    unsigned long BR8 : 1;
    unsigned long BR9 : 1;
    unsigned long BR10 : 1;
    unsigned long BR11 : 1;
    unsigned long BR12 : 1;
    unsigned long BR13 : 1;
    unsigned long BR14 : 1;
    unsigned long BR15 : 1;
    unsigned long Res0 : 16;
} sSTM32F302_GPIOB_BRR;

typedef union {
    sSTM32F302_GPIOB_BRR Bit;
    unsigned long  All;
} uSTM32F302_GPIOB_BRR;

typedef struct {
    uSTM32F302_GPIOB_MODER STM32F302_GPIOB_MODER; // Offset: 0x0
    uSTM32F302_GPIOB_OTYPER STM32F302_GPIOB_OTYPER; // Offset: 0x4
    uSTM32F302_GPIOB_OSPEEDR STM32F302_GPIOB_OSPEEDR; // Offset: 0x8
    uSTM32F302_GPIOB_PUPDR STM32F302_GPIOB_PUPDR; // Offset: 0xc
    uSTM32F302_GPIOB_IDR STM32F302_GPIOB_IDR; // Offset: 0x10
    uSTM32F302_GPIOB_ODR STM32F302_GPIOB_ODR; // Offset: 0x14
    uSTM32F302_GPIOB_BSRR STM32F302_GPIOB_BSRR; // Offset: 0x18
    uSTM32F302_GPIOB_LCKR STM32F302_GPIOB_LCKR; // Offset: 0x1c
    uSTM32F302_GPIOB_AFRL STM32F302_GPIOB_AFRL; // Offset: 0x20
    uSTM32F302_GPIOB_AFRH STM32F302_GPIOB_AFRH; // Offset: 0x24
    uSTM32F302_GPIOB_BRR STM32F302_GPIOB_BRR; // Offset: 0x28
} sSTM32F302_GPIOB;

