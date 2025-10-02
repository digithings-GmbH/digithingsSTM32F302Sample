// Base Addres of FMC = 0xA0000000

#define STM32F302_FMC_BCR1_RESET_VALUE 0x000030D0
typedef struct {
    unsigned long MBKEN : 1;
    unsigned long MUXEN : 1;
    unsigned long MTYP : 2;
    unsigned long MWID : 2;
    unsigned long FACCEN : 1;
    unsigned long Res0 : 1;
    unsigned long BURSTEN : 1;
    unsigned long WAITPOL : 1;
    unsigned long Res1 : 1;
    unsigned long WAITCFG : 1;
    unsigned long WREN : 1;
    unsigned long WAITEN : 1;
    unsigned long EXTMOD : 1;
    unsigned long ASYNCWAIT : 1;
    unsigned long Res2 : 3;
    unsigned long CBURSTRW : 1;
    unsigned long CCLKEN : 1;
    unsigned long Res3 : 11;
} sSTM32F302_FMC_BCR1;

typedef union {
    sSTM32F302_FMC_BCR1 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BCR1;

#define STM32F302_FMC_BTR1_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long ADDSET : 4;
    unsigned long ADDHLD : 4;
    unsigned long DATAST : 8;
    unsigned long BUSTURN : 4;
    unsigned long CLKDIV : 4;
    unsigned long DATLAT : 4;
    unsigned long ACCMOD : 2;
    unsigned long Res0 : 2;
} sSTM32F302_FMC_BTR1;

