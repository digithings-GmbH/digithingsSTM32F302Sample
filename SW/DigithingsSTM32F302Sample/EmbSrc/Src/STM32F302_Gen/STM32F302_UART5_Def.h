// Base Addres of UART5 = 0x40005000

#define STM32F302_UART5_CR1_RESET_VALUE 0x0000
typedef struct {
    unsigned long UE : 1;
    unsigned long UESM : 1;
    unsigned long RE : 1;
    unsigned long TE : 1;
    unsigned long IDLEIE : 1;
    unsigned long RXNEIE : 1;
    unsigned long TCIE : 1;
    unsigned long TXEIE : 1;
    unsigned long PEIE : 1;
    unsigned long PS : 1;
    unsigned long PCE : 1;
    unsigned long WAKE : 1;
    unsigned long M : 1;
    unsigned long MME : 1;
    unsigned long CMIE : 1;
    unsigned long OVER8 : 1;
    unsigned long DEDT : 5;
    unsigned long DEAT : 5;
    unsigned long RTOIE : 1;
    unsigned long EOBIE : 1;
    unsigned long Res0 : 4;
} sSTM32F302_UART5_CR1;

typedef union {
    sSTM32F302_UART5_CR1 Bit;
    unsigned long  All;
} uSTM32F302_UART5_CR1;

#define STM32F302_UART5_CR2_RESET_VALUE 0x0000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long ADDM7 : 1;
    unsigned long LBDL : 1;
    unsigned long LBDIE : 1;
    unsigned long Res1 : 1;
    unsigned long LBCL : 1;
    unsigned long CPHA : 1;
    unsigned long CPOL : 1;
    unsigned long CLKEN : 1;
    unsigned long STOP : 2;
    unsigned long LINEN : 1;
    unsigned long SWAP : 1;
    unsigned long RXINV : 1;
    unsigned long TXINV : 1;
    unsigned long DATAINV : 1;
    unsigned long MSBFIRST : 1;
    unsigned long ABREN : 1;
    unsigned long ABRMOD : 2;
    unsigned long RTOEN : 1;
    unsigned long ADD0 : 4;
    unsigned long ADD4 : 4;
} sSTM32F302_UART5_CR2;

typedef union {
    sSTM32F302_UART5_CR2 Bit;
    unsigned long  All;
} uSTM32F302_UART5_CR2;

#define STM32F302_UART5_CR3_RESET_VALUE 0x0000
typedef struct {
    unsigned long EIE : 1;
    unsigned long IREN : 1;
    unsigned long IRLP : 1;
    unsigned long HDSEL : 1;
    unsigned long NACK : 1;
    unsigned long SCEN : 1;
    unsigned long DMAR : 1;
    unsigned long DMAT : 1;
    unsigned long RTSE : 1;
    unsigned long CTSE : 1;
    unsigned long CTSIE : 1;
    unsigned long ONEBIT : 1;
    unsigned long OVRDIS : 1;
    unsigned long DDRE : 1;
    unsigned long DEM : 1;
    unsigned long DEP : 1;
    unsigned long Res0 : 1;
    unsigned long SCARCNT : 3;
    unsigned long WUS : 2;
    unsigned long WUFIE : 1;
    unsigned long Res1 : 9;
} sSTM32F302_UART5_CR3;

typedef union {
    sSTM32F302_UART5_CR3 Bit;
    unsigned long  All;
} uSTM32F302_UART5_CR3;

#define STM32F302_UART5_BRR_RESET_VALUE 0x0000
typedef struct {
    unsigned long DIV_Fraction : 4;
    unsigned long DIV_Mantissa : 12;
    unsigned long Res0 : 16;
} sSTM32F302_UART5_BRR;

typedef union {
    sSTM32F302_UART5_BRR Bit;
    unsigned long  All;
} uSTM32F302_UART5_BRR;

#define STM32F302_UART5_GTPR_RESET_VALUE 0x0000
typedef struct {
    unsigned long PSC : 8;
    unsigned long GT : 8;
    unsigned long Res0 : 16;
} sSTM32F302_UART5_GTPR;

typedef union {
    sSTM32F302_UART5_GTPR Bit;
    unsigned long  All;
} uSTM32F302_UART5_GTPR;

#define STM32F302_UART5_RTOR_RESET_VALUE 0x0000
typedef struct {
    unsigned long RTO : 24;
    unsigned long BLEN : 8;
} sSTM32F302_UART5_RTOR;

typedef union {
    sSTM32F302_UART5_RTOR Bit;
    unsigned long  All;
} uSTM32F302_UART5_RTOR;

