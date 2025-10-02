// Base Addres of RTCAlarm = 0x40002800

#define STM32F302_RTCAlarm_CR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WCKSEL : 3;
    unsigned long TSEDGE : 1;
    unsigned long REFCKON : 1;
    unsigned long BYPSHAD : 1;
    unsigned long FMT : 1;
    unsigned long Res0 : 1;
    unsigned long ALRAE : 1;
    unsigned long ALRBE : 1;
    unsigned long WUTE : 1;
    unsigned long TSE : 1;
    unsigned long ALRAIE : 1;
    unsigned long ALRBIE : 1;
    unsigned long WUTIE : 1;
    unsigned long TSIE : 1;
    unsigned long ADD1H : 1;
    unsigned long SUB1H : 1;
    unsigned long BKP : 1;
    unsigned long COSEL : 1;
    unsigned long POL : 1;
    unsigned long OSEL : 2;
    unsigned long COE : 1;
    unsigned long Res1 : 8;
} sSTM32F302_RTCAlarm_CR;

typedef union {
    sSTM32F302_RTCAlarm_CR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_CR;

#define STM32F302_RTCAlarm_ISR_RESET_VALUE 0x00000007
typedef struct {
    unsigned long ALRAWF : 1;
    unsigned long ALRBWF : 1;
    unsigned long WUTWF : 1;
    unsigned long SHPF : 1;
    unsigned long INITS : 1;
    unsigned long RSF : 1;
    unsigned long INITF : 1;
    unsigned long INIT : 1;
    unsigned long ALRAF : 1;
    unsigned long ALRBF : 1;
    unsigned long WUTF : 1;
    unsigned long TSF : 1;
    unsigned long TSOVF : 1;
    unsigned long TAMP1F : 1;
    unsigned long TAMP2F : 1;
    unsigned long TAMP3F : 1;
    unsigned long RECALPF : 1;
    unsigned long Res0 : 15;
} sSTM32F302_RTCAlarm_ISR;

typedef union {
    sSTM32F302_RTCAlarm_ISR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_ISR;

#define STM32F302_RTCAlarm_PRER_RESET_VALUE 0x007F00FF
typedef struct {
    unsigned long PREDIV_S : 15;
    unsigned long Res0 : 1;
    unsigned long PREDIV_A : 7;
    unsigned long Res1 : 9;
} sSTM32F302_RTCAlarm_PRER;

typedef union {
    sSTM32F302_RTCAlarm_PRER Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_PRER;

#define STM32F302_RTCAlarm_WUTR_RESET_VALUE 0x0000FFFF
typedef struct {
    unsigned long WUT : 16;
    unsigned long Res0 : 16;
} sSTM32F302_RTCAlarm_WUTR;

typedef union {
    sSTM32F302_RTCAlarm_WUTR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_WUTR;

#define STM32F302_RTCAlarm_ALRMAR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SU : 4;
    unsigned long ST : 3;
    unsigned long MSK1 : 1;
    unsigned long MNU : 4;
    unsigned long MNT : 3;
    unsigned long MSK2 : 1;
    unsigned long HU : 4;
    unsigned long HT : 2;
    unsigned long PM : 1;
    unsigned long MSK3 : 1;
    unsigned long DU : 4;
    unsigned long DT : 2;
    unsigned long WDSEL : 1;
    unsigned long MSK4 : 1;
} sSTM32F302_RTCAlarm_ALRMAR;

typedef union {
    sSTM32F302_RTCAlarm_ALRMAR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_ALRMAR;

#define STM32F302_RTCAlarm_ALRMBR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SU : 4;
    unsigned long ST : 3;
    unsigned long MSK1 : 1;
    unsigned long MNU : 4;
    unsigned long MNT : 3;
    unsigned long MSK2 : 1;
    unsigned long HU : 4;
    unsigned long HT : 2;
    unsigned long PM : 1;
    unsigned long MSK3 : 1;
    unsigned long DU : 4;
    unsigned long DT : 2;
    unsigned long WDSEL : 1;
    unsigned long MSK4 : 1;
} sSTM32F302_RTCAlarm_ALRMBR;

typedef union {
    sSTM32F302_RTCAlarm_ALRMBR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_ALRMBR;

#define STM32F302_RTCAlarm_WPR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long KEY : 8;
    unsigned long Res0 : 24;
} sSTM32F302_RTCAlarm_WPR;

typedef union {
    sSTM32F302_RTCAlarm_WPR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_WPR;

#define STM32F302_RTCAlarm_SSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SS : 16;
    unsigned long Res0 : 16;
} sSTM32F302_RTCAlarm_SSR;

typedef union {
    sSTM32F302_RTCAlarm_SSR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_SSR;

#define STM32F302_RTCAlarm_SHIFTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SUBFS : 15;
    unsigned long Res0 : 16;
    unsigned long ADD1S : 1;
} sSTM32F302_RTCAlarm_SHIFTR;

typedef union {
    sSTM32F302_RTCAlarm_SHIFTR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_SHIFTR;

#define STM32F302_RTCAlarm_TSTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SU : 4;
    unsigned long ST : 3;
    unsigned long Res0 : 1;
    unsigned long MNU : 4;
    unsigned long MNT : 3;
    unsigned long Res1 : 1;
    unsigned long HU : 4;
    unsigned long HT : 2;
    unsigned long PM : 1;
    unsigned long Res2 : 9;
} sSTM32F302_RTCAlarm_TSTR;

typedef union {
    sSTM32F302_RTCAlarm_TSTR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_TSTR;

#define STM32F302_RTCAlarm_TSDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DU : 4;
    unsigned long DT : 2;
    unsigned long Res0 : 2;
    unsigned long MU : 4;
    unsigned long MT : 1;
    unsigned long WDU : 3;
    unsigned long Res1 : 16;
} sSTM32F302_RTCAlarm_TSDR;

typedef union {
    sSTM32F302_RTCAlarm_TSDR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_TSDR;

#define STM32F302_RTCAlarm_TSSSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SS : 16;
    unsigned long Res0 : 16;
} sSTM32F302_RTCAlarm_TSSSR;

typedef union {
    sSTM32F302_RTCAlarm_TSSSR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_TSSSR;

#define STM32F302_RTCAlarm_CALR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALM : 9;
    unsigned long Res0 : 4;
    unsigned long CALW16 : 1;
    unsigned long CALW8 : 1;
    unsigned long CALP : 1;
    unsigned long Res1 : 16;
} sSTM32F302_RTCAlarm_CALR;

typedef union {
    sSTM32F302_RTCAlarm_CALR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_CALR;

#define STM32F302_RTCAlarm_TAFCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TAMP1E : 1;
    unsigned long TAMP1TRG : 1;
    unsigned long TAMPIE : 1;
    unsigned long TAMP2E : 1;
    unsigned long TAMP2TRG : 1;
    unsigned long TAMP3E : 1;
    unsigned long TAMP3TRG : 1;
    unsigned long TAMPTS : 1;
    unsigned long TAMPFREQ : 3;
    unsigned long TAMPFLT : 2;
    unsigned long TAMPPRCH : 2;
    unsigned long TAMPPUDIS : 1;
    unsigned long Res0 : 2;
    unsigned long PC13VALUE : 1;
    unsigned long PC13MODE : 1;
    unsigned long PC14VALUE : 1;
    unsigned long PC14MODE : 1;
    unsigned long PC15VALUE : 1;
    unsigned long PC15MODE : 1;
    unsigned long Res1 : 8;
} sSTM32F302_RTCAlarm_TAFCR;

typedef union {
    sSTM32F302_RTCAlarm_TAFCR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_TAFCR;

#define STM32F302_RTCAlarm_ALRMASSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SS : 15;
    unsigned long Res0 : 9;
    unsigned long MASKSS : 4;
    unsigned long Res1 : 4;
} sSTM32F302_RTCAlarm_ALRMASSR;

typedef union {
    sSTM32F302_RTCAlarm_ALRMASSR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_ALRMASSR;

#define STM32F302_RTCAlarm_ALRMBSSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SS : 15;
    unsigned long Res0 : 9;
    unsigned long MASKSS : 4;
    unsigned long Res1 : 4;
} sSTM32F302_RTCAlarm_ALRMBSSR;

typedef union {
    sSTM32F302_RTCAlarm_ALRMBSSR Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_ALRMBSSR;

#define STM32F302_RTCAlarm_BKP0R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP0R;

typedef union {
    sSTM32F302_RTCAlarm_BKP0R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP0R;

#define STM32F302_RTCAlarm_BKP1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP1R;

typedef union {
    sSTM32F302_RTCAlarm_BKP1R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP1R;

#define STM32F302_RTCAlarm_BKP2R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP2R;

typedef union {
    sSTM32F302_RTCAlarm_BKP2R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP2R;

#define STM32F302_RTCAlarm_BKP3R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP3R;

typedef union {
    sSTM32F302_RTCAlarm_BKP3R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP3R;

#define STM32F302_RTCAlarm_BKP4R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP4R;

typedef union {
    sSTM32F302_RTCAlarm_BKP4R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP4R;

#define STM32F302_RTCAlarm_BKP5R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP5R;

typedef union {
    sSTM32F302_RTCAlarm_BKP5R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP5R;

#define STM32F302_RTCAlarm_BKP6R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP6R;

typedef union {
    sSTM32F302_RTCAlarm_BKP6R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP6R;

#define STM32F302_RTCAlarm_BKP7R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP7R;

typedef union {
    sSTM32F302_RTCAlarm_BKP7R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP7R;

#define STM32F302_RTCAlarm_BKP8R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP8R;

typedef union {
    sSTM32F302_RTCAlarm_BKP8R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP8R;

#define STM32F302_RTCAlarm_BKP9R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP9R;

typedef union {
    sSTM32F302_RTCAlarm_BKP9R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP9R;

#define STM32F302_RTCAlarm_BKP10R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP10R;

typedef union {
    sSTM32F302_RTCAlarm_BKP10R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP10R;

#define STM32F302_RTCAlarm_BKP11R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP11R;

typedef union {
    sSTM32F302_RTCAlarm_BKP11R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP11R;

#define STM32F302_RTCAlarm_BKP12R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP12R;

typedef union {
    sSTM32F302_RTCAlarm_BKP12R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP12R;

#define STM32F302_RTCAlarm_BKP13R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP13R;

typedef union {
    sSTM32F302_RTCAlarm_BKP13R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP13R;

#define STM32F302_RTCAlarm_BKP14R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP14R;

typedef union {
    sSTM32F302_RTCAlarm_BKP14R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP14R;

#define STM32F302_RTCAlarm_BKP15R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP15R;

typedef union {
    sSTM32F302_RTCAlarm_BKP15R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP15R;

#define STM32F302_RTCAlarm_BKP16R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP16R;

typedef union {
    sSTM32F302_RTCAlarm_BKP16R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP16R;

#define STM32F302_RTCAlarm_BKP17R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP17R;

typedef union {
    sSTM32F302_RTCAlarm_BKP17R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP17R;

#define STM32F302_RTCAlarm_BKP18R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP18R;

typedef union {
    sSTM32F302_RTCAlarm_BKP18R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP18R;

#define STM32F302_RTCAlarm_BKP19R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP19R;

typedef union {
    sSTM32F302_RTCAlarm_BKP19R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP19R;

#define STM32F302_RTCAlarm_BKP20R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP20R;

typedef union {
    sSTM32F302_RTCAlarm_BKP20R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP20R;

#define STM32F302_RTCAlarm_BKP21R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP21R;

typedef union {
    sSTM32F302_RTCAlarm_BKP21R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP21R;

#define STM32F302_RTCAlarm_BKP22R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP22R;

typedef union {
    sSTM32F302_RTCAlarm_BKP22R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP22R;

#define STM32F302_RTCAlarm_BKP23R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP23R;

typedef union {
    sSTM32F302_RTCAlarm_BKP23R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP23R;

#define STM32F302_RTCAlarm_BKP24R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP24R;

typedef union {
    sSTM32F302_RTCAlarm_BKP24R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP24R;

#define STM32F302_RTCAlarm_BKP25R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP25R;

typedef union {
    sSTM32F302_RTCAlarm_BKP25R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP25R;

#define STM32F302_RTCAlarm_BKP26R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP26R;

typedef union {
    sSTM32F302_RTCAlarm_BKP26R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP26R;

#define STM32F302_RTCAlarm_BKP27R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP27R;

typedef union {
    sSTM32F302_RTCAlarm_BKP27R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP27R;

#define STM32F302_RTCAlarm_BKP28R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP28R;

typedef union {
    sSTM32F302_RTCAlarm_BKP28R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP28R;

#define STM32F302_RTCAlarm_BKP29R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP29R;

typedef union {
    sSTM32F302_RTCAlarm_BKP29R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP29R;

#define STM32F302_RTCAlarm_BKP30R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP30R;

typedef union {
    sSTM32F302_RTCAlarm_BKP30R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP30R;

#define STM32F302_RTCAlarm_BKP31R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKP : 32;
} sSTM32F302_RTCAlarm_BKP31R;

typedef union {
    sSTM32F302_RTCAlarm_BKP31R Bit;
    unsigned long  All;
} uSTM32F302_RTCAlarm_BKP31R;

typedef struct {
    unsigned long Reserved0;
    uSTM32F302_RTCAlarm_CR STM32F302_RTCAlarm_CR; // Offset: 0x8
    uSTM32F302_RTCAlarm_ISR STM32F302_RTCAlarm_ISR; // Offset: 0xc
    uSTM32F302_RTCAlarm_PRER STM32F302_RTCAlarm_PRER; // Offset: 0x10
    uSTM32F302_RTCAlarm_WUTR STM32F302_RTCAlarm_WUTR; // Offset: 0x14
    unsigned long Reserved1;
    uSTM32F302_RTCAlarm_ALRMAR STM32F302_RTCAlarm_ALRMAR; // Offset: 0x1c
    uSTM32F302_RTCAlarm_ALRMBR STM32F302_RTCAlarm_ALRMBR; // Offset: 0x20
    uSTM32F302_RTCAlarm_WPR STM32F302_RTCAlarm_WPR; // Offset: 0x24
    uSTM32F302_RTCAlarm_SSR STM32F302_RTCAlarm_SSR; // Offset: 0x28
    uSTM32F302_RTCAlarm_SHIFTR STM32F302_RTCAlarm_SHIFTR; // Offset: 0x2c
    uSTM32F302_RTCAlarm_TSTR STM32F302_RTCAlarm_TSTR; // Offset: 0x30
    uSTM32F302_RTCAlarm_TSDR STM32F302_RTCAlarm_TSDR; // Offset: 0x34
    uSTM32F302_RTCAlarm_TSSSR STM32F302_RTCAlarm_TSSSR; // Offset: 0x38
    uSTM32F302_RTCAlarm_CALR STM32F302_RTCAlarm_CALR; // Offset: 0x3c
    uSTM32F302_RTCAlarm_TAFCR STM32F302_RTCAlarm_TAFCR; // Offset: 0x40
    uSTM32F302_RTCAlarm_ALRMASSR STM32F302_RTCAlarm_ALRMASSR; // Offset: 0x44
    uSTM32F302_RTCAlarm_ALRMBSSR STM32F302_RTCAlarm_ALRMBSSR; // Offset: 0x48
    unsigned long Reserved2;
    uSTM32F302_RTCAlarm_BKP0R STM32F302_RTCAlarm_BKP0R; // Offset: 0x50
    uSTM32F302_RTCAlarm_BKP1R STM32F302_RTCAlarm_BKP1R; // Offset: 0x54
    uSTM32F302_RTCAlarm_BKP2R STM32F302_RTCAlarm_BKP2R; // Offset: 0x58
    uSTM32F302_RTCAlarm_BKP3R STM32F302_RTCAlarm_BKP3R; // Offset: 0x5c
    uSTM32F302_RTCAlarm_BKP4R STM32F302_RTCAlarm_BKP4R; // Offset: 0x60
    uSTM32F302_RTCAlarm_BKP5R STM32F302_RTCAlarm_BKP5R; // Offset: 0x64
    uSTM32F302_RTCAlarm_BKP6R STM32F302_RTCAlarm_BKP6R; // Offset: 0x68
    uSTM32F302_RTCAlarm_BKP7R STM32F302_RTCAlarm_BKP7R; // Offset: 0x6c
    uSTM32F302_RTCAlarm_BKP8R STM32F302_RTCAlarm_BKP8R; // Offset: 0x70
    uSTM32F302_RTCAlarm_BKP9R STM32F302_RTCAlarm_BKP9R; // Offset: 0x74
    uSTM32F302_RTCAlarm_BKP10R STM32F302_RTCAlarm_BKP10R; // Offset: 0x78
    uSTM32F302_RTCAlarm_BKP11R STM32F302_RTCAlarm_BKP11R; // Offset: 0x7c
    uSTM32F302_RTCAlarm_BKP12R STM32F302_RTCAlarm_BKP12R; // Offset: 0x80
    uSTM32F302_RTCAlarm_BKP13R STM32F302_RTCAlarm_BKP13R; // Offset: 0x84
    uSTM32F302_RTCAlarm_BKP14R STM32F302_RTCAlarm_BKP14R; // Offset: 0x88
    uSTM32F302_RTCAlarm_BKP15R STM32F302_RTCAlarm_BKP15R; // Offset: 0x8c
    uSTM32F302_RTCAlarm_BKP16R STM32F302_RTCAlarm_BKP16R; // Offset: 0x90
    uSTM32F302_RTCAlarm_BKP17R STM32F302_RTCAlarm_BKP17R; // Offset: 0x94
    uSTM32F302_RTCAlarm_BKP18R STM32F302_RTCAlarm_BKP18R; // Offset: 0x98
    uSTM32F302_RTCAlarm_BKP19R STM32F302_RTCAlarm_BKP19R; // Offset: 0x9c
    uSTM32F302_RTCAlarm_BKP20R STM32F302_RTCAlarm_BKP20R; // Offset: 0xa0
    uSTM32F302_RTCAlarm_BKP21R STM32F302_RTCAlarm_BKP21R; // Offset: 0xa4
    uSTM32F302_RTCAlarm_BKP22R STM32F302_RTCAlarm_BKP22R; // Offset: 0xa8
    uSTM32F302_RTCAlarm_BKP23R STM32F302_RTCAlarm_BKP23R; // Offset: 0xac
    uSTM32F302_RTCAlarm_BKP24R STM32F302_RTCAlarm_BKP24R; // Offset: 0xb0
    uSTM32F302_RTCAlarm_BKP25R STM32F302_RTCAlarm_BKP25R; // Offset: 0xb4
    uSTM32F302_RTCAlarm_BKP26R STM32F302_RTCAlarm_BKP26R; // Offset: 0xb8
    uSTM32F302_RTCAlarm_BKP27R STM32F302_RTCAlarm_BKP27R; // Offset: 0xbc
    uSTM32F302_RTCAlarm_BKP28R STM32F302_RTCAlarm_BKP28R; // Offset: 0xc0
    uSTM32F302_RTCAlarm_BKP29R STM32F302_RTCAlarm_BKP29R; // Offset: 0xc4
    uSTM32F302_RTCAlarm_BKP30R STM32F302_RTCAlarm_BKP30R; // Offset: 0xc8
    uSTM32F302_RTCAlarm_BKP31R STM32F302_RTCAlarm_BKP31R; // Offset: 0xcc
} sSTM32F302_RTCAlarm;

