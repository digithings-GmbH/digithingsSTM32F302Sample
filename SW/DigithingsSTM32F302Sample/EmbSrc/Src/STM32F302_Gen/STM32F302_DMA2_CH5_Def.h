// Base Addres of DMA2_CH5 = 0x40020400

#define STM32F302_DMA2_CH5_ISR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long GIF1 : 1;
    unsigned long TCIF1 : 1;
    unsigned long HTIF1 : 1;
    unsigned long TEIF1 : 1;
    unsigned long GIF2 : 1;
    unsigned long TCIF2 : 1;
    unsigned long HTIF2 : 1;
    unsigned long TEIF2 : 1;
    unsigned long GIF3 : 1;
    unsigned long TCIF3 : 1;
    unsigned long HTIF3 : 1;
    unsigned long TEIF3 : 1;
    unsigned long GIF4 : 1;
    unsigned long TCIF4 : 1;
    unsigned long HTIF4 : 1;
    unsigned long TEIF4 : 1;
    unsigned long GIF5 : 1;
    unsigned long TCIF5 : 1;
    unsigned long HTIF5 : 1;
    unsigned long TEIF5 : 1;
    unsigned long GIF6 : 1;
    unsigned long TCIF6 : 1;
    unsigned long HTIF6 : 1;
    unsigned long TEIF6 : 1;
    unsigned long GIF7 : 1;
    unsigned long TCIF7 : 1;
    unsigned long HTIF7 : 1;
    unsigned long TEIF7 : 1;
    unsigned long Res0 : 4;
} sSTM32F302_DMA2_CH5_ISR;

typedef union {
    sSTM32F302_DMA2_CH5_ISR Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_ISR;

#define STM32F302_DMA2_CH5_IFCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CGIF1 : 1;
    unsigned long CTCIF1 : 1;
    unsigned long CHTIF1 : 1;
    unsigned long CTEIF1 : 1;
    unsigned long CGIF2 : 1;
    unsigned long CTCIF2 : 1;
    unsigned long CHTIF2 : 1;
    unsigned long CTEIF2 : 1;
    unsigned long CGIF3 : 1;
    unsigned long CTCIF3 : 1;
    unsigned long CHTIF3 : 1;
    unsigned long CTEIF3 : 1;
    unsigned long CGIF4 : 1;
    unsigned long CTCIF4 : 1;
    unsigned long CHTIF4 : 1;
    unsigned long CTEIF4 : 1;
    unsigned long CGIF5 : 1;
    unsigned long CTCIF5 : 1;
    unsigned long CHTIF5 : 1;
    unsigned long CTEIF5 : 1;
    unsigned long CGIF6 : 1;
    unsigned long CTCIF6 : 1;
    unsigned long CHTIF6 : 1;
    unsigned long CTEIF6 : 1;
    unsigned long CGIF7 : 1;
    unsigned long CTCIF7 : 1;
    unsigned long CHTIF7 : 1;
    unsigned long CTEIF7 : 1;
    unsigned long Res0 : 4;
} sSTM32F302_DMA2_CH5_IFCR;

