// Base Addres of USB_LP = 0x40005C00

#define STM32F302_USB_LP_USB_EP0R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EA : 4;
    unsigned long STAT_TX : 2;
    unsigned long DTOG_TX : 1;
    unsigned long CTR_TX : 1;
    unsigned long EP_KIND : 1;
    unsigned long EP_TYPE : 2;
    unsigned long SETUP : 1;
    unsigned long STAT_RX : 2;
    unsigned long DTOG_RX : 1;
    unsigned long CTR_RX : 1;
    unsigned long Res0 : 16;
} sSTM32F302_USB_LP_USB_EP0R;

typedef union {
    sSTM32F302_USB_LP_USB_EP0R Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_USB_EP0R;

#define STM32F302_USB_LP_USB_EP1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EA : 4;
    unsigned long STAT_TX : 2;
    unsigned long DTOG_TX : 1;
    unsigned long CTR_TX : 1;
    unsigned long EP_KIND : 1;
    unsigned long EP_TYPE : 2;
    unsigned long SETUP : 1;
    unsigned long STAT_RX : 2;
    unsigned long DTOG_RX : 1;
    unsigned long CTR_RX : 1;
    unsigned long Res0 : 16;
} sSTM32F302_USB_LP_USB_EP1R;

typedef union {
    sSTM32F302_USB_LP_USB_EP1R Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_USB_EP1R;

#define STM32F302_USB_LP_USB_EP2R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EA : 4;
    unsigned long STAT_TX : 2;
    unsigned long DTOG_TX : 1;
    unsigned long CTR_TX : 1;
    unsigned long EP_KIND : 1;
    unsigned long EP_TYPE : 2;
    unsigned long SETUP : 1;
    unsigned long STAT_RX : 2;
    unsigned long DTOG_RX : 1;
    unsigned long CTR_RX : 1;
    unsigned long Res0 : 16;
} sSTM32F302_USB_LP_USB_EP2R;

typedef union {
    sSTM32F302_USB_LP_USB_EP2R Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_USB_EP2R;

#define STM32F302_USB_LP_USB_EP3R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EA : 4;
    unsigned long STAT_TX : 2;
    unsigned long DTOG_TX : 1;
    unsigned long CTR_TX : 1;
    unsigned long EP_KIND : 1;
    unsigned long EP_TYPE : 2;
    unsigned long SETUP : 1;
    unsigned long STAT_RX : 2;
    unsigned long DTOG_RX : 1;
    unsigned long CTR_RX : 1;
    unsigned long Res0 : 16;
} sSTM32F302_USB_LP_USB_EP3R;

typedef union {
    sSTM32F302_USB_LP_USB_EP3R Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_USB_EP3R;

#define STM32F302_USB_LP_USB_EP4R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EA : 4;
    unsigned long STAT_TX : 2;
    unsigned long DTOG_TX : 1;
    unsigned long CTR_TX : 1;
    unsigned long EP_KIND : 1;
    unsigned long EP_TYPE : 2;
    unsigned long SETUP : 1;
    unsigned long STAT_RX : 2;
    unsigned long DTOG_RX : 1;
    unsigned long CTR_RX : 1;
    unsigned long Res0 : 16;
} sSTM32F302_USB_LP_USB_EP4R;

typedef union {
    sSTM32F302_USB_LP_USB_EP4R Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_USB_EP4R;

#define STM32F302_USB_LP_USB_EP5R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EA : 4;
    unsigned long STAT_TX : 2;
    unsigned long DTOG_TX : 1;
    unsigned long CTR_TX : 1;
    unsigned long EP_KIND : 1;
    unsigned long EP_TYPE : 2;
    unsigned long SETUP : 1;
    unsigned long STAT_RX : 2;
    unsigned long DTOG_RX : 1;
    unsigned long CTR_RX : 1;
    unsigned long Res0 : 16;
} sSTM32F302_USB_LP_USB_EP5R;

typedef union {
    sSTM32F302_USB_LP_USB_EP5R Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_USB_EP5R;

#define STM32F302_USB_LP_USB_EP6R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EA : 4;
    unsigned long STAT_TX : 2;
    unsigned long DTOG_TX : 1;
    unsigned long CTR_TX : 1;
    unsigned long EP_KIND : 1;
    unsigned long EP_TYPE : 2;
    unsigned long SETUP : 1;
    unsigned long STAT_RX : 2;
    unsigned long DTOG_RX : 1;
    unsigned long CTR_RX : 1;
    unsigned long Res0 : 16;
} sSTM32F302_USB_LP_USB_EP6R;

typedef union {
    sSTM32F302_USB_LP_USB_EP6R Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_USB_EP6R;

#define STM32F302_USB_LP_USB_EP7R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EA : 4;
    unsigned long STAT_TX : 2;
    unsigned long DTOG_TX : 1;
    unsigned long CTR_TX : 1;
    unsigned long EP_KIND : 1;
    unsigned long EP_TYPE : 2;
    unsigned long SETUP : 1;
    unsigned long STAT_RX : 2;
    unsigned long DTOG_RX : 1;
    unsigned long CTR_RX : 1;
    unsigned long Res0 : 16;
} sSTM32F302_USB_LP_USB_EP7R;