typedef union {
    sSTM32F302_FMC_BTR1 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BTR1;

#define STM32F302_FMC_BCR2_RESET_VALUE 0x000030D0
typedef struct {
    unsigned long MBKEN : 1;
    unsigned long MUXEN : 1;
    unsigned long MTYP : 2;
    unsigned long MWID : 2;
    unsigned long FACCEN : 1;
    unsigned long Res0 : 1;
    unsigned long BURSTEN : 1;
    unsigned long WAITPOL : 1;
    unsigned long WRAPMOD : 1;
    unsigned long WAITCFG : 1;
    unsigned long WREN : 1;
    unsigned long WAITEN : 1;
    unsigned long EXTMOD : 1;
    unsigned long ASYNCWAIT : 1;
    unsigned long Res1 : 3;
    unsigned long CBURSTRW : 1;
    unsigned long Res2 : 12;
} sSTM32F302_FMC_BCR2;

typedef union {
    sSTM32F302_FMC_BCR2 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BCR2;

#define STM32F302_FMC_BTR2_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long ADDSET : 4;
    unsigned long ADDHLD : 4;
    unsigned long DATAST : 8;
    unsigned long BUSTURN : 4;
    unsigned long CLKDIV : 4;
    unsigned long DATLAT : 4;
    unsigned long ACCMOD : 2;
    unsigned long Res0 : 2;
} sSTM32F302_FMC_BTR2;

typedef union {
    sSTM32F302_FMC_BTR2 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BTR2;

#define STM32F302_FMC_BCR3_RESET_VALUE 0x000030D0
typedef struct {
    unsigned long MBKEN : 1;
    unsigned long MUXEN : 1;
    unsigned long MTYP : 2;
    unsigned long MWID : 2;
    unsigned long FACCEN : 1;
    unsigned long Res0 : 1;
    unsigned long BURSTEN : 1;
    unsigned long WAITPOL : 1;
    unsigned long WRAPMOD : 1;
    unsigned long WAITCFG : 1;
    unsigned long WREN : 1;
    unsigned long WAITEN : 1;
    unsigned long EXTMOD : 1;
    unsigned long ASYNCWAIT : 1;
    unsigned long Res1 : 3;
    unsigned long CBURSTRW : 1;
    unsigned long Res2 : 12;
} sSTM32F302_FMC_BCR3;

typedef union {
    sSTM32F302_FMC_BCR3 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BCR3;

#define STM32F302_FMC_BTR3_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long ADDSET : 4;
    unsigned long ADDHLD : 4;
    unsigned long DATAST : 8;
    unsigned long BUSTURN : 4;
    unsigned long CLKDIV : 4;
    unsigned long DATLAT : 4;
    unsigned long ACCMOD : 2;
    unsigned long Res0 : 2;
} sSTM32F302_FMC_BTR3;

typedef union {
    sSTM32F302_FMC_BTR3 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BTR3;

#define STM32F302_FMC_BCR4_RESET_VALUE 0x000030D0
typedef struct {
    unsigned long MBKEN : 1;
    unsigned long MUXEN : 1;
    unsigned long MTYP : 2;
    unsigned long MWID : 2;
    unsigned long FACCEN : 1;
    unsigned long Res0 : 1;
    unsigned long BURSTEN : 1;
    unsigned long WAITPOL : 1;
    unsigned long WRAPMOD : 1;
    unsigned long WAITCFG : 1;
    unsigned long WREN : 1;
    unsigned long WAITEN : 1;
    unsigned long EXTMOD : 1;
    unsigned long ASYNCWAIT : 1;
    unsigned long Res1 : 3;
    unsigned long CBURSTRW : 1;
    unsigned long Res2 : 12;
} sSTM32F302_FMC_BCR4;

typedef union {
    sSTM32F302_FMC_BCR4 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BCR4;

#define STM32F302_FMC_BTR4_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long ADDSET : 4;
    unsigned long ADDHLD : 4;
    unsigned long DATAST : 8;
    unsigned long BUSTURN : 4;
    unsigned long CLKDIV : 4;
    unsigned long DATLAT : 4;
    unsigned long ACCMOD : 2;
    unsigned long Res0 : 2;
} sSTM32F302_FMC_BTR4;

typedef union {
    sSTM32F302_FMC_BTR4 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BTR4;

#define STM32F302_FMC_PCR2_RESET_VALUE 0x00000018
typedef struct {
    unsigned long Res0 : 1;
    unsigned long PWAITEN : 1;
    unsigned long PBKEN : 1;
    unsigned long PTYP : 1;
    unsigned long PWID : 2;
    unsigned long ECCEN : 1;
    unsigned long Res1 : 2;
    unsigned long TCLR : 4;
    unsigned long TAR : 4;
    unsigned long ECCPS : 3;
    unsigned long Res2 : 12;
} sSTM32F302_FMC_PCR2;

typedef union {
    sSTM32F302_FMC_PCR2 Bit;
    unsigned long  All;
} uSTM32F302_FMC_PCR2;

#define STM32F302_FMC_SR2_RESET_VALUE 0x00000040
typedef struct {
    unsigned long IRS : 1;
    unsigned long ILS : 1;
    unsigned long IFS : 1;
    unsigned long IREN : 1;
    unsigned long ILEN : 1;
    unsigned long IFEN : 1;
    unsigned long FEMPT : 1;
    unsigned long Res0 : 25;
} sSTM32F302_FMC_SR2;

typedef union {
    sSTM32F302_FMC_SR2 Bit;
    unsigned long  All;
} uSTM32F302_FMC_SR2;

#define STM32F302_FMC_PMEM2_RESET_VALUE 0xFCFCFCFC
typedef struct {
    unsigned long MEMSETx : 8;
    unsigned long MEMWAITx : 8;
    unsigned long MEMHOLDx : 8;
    unsigned long MEMHIZx : 8;
} sSTM32F302_FMC_PMEM2;

typedef union {
    sSTM32F302_FMC_PMEM2 Bit;
    unsigned long  All;
} uSTM32F302_FMC_PMEM2;

#define STM32F302_FMC_PATT2_RESET_VALUE 0xFCFCFCFC
typedef struct {
    unsigned long ATTSETx : 8;
    unsigned long ATTWAITx : 8;
    unsigned long ATTHOLDx : 8;
    unsigned long ATTHIZx : 8;
} sSTM32F302_FMC_PATT2;

typedef union {
    sSTM32F302_FMC_PATT2 Bit;
    unsigned long  All;
} uSTM32F302_FMC_PATT2;

#define STM32F302_FMC_ECCR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ECCx : 32;
} sSTM32F302_FMC_ECCR2;

typedef union {
    sSTM32F302_FMC_ECCR2 Bit;
    unsigned long  All;
} uSTM32F302_FMC_ECCR2;

#define STM32F302_FMC_PCR3_RESET_VALUE 0x00000018
typedef struct {
    unsigned long Res0 : 1;
    unsigned long PWAITEN : 1;
    unsigned long PBKEN : 1;
    unsigned long PTYP : 1;
    unsigned long PWID : 2;
    unsigned long ECCEN : 1;
    unsigned long Res1 : 2;
    unsigned long TCLR : 4;
    unsigned long TAR : 4;
    unsigned long ECCPS : 3;
    unsigned long Res2 : 12;
} sSTM32F302_FMC_PCR3;

typedef union {
    sSTM32F302_FMC_PCR3 Bit;
    unsigned long  All;
} uSTM32F302_FMC_PCR3;

#define STM32F302_FMC_SR3_RESET_VALUE 0x00000040
typedef struct {
    unsigned long IRS : 1;
    unsigned long ILS : 1;
    unsigned long IFS : 1;
    unsigned long IREN : 1;
    unsigned long ILEN : 1;
    unsigned long IFEN : 1;
    unsigned long FEMPT : 1;
    unsigned long Res0 : 25;
} sSTM32F302_FMC_SR3;

typedef union {
    sSTM32F302_FMC_SR3 Bit;
    unsigned long  All;
} uSTM32F302_FMC_SR3;

#define STM32F302_FMC_PMEM3_RESET_VALUE 0xFCFCFCFC
typedef struct {
    unsigned long MEMSETx : 8;
    unsigned long MEMWAITx : 8;
    unsigned long MEMHOLDx : 8;
    unsigned long MEMHIZx : 8;
} sSTM32F302_FMC_PMEM3;

typedef union {
    sSTM32F302_FMC_PMEM3 Bit;
    unsigned long  All;
} uSTM32F302_FMC_PMEM3;

#define STM32F302_FMC_PATT3_RESET_VALUE 0xFCFCFCFC
typedef struct {
    unsigned long ATTSETx : 8;
    unsigned long ATTWAITx : 8;
    unsigned long ATTHOLDx : 8;
    unsigned long ATTHIZx : 8;
} sSTM32F302_FMC_PATT3;

typedef union {
    sSTM32F302_FMC_PATT3 Bit;
    unsigned long  All;
} uSTM32F302_FMC_PATT3;

#define STM32F302_FMC_ECCR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ECCx : 32;
} sSTM32F302_FMC_ECCR3;

typedef union {
    sSTM32F302_FMC_ECCR3 Bit;
    unsigned long  All;
} uSTM32F302_FMC_ECCR3;

#define STM32F302_FMC_PCR4_RESET_VALUE 0x00000018
typedef struct {
    unsigned long Res0 : 1;
    unsigned long PWAITEN : 1;
    unsigned long PBKEN : 1;
    unsigned long PTYP : 1;
    unsigned long PWID : 2;
    unsigned long ECCEN : 1;
    unsigned long Res1 : 2;
    unsigned long TCLR : 4;
    unsigned long TAR : 4;
    unsigned long ECCPS : 3;
    unsigned long Res2 : 12;
} sSTM32F302_FMC_PCR4;

typedef union {
    sSTM32F302_FMC_PCR4 Bit;
    unsigned long  All;
} uSTM32F302_FMC_PCR4;

#define STM32F302_FMC_SR4_RESET_VALUE 0x00000040
typedef struct {
    unsigned long IRS : 1;
    unsigned long ILS : 1;
    unsigned long IFS : 1;
    unsigned long IREN : 1;
    unsigned long ILEN : 1;
    unsigned long IFEN : 1;
    unsigned long FEMPT : 1;
    unsigned long Res0 : 25;
} sSTM32F302_FMC_SR4;

typedef union {
    sSTM32F302_FMC_SR4 Bit;
    unsigned long  All;
} uSTM32F302_FMC_SR4;

#define STM32F302_FMC_PMEM4_RESET_VALUE 0xFCFCFCFC
typedef struct {
    unsigned long MEMSETx : 8;
    unsigned long MEMWAITx : 8;
    unsigned long MEMHOLDx : 8;
    unsigned long MEMHIZx : 8;
} sSTM32F302_FMC_PMEM4;

typedef union {
    sSTM32F302_FMC_PMEM4 Bit;
    unsigned long  All;
} uSTM32F302_FMC_PMEM4;

#define STM32F302_FMC_PATT4_RESET_VALUE 0xFCFCFCFC
typedef struct {
    unsigned long ATTSETx : 8;
    unsigned long ATTWAITx : 8;
    unsigned long ATTHOLDx : 8;
    unsigned long ATTHIZx : 8;
} sSTM32F302_FMC_PATT4;

typedef union {
    sSTM32F302_FMC_PATT4 Bit;
    unsigned long  All;
} uSTM32F302_FMC_PATT4;

#define STM32F302_FMC_PIO4_RESET_VALUE 0xFCFCFCFC
typedef struct {
    unsigned long IOSETx : 8;
    unsigned long IOWAITx : 8;
    unsigned long IOHOLDx : 8;
    unsigned long IOHIZx : 8;
} sSTM32F302_FMC_PIO4;

typedef union {
    sSTM32F302_FMC_PIO4 Bit;
    unsigned long  All;
} uSTM32F302_FMC_PIO4;

#define STM32F302_FMC_BWTR1_RESET_VALUE 0x0FFFFFFF
typedef struct {
    unsigned long ADDSET : 4;
    unsigned long ADDHLD : 4;
    unsigned long DATAST : 8;
    unsigned long BUSTURN : 4;
    unsigned long CLKDIV : 4;
    unsigned long DATLAT : 4;
    unsigned long ACCMOD : 2;
    unsigned long Res0 : 2;
} sSTM32F302_FMC_BWTR1;

typedef union {
    sSTM32F302_FMC_BWTR1 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BWTR1;

#define STM32F302_FMC_BWTR2_RESET_VALUE 0x0FFFFFFF
typedef struct {
    unsigned long ADDSET : 4;
    unsigned long ADDHLD : 4;
    unsigned long DATAST : 8;
    unsigned long BUSTURN : 4;
    unsigned long CLKDIV : 4;
    unsigned long DATLAT : 4;
    unsigned long ACCMOD : 2;
    unsigned long Res0 : 2;
} sSTM32F302_FMC_BWTR2;

typedef union {
    sSTM32F302_FMC_BWTR2 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BWTR2;

#define STM32F302_FMC_BWTR3_RESET_VALUE 0x0FFFFFFF
typedef struct {
    unsigned long ADDSET : 4;
    unsigned long ADDHLD : 4;
    unsigned long DATAST : 8;
    unsigned long BUSTURN : 4;
    unsigned long CLKDIV : 4;
    unsigned long DATLAT : 4;
    unsigned long ACCMOD : 2;
    unsigned long Res0 : 2;
} sSTM32F302_FMC_BWTR3;

typedef union {
    sSTM32F302_FMC_BWTR3 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BWTR3;

#define STM32F302_FMC_BWTR4_RESET_VALUE 0x0FFFFFFF
typedef struct {
    unsigned long ADDSET : 4;
    unsigned long ADDHLD : 4;
    unsigned long DATAST : 8;
    unsigned long BUSTURN : 4;
    unsigned long CLKDIV : 4;
    unsigned long DATLAT : 4;
    unsigned long ACCMOD : 2;
    unsigned long Res0 : 2;
} sSTM32F302_FMC_BWTR4;

typedef union {
    sSTM32F302_FMC_BWTR4 Bit;
    unsigned long  All;
} uSTM32F302_FMC_BWTR4;

typedef struct {
    uSTM32F302_FMC_BCR1 STM32F302_FMC_BCR1; // Offset: 0x0
    uSTM32F302_FMC_BTR1 STM32F302_FMC_BTR1; // Offset: 0x4
    uSTM32F302_FMC_BCR2 STM32F302_FMC_BCR2; // Offset: 0x8
    uSTM32F302_FMC_BTR2 STM32F302_FMC_BTR2; // Offset: 0xc
    uSTM32F302_FMC_BCR3 STM32F302_FMC_BCR3; // Offset: 0x10
    uSTM32F302_FMC_BTR3 STM32F302_FMC_BTR3; // Offset: 0x14
    uSTM32F302_FMC_BCR4 STM32F302_FMC_BCR4; // Offset: 0x18
    uSTM32F302_FMC_BTR4 STM32F302_FMC_BTR4; // Offset: 0x1c
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    unsigned long Reserved15;
    uSTM32F302_FMC_PCR2 STM32F302_FMC_PCR2; // Offset: 0x60
    uSTM32F302_FMC_SR2 STM32F302_FMC_SR2; // Offset: 0x64
    uSTM32F302_FMC_PMEM2 STM32F302_FMC_PMEM2; // Offset: 0x68
    uSTM32F302_FMC_PATT2 STM32F302_FMC_PATT2; // Offset: 0x6c
    unsigned long Reserved16;
    uSTM32F302_FMC_ECCR2 STM32F302_FMC_ECCR2; // Offset: 0x74
    unsigned long Reserved17;
    unsigned long Reserved18;
    uSTM32F302_FMC_PCR3 STM32F302_FMC_PCR3; // Offset: 0x80
    uSTM32F302_FMC_SR3 STM32F302_FMC_SR3; // Offset: 0x84
    uSTM32F302_FMC_PMEM3 STM32F302_FMC_PMEM3; // Offset: 0x88
    uSTM32F302_FMC_PATT3 STM32F302_FMC_PATT3; // Offset: 0x8c
    unsigned long Reserved19;
    uSTM32F302_FMC_ECCR3 STM32F302_FMC_ECCR3; // Offset: 0x94
    unsigned long Reserved20;
    unsigned long Reserved21;
    uSTM32F302_FMC_PCR4 STM32F302_FMC_PCR4; // Offset: 0xa0
    uSTM32F302_FMC_SR4 STM32F302_FMC_SR4; // Offset: 0xa4
    uSTM32F302_FMC_PMEM4 STM32F302_FMC_PMEM4; // Offset: 0xa8
    uSTM32F302_FMC_PATT4 STM32F302_FMC_PATT4; // Offset: 0xac
    uSTM32F302_FMC_PIO4 STM32F302_FMC_PIO4; // Offset: 0xb0
    unsigned long Reserved22;
    unsigned long Reserved23;
    unsigned long Reserved24;
    unsigned long Reserved25;
    unsigned long Reserved26;
    unsigned long Reserved27;
    unsigned long Reserved28;
    unsigned long Reserved29;
    unsigned long Reserved30;
    unsigned long Reserved31;
    unsigned long Reserved32;
    unsigned long Reserved33;
    unsigned long Reserved34;
    unsigned long Reserved35;
    unsigned long Reserved36;
    unsigned long Reserved37;
    unsigned long Reserved38;
    unsigned long Reserved39;
    unsigned long Reserved40;
    unsigned long Reserved41;
    uSTM32F302_FMC_BWTR1 STM32F302_FMC_BWTR1; // Offset: 0x104
    unsigned long Reserved42;
    uSTM32F302_FMC_BWTR2 STM32F302_FMC_BWTR2; // Offset: 0x10c
    unsigned long Reserved43;
    uSTM32F302_FMC_BWTR3 STM32F302_FMC_BWTR3; // Offset: 0x114
    unsigned long Reserved44;
    uSTM32F302_FMC_BWTR4 STM32F302_FMC_BWTR4; // Offset: 0x11c
} sSTM32F302_FMC;