#define STM32F302_UART5_RQR_RESET_VALUE 0x0000
typedef struct {
    unsigned long ABRRQ : 1;
    unsigned long SBKRQ : 1;
    unsigned long MMRQ : 1;
    unsigned long RXFRQ : 1;
    unsigned long TXFRQ : 1;
    unsigned long Res0 : 27;
} sSTM32F302_UART5_RQR;

typedef union {
    sSTM32F302_UART5_RQR Bit;
    unsigned long  All;
} uSTM32F302_UART5_RQR;

#define STM32F302_UART5_ISR_RESET_VALUE 0x00C0
typedef struct {
    unsigned long PE : 1;
    unsigned long FE : 1;
    unsigned long NF : 1;
    unsigned long ORE : 1;
    unsigned long IDLE : 1;
    unsigned long RXNE : 1;
    unsigned long TC : 1;
    unsigned long TXE : 1;
    unsigned long LBDF : 1;
    unsigned long CTSIF : 1;
    unsigned long CTS : 1;
    unsigned long RTOF : 1;
    unsigned long EOBF : 1;
    unsigned long Res0 : 1;
    unsigned long ABRE : 1;
    unsigned long ABRF : 1;
    unsigned long BUSY : 1;
    unsigned long CMF : 1;
    unsigned long SBKF : 1;
    unsigned long RWU : 1;
    unsigned long WUF : 1;
    unsigned long TEACK : 1;
    unsigned long REACK : 1;
    unsigned long Res1 : 9;
} sSTM32F302_UART5_ISR;

typedef union {
    sSTM32F302_UART5_ISR Bit;
    unsigned long  All;
} uSTM32F302_UART5_ISR;

#define STM32F302_UART5_ICR_RESET_VALUE 0x0000
typedef struct {
    unsigned long PECF : 1;
    unsigned long FECF : 1;
    unsigned long NCF : 1;
    unsigned long ORECF : 1;
    unsigned long IDLECF : 1;
    unsigned long Res0 : 1;
    unsigned long TCCF : 1;
    unsigned long Res1 : 1;
    unsigned long LBDCF : 1;
    unsigned long CTSCF : 1;
    unsigned long Res2 : 1;
    unsigned long RTOCF : 1;
    unsigned long EOBCF : 1;
    unsigned long Res3 : 4;
    unsigned long CMCF : 1;
    unsigned long Res4 : 2;
    unsigned long WUCF : 1;
    unsigned long Res5 : 11;
} sSTM32F302_UART5_ICR;

typedef union {
    sSTM32F302_UART5_ICR Bit;
    unsigned long  All;
} uSTM32F302_UART5_ICR;

#define STM32F302_UART5_RDR_RESET_VALUE 0x0000
typedef struct {
    unsigned long RDR : 9;
    unsigned long Res0 : 23;
} sSTM32F302_UART5_RDR;

typedef union {
    sSTM32F302_UART5_RDR Bit;
    unsigned long  All;
} uSTM32F302_UART5_RDR;

#define STM32F302_UART5_TDR_RESET_VALUE 0x0000
typedef struct {
    unsigned long TDR : 9;
    unsigned long Res0 : 23;
} sSTM32F302_UART5_TDR;

typedef union {
    sSTM32F302_UART5_TDR Bit;
    unsigned long  All;
} uSTM32F302_UART5_TDR;

typedef struct {
    uSTM32F302_UART5_CR1 STM32F302_UART5_CR1; // Offset: 0x0
    uSTM32F302_UART5_CR2 STM32F302_UART5_CR2; // Offset: 0x4
    uSTM32F302_UART5_CR3 STM32F302_UART5_CR3; // Offset: 0x8
    uSTM32F302_UART5_BRR STM32F302_UART5_BRR; // Offset: 0xc
    uSTM32F302_UART5_GTPR STM32F302_UART5_GTPR; // Offset: 0x10
    uSTM32F302_UART5_RTOR STM32F302_UART5_RTOR; // Offset: 0x14
    uSTM32F302_UART5_RQR STM32F302_UART5_RQR; // Offset: 0x18
    uSTM32F302_UART5_ISR STM32F302_UART5_ISR; // Offset: 0x1c
    uSTM32F302_UART5_ICR STM32F302_UART5_ICR; // Offset: 0x20
    uSTM32F302_UART5_RDR STM32F302_UART5_RDR; // Offset: 0x24
    uSTM32F302_UART5_TDR STM32F302_UART5_TDR; // Offset: 0x28
} sSTM32F302_UART5;