typedef union {
    sSTM32F302_USB_LP_USB_EP7R Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_USB_EP7R;

#define STM32F302_USB_LP_USB_CNTR_RESET_VALUE 0x00000003
typedef struct {
    unsigned long FRES : 1;
    unsigned long PDWN : 1;
    unsigned long LPMODE : 1;
    unsigned long FSUSP : 1;
    unsigned long RESUME : 1;
    unsigned long Res0 : 3;
    unsigned long ESOFM : 1;
    unsigned long SOFM : 1;
    unsigned long RESETM : 1;
    unsigned long SUSPM : 1;
    unsigned long WKUPM : 1;
    unsigned long ERRM : 1;
    unsigned long PMAOVRM : 1;
    unsigned long CTRM : 1;
    unsigned long Res1 : 16;
} sSTM32F302_USB_LP_USB_CNTR;

typedef union {
    sSTM32F302_USB_LP_USB_CNTR Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_USB_CNTR;

#define STM32F302_USB_LP_ISTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EP_ID : 4;
    unsigned long DIR : 1;
    unsigned long Res0 : 3;
    unsigned long ESOF : 1;
    unsigned long SOF : 1;
    unsigned long RESET : 1;
    unsigned long SUSP : 1;
    unsigned long WKUP : 1;
    unsigned long ERR : 1;
    unsigned long PMAOVR : 1;
    unsigned long CTR : 1;
    unsigned long Res1 : 16;
} sSTM32F302_USB_LP_ISTR;

typedef union {
    sSTM32F302_USB_LP_ISTR Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_ISTR;

#define STM32F302_USB_LP_FNR_RESET_VALUE 0x0000
typedef struct {
    unsigned long FN : 11;
    unsigned long LSOF : 2;
    unsigned long LCK : 1;
    unsigned long RXDM : 1;
    unsigned long RXDP : 1;
    unsigned long Res0 : 16;
} sSTM32F302_USB_LP_FNR;

typedef union {
    sSTM32F302_USB_LP_FNR Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_FNR;

#define STM32F302_USB_LP_DADDR_RESET_VALUE 0x0000
typedef struct {
    unsigned long ADD : 1;
    unsigned long ADD1 : 1;
    unsigned long ADD2 : 1;
    unsigned long ADD3 : 1;
    unsigned long ADD4 : 1;
    unsigned long ADD5 : 1;
    unsigned long ADD6 : 1;
    unsigned long EF : 1;
    unsigned long Res0 : 24;
} sSTM32F302_USB_LP_DADDR;

typedef union {
    sSTM32F302_USB_LP_DADDR Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_DADDR;

#define STM32F302_USB_LP_BTABLE_RESET_VALUE 0x0000
typedef struct {
    unsigned long Res0 : 3;
    unsigned long BTABLE : 13;
    unsigned long Res1 : 16;
} sSTM32F302_USB_LP_BTABLE;

typedef union {
    sSTM32F302_USB_LP_BTABLE Bit;
    unsigned long  All;
} uSTM32F302_USB_LP_BTABLE;

typedef struct {
    uSTM32F302_USB_LP_USB_EP0R STM32F302_USB_LP_USB_EP0R; // Offset: 0x0
    uSTM32F302_USB_LP_USB_EP1R STM32F302_USB_LP_USB_EP1R; // Offset: 0x4
    uSTM32F302_USB_LP_USB_EP2R STM32F302_USB_LP_USB_EP2R; // Offset: 0x8
    uSTM32F302_USB_LP_USB_EP3R STM32F302_USB_LP_USB_EP3R; // Offset: 0xc
    uSTM32F302_USB_LP_USB_EP4R STM32F302_USB_LP_USB_EP4R; // Offset: 0x10
    uSTM32F302_USB_LP_USB_EP5R STM32F302_USB_LP_USB_EP5R; // Offset: 0x14
    uSTM32F302_USB_LP_USB_EP6R STM32F302_USB_LP_USB_EP6R; // Offset: 0x18
    uSTM32F302_USB_LP_USB_EP7R STM32F302_USB_LP_USB_EP7R; // Offset: 0x1c
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    uSTM32F302_USB_LP_USB_CNTR STM32F302_USB_LP_USB_CNTR; // Offset: 0x40
    uSTM32F302_USB_LP_ISTR STM32F302_USB_LP_ISTR; // Offset: 0x44
    uSTM32F302_USB_LP_FNR STM32F302_USB_LP_FNR; // Offset: 0x48
    uSTM32F302_USB_LP_DADDR STM32F302_USB_LP_DADDR; // Offset: 0x4c
    uSTM32F302_USB_LP_BTABLE STM32F302_USB_LP_BTABLE; // Offset: 0x50
} sSTM32F302_USB_LP;