typedef union {
    sSTM32F302_DMA2_CH5_IFCR Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_IFCR;

#define STM32F302_DMA2_CH5_CCR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32F302_DMA2_CH5_CCR1;

typedef union {
    sSTM32F302_DMA2_CH5_CCR1 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CCR1;

#define STM32F302_DMA2_CH5_CNDTR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32F302_DMA2_CH5_CNDTR1;

typedef union {
    sSTM32F302_DMA2_CH5_CNDTR1 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CNDTR1;

#define STM32F302_DMA2_CH5_CPAR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32F302_DMA2_CH5_CPAR1;

typedef union {
    sSTM32F302_DMA2_CH5_CPAR1 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CPAR1;

#define STM32F302_DMA2_CH5_CMAR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32F302_DMA2_CH5_CMAR1;

typedef union {
    sSTM32F302_DMA2_CH5_CMAR1 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CMAR1;

#define STM32F302_DMA2_CH5_CCR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32F302_DMA2_CH5_CCR2;

typedef union {
    sSTM32F302_DMA2_CH5_CCR2 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CCR2;

#define STM32F302_DMA2_CH5_CNDTR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32F302_DMA2_CH5_CNDTR2;

typedef union {
    sSTM32F302_DMA2_CH5_CNDTR2 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CNDTR2;

#define STM32F302_DMA2_CH5_CPAR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32F302_DMA2_CH5_CPAR2;

typedef union {
    sSTM32F302_DMA2_CH5_CPAR2 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CPAR2;

#define STM32F302_DMA2_CH5_CMAR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32F302_DMA2_CH5_CMAR2;

typedef union {
    sSTM32F302_DMA2_CH5_CMAR2 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CMAR2;

#define STM32F302_DMA2_CH5_CCR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32F302_DMA2_CH5_CCR3;

typedef union {
    sSTM32F302_DMA2_CH5_CCR3 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CCR3;

#define STM32F302_DMA2_CH5_CNDTR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32F302_DMA2_CH5_CNDTR3;

typedef union {
    sSTM32F302_DMA2_CH5_CNDTR3 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CNDTR3;

#define STM32F302_DMA2_CH5_CPAR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32F302_DMA2_CH5_CPAR3;

typedef union {
    sSTM32F302_DMA2_CH5_CPAR3 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CPAR3;

#define STM32F302_DMA2_CH5_CMAR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32F302_DMA2_CH5_CMAR3;

typedef union {
    sSTM32F302_DMA2_CH5_CMAR3 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CMAR3;

#define STM32F302_DMA2_CH5_CCR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32F302_DMA2_CH5_CCR4;

typedef union {
    sSTM32F302_DMA2_CH5_CCR4 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CCR4;

#define STM32F302_DMA2_CH5_CNDTR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32F302_DMA2_CH5_CNDTR4;

typedef union {
    sSTM32F302_DMA2_CH5_CNDTR4 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CNDTR4;

#define STM32F302_DMA2_CH5_CPAR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32F302_DMA2_CH5_CPAR4;

typedef union {
    sSTM32F302_DMA2_CH5_CPAR4 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CPAR4;

#define STM32F302_DMA2_CH5_CMAR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32F302_DMA2_CH5_CMAR4;

typedef union {
    sSTM32F302_DMA2_CH5_CMAR4 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CMAR4;

#define STM32F302_DMA2_CH5_CCR5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32F302_DMA2_CH5_CCR5;

typedef union {
    sSTM32F302_DMA2_CH5_CCR5 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CCR5;

#define STM32F302_DMA2_CH5_CNDTR5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32F302_DMA2_CH5_CNDTR5;

typedef union {
    sSTM32F302_DMA2_CH5_CNDTR5 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CNDTR5;

#define STM32F302_DMA2_CH5_CPAR5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32F302_DMA2_CH5_CPAR5;

typedef union {
    sSTM32F302_DMA2_CH5_CPAR5 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CPAR5;

#define STM32F302_DMA2_CH5_CMAR5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32F302_DMA2_CH5_CMAR5;

typedef union {
    sSTM32F302_DMA2_CH5_CMAR5 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CMAR5;

#define STM32F302_DMA2_CH5_CCR6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32F302_DMA2_CH5_CCR6;

typedef union {
    sSTM32F302_DMA2_CH5_CCR6 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CCR6;

#define STM32F302_DMA2_CH5_CNDTR6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32F302_DMA2_CH5_CNDTR6;

typedef union {
    sSTM32F302_DMA2_CH5_CNDTR6 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CNDTR6;

#define STM32F302_DMA2_CH5_CPAR6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32F302_DMA2_CH5_CPAR6;

typedef union {
    sSTM32F302_DMA2_CH5_CPAR6 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CPAR6;

#define STM32F302_DMA2_CH5_CMAR6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32F302_DMA2_CH5_CMAR6;

typedef union {
    sSTM32F302_DMA2_CH5_CMAR6 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CMAR6;

#define STM32F302_DMA2_CH5_CCR7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32F302_DMA2_CH5_CCR7;

typedef union {
    sSTM32F302_DMA2_CH5_CCR7 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CCR7;

#define STM32F302_DMA2_CH5_CNDTR7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32F302_DMA2_CH5_CNDTR7;

typedef union {
    sSTM32F302_DMA2_CH5_CNDTR7 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CNDTR7;

#define STM32F302_DMA2_CH5_CPAR7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32F302_DMA2_CH5_CPAR7;

typedef union {
    sSTM32F302_DMA2_CH5_CPAR7 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CPAR7;

#define STM32F302_DMA2_CH5_CMAR7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32F302_DMA2_CH5_CMAR7;

typedef union {
    sSTM32F302_DMA2_CH5_CMAR7 Bit;
    unsigned long  All;
} uSTM32F302_DMA2_CH5_CMAR7;

typedef struct {
    uSTM32F302_DMA2_CH5_ISR STM32F302_DMA2_CH5_ISR; // Offset: 0x0
    uSTM32F302_DMA2_CH5_IFCR STM32F302_DMA2_CH5_IFCR; // Offset: 0x4
    uSTM32F302_DMA2_CH5_CCR1 STM32F302_DMA2_CH5_CCR1; // Offset: 0x8
    uSTM32F302_DMA2_CH5_CNDTR1 STM32F302_DMA2_CH5_CNDTR1; // Offset: 0xc
    uSTM32F302_DMA2_CH5_CPAR1 STM32F302_DMA2_CH5_CPAR1; // Offset: 0x10
    uSTM32F302_DMA2_CH5_CMAR1 STM32F302_DMA2_CH5_CMAR1; // Offset: 0x14
    unsigned long Reserved0;
    uSTM32F302_DMA2_CH5_CCR2 STM32F302_DMA2_CH5_CCR2; // Offset: 0x1c
    uSTM32F302_DMA2_CH5_CNDTR2 STM32F302_DMA2_CH5_CNDTR2; // Offset: 0x20
    uSTM32F302_DMA2_CH5_CPAR2 STM32F302_DMA2_CH5_CPAR2; // Offset: 0x24
    uSTM32F302_DMA2_CH5_CMAR2 STM32F302_DMA2_CH5_CMAR2; // Offset: 0x28
    unsigned long Reserved1;
    uSTM32F302_DMA2_CH5_CCR3 STM32F302_DMA2_CH5_CCR3; // Offset: 0x30
    uSTM32F302_DMA2_CH5_CNDTR3 STM32F302_DMA2_CH5_CNDTR3; // Offset: 0x34
    uSTM32F302_DMA2_CH5_CPAR3 STM32F302_DMA2_CH5_CPAR3; // Offset: 0x38
    uSTM32F302_DMA2_CH5_CMAR3 STM32F302_DMA2_CH5_CMAR3; // Offset: 0x3c
    unsigned long Reserved2;
    uSTM32F302_DMA2_CH5_CCR4 STM32F302_DMA2_CH5_CCR4; // Offset: 0x44
    uSTM32F302_DMA2_CH5_CNDTR4 STM32F302_DMA2_CH5_CNDTR4; // Offset: 0x48
    uSTM32F302_DMA2_CH5_CPAR4 STM32F302_DMA2_CH5_CPAR4; // Offset: 0x4c
    uSTM32F302_DMA2_CH5_CMAR4 STM32F302_DMA2_CH5_CMAR4; // Offset: 0x50
    unsigned long Reserved3;
    uSTM32F302_DMA2_CH5_CCR5 STM32F302_DMA2_CH5_CCR5; // Offset: 0x58
    uSTM32F302_DMA2_CH5_CNDTR5 STM32F302_DMA2_CH5_CNDTR5; // Offset: 0x5c
    uSTM32F302_DMA2_CH5_CPAR5 STM32F302_DMA2_CH5_CPAR5; // Offset: 0x60
    uSTM32F302_DMA2_CH5_CMAR5 STM32F302_DMA2_CH5_CMAR5; // Offset: 0x64
    unsigned long Reserved4;
    uSTM32F302_DMA2_CH5_CCR6 STM32F302_DMA2_CH5_CCR6; // Offset: 0x6c
    uSTM32F302_DMA2_CH5_CNDTR6 STM32F302_DMA2_CH5_CNDTR6; // Offset: 0x70
    uSTM32F302_DMA2_CH5_CPAR6 STM32F302_DMA2_CH5_CPAR6; // Offset: 0x74
    uSTM32F302_DMA2_CH5_CMAR6 STM32F302_DMA2_CH5_CMAR6; // Offset: 0x78
    unsigned long Reserved5;
    uSTM32F302_DMA2_CH5_CCR7 STM32F302_DMA2_CH5_CCR7; // Offset: 0x80
    uSTM32F302_DMA2_CH5_CNDTR7 STM32F302_DMA2_CH5_CNDTR7; // Offset: 0x84
    uSTM32F302_DMA2_CH5_CPAR7 STM32F302_DMA2_CH5_CPAR7; // Offset: 0x88
    uSTM32F302_DMA2_CH5_CMAR7 STM32F302_DMA2_CH5_CMAR7; // Offset: 0x8c
} sSTM32F302_DMA2_CH5;

