// Base Addres of CAN_SCE = 0x40006400

#define STM32F302_CAN_SCE_MCR_RESET_VALUE 0x00010002
typedef struct {
    unsigned long INRQ : 1;
    unsigned long SLEEP : 1;
    unsigned long TXFP : 1;
    unsigned long RFLM : 1;
    unsigned long NART : 1;
    unsigned long AWUM : 1;
    unsigned long ABOM : 1;
    unsigned long TTCM : 1;
    unsigned long Res0 : 7;
    unsigned long RESET : 1;
    unsigned long DBF : 1;
    unsigned long Res1 : 15;
} sSTM32F302_CAN_SCE_MCR;

typedef union {
    sSTM32F302_CAN_SCE_MCR Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_MCR;

#define STM32F302_CAN_SCE_MSR_RESET_VALUE 0x00000C02
typedef struct {
    unsigned long INAK : 1;
    unsigned long SLAK : 1;
    unsigned long ERRI : 1;
    unsigned long WKUI : 1;
    unsigned long SLAKI : 1;
    unsigned long Res0 : 3;
    unsigned long TXM : 1;
    unsigned long RXM : 1;
    unsigned long SAMP : 1;
    unsigned long RX : 1;
    unsigned long Res1 : 20;
} sSTM32F302_CAN_SCE_MSR;

typedef union {
    sSTM32F302_CAN_SCE_MSR Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_MSR;

#define STM32F302_CAN_SCE_TSR_RESET_VALUE 0x1C000000
typedef struct {
    unsigned long RQCP0 : 1;
    unsigned long TXOK0 : 1;
    unsigned long ALST0 : 1;
    unsigned long TERR0 : 1;
    unsigned long Res0 : 3;
    unsigned long ABRQ0 : 1;
    unsigned long RQCP1 : 1;
    unsigned long TXOK1 : 1;
    unsigned long ALST1 : 1;
    unsigned long TERR1 : 1;
    unsigned long Res1 : 3;
    unsigned long ABRQ1 : 1;
    unsigned long RQCP2 : 1;
    unsigned long TXOK2 : 1;
    unsigned long ALST2 : 1;
    unsigned long TERR2 : 1;
    unsigned long Res2 : 3;
    unsigned long ABRQ2 : 1;
    unsigned long CODE : 2;
    unsigned long TME0 : 1;
    unsigned long TME1 : 1;
    unsigned long TME2 : 1;
    unsigned long LOW0 : 1;
    unsigned long LOW1 : 1;
    unsigned long LOW2 : 1;
} sSTM32F302_CAN_SCE_TSR;

typedef union {
    sSTM32F302_CAN_SCE_TSR Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TSR;

#define STM32F302_CAN_SCE_RF0R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FMP0 : 2;
    unsigned long Res0 : 1;
    unsigned long FULL0 : 1;
    unsigned long FOVR0 : 1;
    unsigned long RFOM0 : 1;
    unsigned long Res1 : 26;
} sSTM32F302_CAN_SCE_RF0R;

typedef union {
    sSTM32F302_CAN_SCE_RF0R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_RF0R;

#define STM32F302_CAN_SCE_RF1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FMP1 : 2;
    unsigned long Res0 : 1;
    unsigned long FULL1 : 1;
    unsigned long FOVR1 : 1;
    unsigned long RFOM1 : 1;
    unsigned long Res1 : 26;
} sSTM32F302_CAN_SCE_RF1R;

typedef union {
    sSTM32F302_CAN_SCE_RF1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_RF1R;

#define STM32F302_CAN_SCE_IER_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TMEIE : 1;
    unsigned long FMPIE0 : 1;
    unsigned long FFIE0 : 1;
    unsigned long FOVIE0 : 1;
    unsigned long FMPIE1 : 1;
    unsigned long FFIE1 : 1;
    unsigned long FOVIE1 : 1;
    unsigned long Res0 : 1;
    unsigned long EWGIE : 1;
    unsigned long EPVIE : 1;
    unsigned long BOFIE : 1;
    unsigned long LECIE : 1;
    unsigned long Res1 : 3;
    unsigned long ERRIE : 1;
    unsigned long WKUIE : 1;
    unsigned long SLKIE : 1;
    unsigned long Res2 : 14;
} sSTM32F302_CAN_SCE_IER;

typedef union {
    sSTM32F302_CAN_SCE_IER Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_IER;

#define STM32F302_CAN_SCE_ESR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EWGF : 1;
    unsigned long EPVF : 1;
    unsigned long BOFF : 1;
    unsigned long Res0 : 1;
    unsigned long LEC : 3;
    unsigned long Res1 : 9;
    unsigned long TEC : 8;
    unsigned long REC : 8;
} sSTM32F302_CAN_SCE_ESR;

typedef union {
    sSTM32F302_CAN_SCE_ESR Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_ESR;

#define STM32F302_CAN_SCE_BTR_RESET_VALUE 0x01230000
typedef struct {
    unsigned long BRP : 10;
    unsigned long Res0 : 6;
    unsigned long TS1 : 4;
    unsigned long TS2 : 3;
    unsigned long Res1 : 1;
    unsigned long SJW : 2;
    unsigned long Res2 : 4;
    unsigned long LBKM : 1;
    unsigned long SILM : 1;
} sSTM32F302_CAN_SCE_BTR;

typedef union {
    sSTM32F302_CAN_SCE_BTR Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_BTR;

#define STM32F302_CAN_SCE_TI0R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXRQ : 1;
    unsigned long RTR : 1;
    unsigned long IDE : 1;
    unsigned long EXID : 18;
    unsigned long STID : 11;
} sSTM32F302_CAN_SCE_TI0R;

typedef union {
    sSTM32F302_CAN_SCE_TI0R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TI0R;

#define STM32F302_CAN_SCE_TDT0R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DLC : 4;
    unsigned long Res0 : 4;
    unsigned long TGT : 1;
    unsigned long Res1 : 7;
    unsigned long TIME : 16;
} sSTM32F302_CAN_SCE_TDT0R;

typedef union {
    sSTM32F302_CAN_SCE_TDT0R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TDT0R;

#define STM32F302_CAN_SCE_TDL0R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA0 : 8;
    unsigned long DATA1 : 8;
    unsigned long DATA2 : 8;
    unsigned long DATA3 : 8;
} sSTM32F302_CAN_SCE_TDL0R;

typedef union {
    sSTM32F302_CAN_SCE_TDL0R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TDL0R;

#define STM32F302_CAN_SCE_TDH0R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA4 : 8;
    unsigned long DATA5 : 8;
    unsigned long DATA6 : 8;
    unsigned long DATA7 : 8;
} sSTM32F302_CAN_SCE_TDH0R;

typedef union {
    sSTM32F302_CAN_SCE_TDH0R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TDH0R;

#define STM32F302_CAN_SCE_TI1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXRQ : 1;
    unsigned long RTR : 1;
    unsigned long IDE : 1;
    unsigned long EXID : 18;
    unsigned long STID : 11;
} sSTM32F302_CAN_SCE_TI1R;

typedef union {
    sSTM32F302_CAN_SCE_TI1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TI1R;

#define STM32F302_CAN_SCE_TDT1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DLC : 4;
    unsigned long Res0 : 4;
    unsigned long TGT : 1;
    unsigned long Res1 : 7;
    unsigned long TIME : 16;
} sSTM32F302_CAN_SCE_TDT1R;

typedef union {
    sSTM32F302_CAN_SCE_TDT1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TDT1R;

#define STM32F302_CAN_SCE_TDL1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA0 : 8;
    unsigned long DATA1 : 8;
    unsigned long DATA2 : 8;
    unsigned long DATA3 : 8;
} sSTM32F302_CAN_SCE_TDL1R;

typedef union {
    sSTM32F302_CAN_SCE_TDL1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TDL1R;

#define STM32F302_CAN_SCE_TDH1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA4 : 8;
    unsigned long DATA5 : 8;
    unsigned long DATA6 : 8;
    unsigned long DATA7 : 8;
} sSTM32F302_CAN_SCE_TDH1R;

typedef union {
    sSTM32F302_CAN_SCE_TDH1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TDH1R;

#define STM32F302_CAN_SCE_TI2R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXRQ : 1;
    unsigned long RTR : 1;
    unsigned long IDE : 1;
    unsigned long EXID : 18;
    unsigned long STID : 11;
} sSTM32F302_CAN_SCE_TI2R;

typedef union {
    sSTM32F302_CAN_SCE_TI2R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TI2R;

#define STM32F302_CAN_SCE_TDT2R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DLC : 4;
    unsigned long Res0 : 4;
    unsigned long TGT : 1;
    unsigned long Res1 : 7;
    unsigned long TIME : 16;
} sSTM32F302_CAN_SCE_TDT2R;

typedef union {
    sSTM32F302_CAN_SCE_TDT2R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TDT2R;

#define STM32F302_CAN_SCE_TDL2R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA0 : 8;
    unsigned long DATA1 : 8;
    unsigned long DATA2 : 8;
    unsigned long DATA3 : 8;
} sSTM32F302_CAN_SCE_TDL2R;

typedef union {
    sSTM32F302_CAN_SCE_TDL2R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TDL2R;

#define STM32F302_CAN_SCE_TDH2R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA4 : 8;
    unsigned long DATA5 : 8;
    unsigned long DATA6 : 8;
    unsigned long DATA7 : 8;
} sSTM32F302_CAN_SCE_TDH2R;

typedef union {
    sSTM32F302_CAN_SCE_TDH2R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_TDH2R;

#define STM32F302_CAN_SCE_RI0R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long RTR : 1;
    unsigned long IDE : 1;
    unsigned long EXID : 18;
    unsigned long STID : 11;
} sSTM32F302_CAN_SCE_RI0R;

typedef union {
    sSTM32F302_CAN_SCE_RI0R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_RI0R;

#define STM32F302_CAN_SCE_RDT0R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DLC : 4;
    unsigned long Res0 : 4;
    unsigned long FMI : 8;
    unsigned long TIME : 16;
} sSTM32F302_CAN_SCE_RDT0R;

typedef union {
    sSTM32F302_CAN_SCE_RDT0R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_RDT0R;

#define STM32F302_CAN_SCE_RDL0R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA0 : 8;
    unsigned long DATA1 : 8;
    unsigned long DATA2 : 8;
    unsigned long DATA3 : 8;
} sSTM32F302_CAN_SCE_RDL0R;

typedef union {
    sSTM32F302_CAN_SCE_RDL0R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_RDL0R;

#define STM32F302_CAN_SCE_RDH0R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA4 : 8;
    unsigned long DATA5 : 8;
    unsigned long DATA6 : 8;
    unsigned long DATA7 : 8;
} sSTM32F302_CAN_SCE_RDH0R;

typedef union {
    sSTM32F302_CAN_SCE_RDH0R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_RDH0R;

#define STM32F302_CAN_SCE_RI1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long RTR : 1;
    unsigned long IDE : 1;
    unsigned long EXID : 18;
    unsigned long STID : 11;
} sSTM32F302_CAN_SCE_RI1R;

typedef union {
    sSTM32F302_CAN_SCE_RI1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_RI1R;

#define STM32F302_CAN_SCE_RDT1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DLC : 4;
    unsigned long Res0 : 4;
    unsigned long FMI : 8;
    unsigned long TIME : 16;
} sSTM32F302_CAN_SCE_RDT1R;

typedef union {
    sSTM32F302_CAN_SCE_RDT1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_RDT1R;

#define STM32F302_CAN_SCE_RDL1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA0 : 8;
    unsigned long DATA1 : 8;
    unsigned long DATA2 : 8;
    unsigned long DATA3 : 8;
} sSTM32F302_CAN_SCE_RDL1R;

typedef union {
    sSTM32F302_CAN_SCE_RDL1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_RDL1R;

#define STM32F302_CAN_SCE_RDH1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA4 : 8;
    unsigned long DATA5 : 8;
    unsigned long DATA6 : 8;
    unsigned long DATA7 : 8;
} sSTM32F302_CAN_SCE_RDH1R;

typedef union {
    sSTM32F302_CAN_SCE_RDH1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_RDH1R;

#define STM32F302_CAN_SCE_FMR_RESET_VALUE 0x2A1C0E01
typedef struct {
    unsigned long FINIT : 1;
    unsigned long Res0 : 7;
    unsigned long CAN2SB : 6;
    unsigned long Res1 : 18;
} sSTM32F302_CAN_SCE_FMR;

typedef union {
    sSTM32F302_CAN_SCE_FMR Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_FMR;

#define STM32F302_CAN_SCE_FM1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FBM0 : 1;
    unsigned long FBM1 : 1;
    unsigned long FBM2 : 1;
    unsigned long FBM3 : 1;
    unsigned long FBM4 : 1;
    unsigned long FBM5 : 1;
    unsigned long FBM6 : 1;
    unsigned long FBM7 : 1;
    unsigned long FBM8 : 1;
    unsigned long FBM9 : 1;
    unsigned long FBM10 : 1;
    unsigned long FBM11 : 1;
    unsigned long FBM12 : 1;
    unsigned long FBM13 : 1;
    unsigned long FBM14 : 1;
    unsigned long FBM15 : 1;
    unsigned long FBM16 : 1;
    unsigned long FBM17 : 1;
    unsigned long FBM18 : 1;
    unsigned long FBM19 : 1;
    unsigned long FBM20 : 1;
    unsigned long FBM21 : 1;
    unsigned long FBM22 : 1;
    unsigned long FBM23 : 1;
    unsigned long FBM24 : 1;
    unsigned long FBM25 : 1;
    unsigned long FBM26 : 1;
    unsigned long FBM27 : 1;
    unsigned long Res0 : 4;
} sSTM32F302_CAN_SCE_FM1R;

typedef union {
    sSTM32F302_CAN_SCE_FM1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_FM1R;

#define STM32F302_CAN_SCE_FS1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FSC0 : 1;
    unsigned long FSC1 : 1;
    unsigned long FSC2 : 1;
    unsigned long FSC3 : 1;
    unsigned long FSC4 : 1;
    unsigned long FSC5 : 1;
    unsigned long FSC6 : 1;
    unsigned long FSC7 : 1;
    unsigned long FSC8 : 1;
    unsigned long FSC9 : 1;
    unsigned long FSC10 : 1;
    unsigned long FSC11 : 1;
    unsigned long FSC12 : 1;
    unsigned long FSC13 : 1;
    unsigned long FSC14 : 1;
    unsigned long FSC15 : 1;
    unsigned long FSC16 : 1;
    unsigned long FSC17 : 1;
    unsigned long FSC18 : 1;
    unsigned long FSC19 : 1;
    unsigned long FSC20 : 1;
    unsigned long FSC21 : 1;
    unsigned long FSC22 : 1;
    unsigned long FSC23 : 1;
    unsigned long FSC24 : 1;
    unsigned long FSC25 : 1;
    unsigned long FSC26 : 1;
    unsigned long FSC27 : 1;
    unsigned long Res0 : 4;
} sSTM32F302_CAN_SCE_FS1R;

typedef union {
    sSTM32F302_CAN_SCE_FS1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_FS1R;

#define STM32F302_CAN_SCE_FFA1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FFA0 : 1;
    unsigned long FFA1 : 1;
    unsigned long FFA2 : 1;
    unsigned long FFA3 : 1;
    unsigned long FFA4 : 1;
    unsigned long FFA5 : 1;
    unsigned long FFA6 : 1;
    unsigned long FFA7 : 1;
    unsigned long FFA8 : 1;
    unsigned long FFA9 : 1;
    unsigned long FFA10 : 1;
    unsigned long FFA11 : 1;
    unsigned long FFA12 : 1;
    unsigned long FFA13 : 1;
    unsigned long FFA14 : 1;
    unsigned long FFA15 : 1;
    unsigned long FFA16 : 1;
    unsigned long FFA17 : 1;
    unsigned long FFA18 : 1;
    unsigned long FFA19 : 1;
    unsigned long FFA20 : 1;
    unsigned long FFA21 : 1;
    unsigned long FFA22 : 1;
    unsigned long FFA23 : 1;
    unsigned long FFA24 : 1;
    unsigned long FFA25 : 1;
    unsigned long FFA26 : 1;
    unsigned long FFA27 : 1;
    unsigned long Res0 : 4;
} sSTM32F302_CAN_SCE_FFA1R;

typedef union {
    sSTM32F302_CAN_SCE_FFA1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_FFA1R;

#define STM32F302_CAN_SCE_FA1R_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FACT0 : 1;
    unsigned long FACT1 : 1;
    unsigned long FACT2 : 1;
    unsigned long FACT3 : 1;
    unsigned long FACT4 : 1;
    unsigned long FACT5 : 1;
    unsigned long FACT6 : 1;
    unsigned long FACT7 : 1;
    unsigned long FACT8 : 1;
    unsigned long FACT9 : 1;
    unsigned long FACT10 : 1;
    unsigned long FACT11 : 1;
    unsigned long FACT12 : 1;
    unsigned long FACT13 : 1;
    unsigned long FACT14 : 1;
    unsigned long FACT15 : 1;
    unsigned long FACT16 : 1;
    unsigned long FACT17 : 1;
    unsigned long FACT18 : 1;
    unsigned long FACT19 : 1;
    unsigned long FACT20 : 1;
    unsigned long FACT21 : 1;
    unsigned long FACT22 : 1;
    unsigned long FACT23 : 1;
    unsigned long FACT24 : 1;
    unsigned long FACT25 : 1;
    unsigned long FACT26 : 1;
    unsigned long FACT27 : 1;
    unsigned long Res0 : 4;
} sSTM32F302_CAN_SCE_FA1R;

typedef union {
    sSTM32F302_CAN_SCE_FA1R Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_FA1R;

#define STM32F302_CAN_SCE_F0R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F0R1;

typedef union {
    sSTM32F302_CAN_SCE_F0R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F0R1;

#define STM32F302_CAN_SCE_F0R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F0R2;

typedef union {
    sSTM32F302_CAN_SCE_F0R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F0R2;

#define STM32F302_CAN_SCE_F1R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F1R1;

typedef union {
    sSTM32F302_CAN_SCE_F1R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F1R1;

#define STM32F302_CAN_SCE_F1R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F1R2;

typedef union {
    sSTM32F302_CAN_SCE_F1R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F1R2;

#define STM32F302_CAN_SCE_F2R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F2R1;

typedef union {
    sSTM32F302_CAN_SCE_F2R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F2R1;

#define STM32F302_CAN_SCE_F2R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F2R2;

typedef union {
    sSTM32F302_CAN_SCE_F2R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F2R2;

#define STM32F302_CAN_SCE_F3R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F3R1;

typedef union {
    sSTM32F302_CAN_SCE_F3R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F3R1;

#define STM32F302_CAN_SCE_F3R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F3R2;

typedef union {
    sSTM32F302_CAN_SCE_F3R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F3R2;

#define STM32F302_CAN_SCE_F4R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F4R1;

typedef union {
    sSTM32F302_CAN_SCE_F4R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F4R1;

#define STM32F302_CAN_SCE_F4R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F4R2;

typedef union {
    sSTM32F302_CAN_SCE_F4R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F4R2;

#define STM32F302_CAN_SCE_F5R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F5R1;

typedef union {
    sSTM32F302_CAN_SCE_F5R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F5R1;

#define STM32F302_CAN_SCE_F5R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F5R2;

typedef union {
    sSTM32F302_CAN_SCE_F5R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F5R2;

#define STM32F302_CAN_SCE_F6R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F6R1;

typedef union {
    sSTM32F302_CAN_SCE_F6R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F6R1;

#define STM32F302_CAN_SCE_F6R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F6R2;

typedef union {
    sSTM32F302_CAN_SCE_F6R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F6R2;

#define STM32F302_CAN_SCE_F7R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F7R1;

typedef union {
    sSTM32F302_CAN_SCE_F7R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F7R1;

#define STM32F302_CAN_SCE_F7R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F7R2;

typedef union {
    sSTM32F302_CAN_SCE_F7R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F7R2;

#define STM32F302_CAN_SCE_F8R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F8R1;

typedef union {
    sSTM32F302_CAN_SCE_F8R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F8R1;

#define STM32F302_CAN_SCE_F8R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F8R2;

typedef union {
    sSTM32F302_CAN_SCE_F8R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F8R2;

#define STM32F302_CAN_SCE_F9R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F9R1;

typedef union {
    sSTM32F302_CAN_SCE_F9R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F9R1;

#define STM32F302_CAN_SCE_F9R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F9R2;

typedef union {
    sSTM32F302_CAN_SCE_F9R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F9R2;

#define STM32F302_CAN_SCE_F10R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F10R1;

typedef union {
    sSTM32F302_CAN_SCE_F10R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F10R1;

#define STM32F302_CAN_SCE_F10R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F10R2;

typedef union {
    sSTM32F302_CAN_SCE_F10R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F10R2;

#define STM32F302_CAN_SCE_F11R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F11R1;

typedef union {
    sSTM32F302_CAN_SCE_F11R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F11R1;

#define STM32F302_CAN_SCE_F11R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F11R2;

typedef union {
    sSTM32F302_CAN_SCE_F11R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F11R2;

#define STM32F302_CAN_SCE_F12R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F12R1;

typedef union {
    sSTM32F302_CAN_SCE_F12R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F12R1;

#define STM32F302_CAN_SCE_F12R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F12R2;

typedef union {
    sSTM32F302_CAN_SCE_F12R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F12R2;

#define STM32F302_CAN_SCE_F13R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F13R1;

typedef union {
    sSTM32F302_CAN_SCE_F13R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F13R1;

#define STM32F302_CAN_SCE_F13R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F13R2;

typedef union {
    sSTM32F302_CAN_SCE_F13R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F13R2;

#define STM32F302_CAN_SCE_F14R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F14R1;

typedef union {
    sSTM32F302_CAN_SCE_F14R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F14R1;

#define STM32F302_CAN_SCE_F14R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F14R2;

typedef union {
    sSTM32F302_CAN_SCE_F14R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F14R2;

#define STM32F302_CAN_SCE_F15R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F15R1;

typedef union {
    sSTM32F302_CAN_SCE_F15R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F15R1;

#define STM32F302_CAN_SCE_F15R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F15R2;

typedef union {
    sSTM32F302_CAN_SCE_F15R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F15R2;

#define STM32F302_CAN_SCE_F16R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F16R1;

typedef union {
    sSTM32F302_CAN_SCE_F16R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F16R1;

#define STM32F302_CAN_SCE_F16R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F16R2;

typedef union {
    sSTM32F302_CAN_SCE_F16R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F16R2;

#define STM32F302_CAN_SCE_F17R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F17R1;

typedef union {
    sSTM32F302_CAN_SCE_F17R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F17R1;

#define STM32F302_CAN_SCE_F17R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F17R2;

typedef union {
    sSTM32F302_CAN_SCE_F17R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F17R2;

#define STM32F302_CAN_SCE_F18R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F18R1;

typedef union {
    sSTM32F302_CAN_SCE_F18R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F18R1;

#define STM32F302_CAN_SCE_F18R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F18R2;

typedef union {
    sSTM32F302_CAN_SCE_F18R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F18R2;

#define STM32F302_CAN_SCE_F19R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F19R1;

typedef union {
    sSTM32F302_CAN_SCE_F19R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F19R1;

#define STM32F302_CAN_SCE_F19R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F19R2;

typedef union {
    sSTM32F302_CAN_SCE_F19R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F19R2;

#define STM32F302_CAN_SCE_F20R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F20R1;

typedef union {
    sSTM32F302_CAN_SCE_F20R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F20R1;

#define STM32F302_CAN_SCE_F20R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F20R2;

typedef union {
    sSTM32F302_CAN_SCE_F20R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F20R2;

#define STM32F302_CAN_SCE_F21R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F21R1;

typedef union {
    sSTM32F302_CAN_SCE_F21R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F21R1;

#define STM32F302_CAN_SCE_F21R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F21R2;

typedef union {
    sSTM32F302_CAN_SCE_F21R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F21R2;

#define STM32F302_CAN_SCE_F22R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F22R1;

typedef union {
    sSTM32F302_CAN_SCE_F22R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F22R1;

#define STM32F302_CAN_SCE_F22R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F22R2;

typedef union {
    sSTM32F302_CAN_SCE_F22R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F22R2;

#define STM32F302_CAN_SCE_F23R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F23R1;

typedef union {
    sSTM32F302_CAN_SCE_F23R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F23R1;

#define STM32F302_CAN_SCE_F23R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F23R2;

typedef union {
    sSTM32F302_CAN_SCE_F23R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F23R2;

#define STM32F302_CAN_SCE_F24R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F24R1;

typedef union {
    sSTM32F302_CAN_SCE_F24R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F24R1;

#define STM32F302_CAN_SCE_F24R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F24R2;

typedef union {
    sSTM32F302_CAN_SCE_F24R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F24R2;

#define STM32F302_CAN_SCE_F25R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F25R1;

typedef union {
    sSTM32F302_CAN_SCE_F25R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F25R1;

#define STM32F302_CAN_SCE_F25R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F25R2;

typedef union {
    sSTM32F302_CAN_SCE_F25R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F25R2;

#define STM32F302_CAN_SCE_F26R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F26R1;

typedef union {
    sSTM32F302_CAN_SCE_F26R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F26R1;

#define STM32F302_CAN_SCE_F26R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F26R2;

typedef union {
    sSTM32F302_CAN_SCE_F26R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F26R2;

#define STM32F302_CAN_SCE_F27R1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F27R1;

typedef union {
    sSTM32F302_CAN_SCE_F27R1 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F27R1;

#define STM32F302_CAN_SCE_F27R2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FB0 : 1;
    unsigned long FB1 : 1;
    unsigned long FB2 : 1;
    unsigned long FB3 : 1;
    unsigned long FB4 : 1;
    unsigned long FB5 : 1;
    unsigned long FB6 : 1;
    unsigned long FB7 : 1;
    unsigned long FB8 : 1;
    unsigned long FB9 : 1;
    unsigned long FB10 : 1;
    unsigned long FB11 : 1;
    unsigned long FB12 : 1;
    unsigned long FB13 : 1;
    unsigned long FB14 : 1;
    unsigned long FB15 : 1;
    unsigned long FB16 : 1;
    unsigned long FB17 : 1;
    unsigned long FB18 : 1;
    unsigned long FB19 : 1;
    unsigned long FB20 : 1;
    unsigned long FB21 : 1;
    unsigned long FB22 : 1;
    unsigned long FB23 : 1;
    unsigned long FB24 : 1;
    unsigned long FB25 : 1;
    unsigned long FB26 : 1;
    unsigned long FB27 : 1;
    unsigned long FB28 : 1;
    unsigned long FB29 : 1;
    unsigned long FB30 : 1;
    unsigned long FB31 : 1;
} sSTM32F302_CAN_SCE_F27R2;

typedef union {
    sSTM32F302_CAN_SCE_F27R2 Bit;
    unsigned long  All;
} uSTM32F302_CAN_SCE_F27R2;

typedef struct {
    uSTM32F302_CAN_SCE_MCR STM32F302_CAN_SCE_MCR; // Offset: 0x0
    uSTM32F302_CAN_SCE_MSR STM32F302_CAN_SCE_MSR; // Offset: 0x4
    uSTM32F302_CAN_SCE_TSR STM32F302_CAN_SCE_TSR; // Offset: 0x8
    uSTM32F302_CAN_SCE_RF0R STM32F302_CAN_SCE_RF0R; // Offset: 0xc
    uSTM32F302_CAN_SCE_RF1R STM32F302_CAN_SCE_RF1R; // Offset: 0x10
    uSTM32F302_CAN_SCE_IER STM32F302_CAN_SCE_IER; // Offset: 0x14
    uSTM32F302_CAN_SCE_ESR STM32F302_CAN_SCE_ESR; // Offset: 0x18
    uSTM32F302_CAN_SCE_BTR STM32F302_CAN_SCE_BTR; // Offset: 0x1c
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
    unsigned long Reserved16;
    unsigned long Reserved17;
    unsigned long Reserved18;
    unsigned long Reserved19;
    unsigned long Reserved20;
    unsigned long Reserved21;
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
    unsigned long Reserved42;
    unsigned long Reserved43;
    unsigned long Reserved44;
    unsigned long Reserved45;
    unsigned long Reserved46;
    unsigned long Reserved47;
    unsigned long Reserved48;
    unsigned long Reserved49;
    unsigned long Reserved50;
    unsigned long Reserved51;
    unsigned long Reserved52;
    unsigned long Reserved53;
    unsigned long Reserved54;
    unsigned long Reserved55;
    unsigned long Reserved56;
    unsigned long Reserved57;
    unsigned long Reserved58;
    unsigned long Reserved59;
    unsigned long Reserved60;
    unsigned long Reserved61;
    unsigned long Reserved62;
    unsigned long Reserved63;
    unsigned long Reserved64;
    unsigned long Reserved65;
    unsigned long Reserved66;
    unsigned long Reserved67;
    unsigned long Reserved68;
    unsigned long Reserved69;
    unsigned long Reserved70;
    unsigned long Reserved71;
    unsigned long Reserved72;
    unsigned long Reserved73;
    unsigned long Reserved74;
    unsigned long Reserved75;
    unsigned long Reserved76;
    unsigned long Reserved77;
    unsigned long Reserved78;
    unsigned long Reserved79;
    unsigned long Reserved80;
    unsigned long Reserved81;
    unsigned long Reserved82;
    unsigned long Reserved83;
    unsigned long Reserved84;
    unsigned long Reserved85;
    unsigned long Reserved86;
    unsigned long Reserved87;
    uSTM32F302_CAN_SCE_TI0R STM32F302_CAN_SCE_TI0R; // Offset: 0x180
    uSTM32F302_CAN_SCE_TDT0R STM32F302_CAN_SCE_TDT0R; // Offset: 0x184
    uSTM32F302_CAN_SCE_TDL0R STM32F302_CAN_SCE_TDL0R; // Offset: 0x188
    uSTM32F302_CAN_SCE_TDH0R STM32F302_CAN_SCE_TDH0R; // Offset: 0x18c
    uSTM32F302_CAN_SCE_TI1R STM32F302_CAN_SCE_TI1R; // Offset: 0x190
    uSTM32F302_CAN_SCE_TDT1R STM32F302_CAN_SCE_TDT1R; // Offset: 0x194
    uSTM32F302_CAN_SCE_TDL1R STM32F302_CAN_SCE_TDL1R; // Offset: 0x198
    uSTM32F302_CAN_SCE_TDH1R STM32F302_CAN_SCE_TDH1R; // Offset: 0x19c
    uSTM32F302_CAN_SCE_TI2R STM32F302_CAN_SCE_TI2R; // Offset: 0x1a0
    uSTM32F302_CAN_SCE_TDT2R STM32F302_CAN_SCE_TDT2R; // Offset: 0x1a4
    uSTM32F302_CAN_SCE_TDL2R STM32F302_CAN_SCE_TDL2R; // Offset: 0x1a8
    uSTM32F302_CAN_SCE_TDH2R STM32F302_CAN_SCE_TDH2R; // Offset: 0x1ac
    uSTM32F302_CAN_SCE_RI0R STM32F302_CAN_SCE_RI0R; // Offset: 0x1b0
    uSTM32F302_CAN_SCE_RDT0R STM32F302_CAN_SCE_RDT0R; // Offset: 0x1b4
    uSTM32F302_CAN_SCE_RDL0R STM32F302_CAN_SCE_RDL0R; // Offset: 0x1b8
    uSTM32F302_CAN_SCE_RDH0R STM32F302_CAN_SCE_RDH0R; // Offset: 0x1bc
    uSTM32F302_CAN_SCE_RI1R STM32F302_CAN_SCE_RI1R; // Offset: 0x1c0
    uSTM32F302_CAN_SCE_RDT1R STM32F302_CAN_SCE_RDT1R; // Offset: 0x1c4
    uSTM32F302_CAN_SCE_RDL1R STM32F302_CAN_SCE_RDL1R; // Offset: 0x1c8
    uSTM32F302_CAN_SCE_RDH1R STM32F302_CAN_SCE_RDH1R; // Offset: 0x1cc
    unsigned long Reserved88;
    unsigned long Reserved89;
    unsigned long Reserved90;
    unsigned long Reserved91;
    unsigned long Reserved92;
    unsigned long Reserved93;
    unsigned long Reserved94;
    unsigned long Reserved95;
    unsigned long Reserved96;
    unsigned long Reserved97;
    unsigned long Reserved98;
    unsigned long Reserved99;
    uSTM32F302_CAN_SCE_FMR STM32F302_CAN_SCE_FMR; // Offset: 0x200
    uSTM32F302_CAN_SCE_FM1R STM32F302_CAN_SCE_FM1R; // Offset: 0x204
    unsigned long Reserved100;
    uSTM32F302_CAN_SCE_FS1R STM32F302_CAN_SCE_FS1R; // Offset: 0x20c
    unsigned long Reserved101;
    uSTM32F302_CAN_SCE_FFA1R STM32F302_CAN_SCE_FFA1R; // Offset: 0x214
    unsigned long Reserved102;
    uSTM32F302_CAN_SCE_FA1R STM32F302_CAN_SCE_FA1R; // Offset: 0x21c
    unsigned long Reserved103;
    unsigned long Reserved104;
    unsigned long Reserved105;
    unsigned long Reserved106;
    unsigned long Reserved107;
    unsigned long Reserved108;
    unsigned long Reserved109;
    unsigned long Reserved110;
    uSTM32F302_CAN_SCE_F0R1 STM32F302_CAN_SCE_F0R1; // Offset: 0x240
    uSTM32F302_CAN_SCE_F0R2 STM32F302_CAN_SCE_F0R2; // Offset: 0x244
    uSTM32F302_CAN_SCE_F1R1 STM32F302_CAN_SCE_F1R1; // Offset: 0x248
    uSTM32F302_CAN_SCE_F1R2 STM32F302_CAN_SCE_F1R2; // Offset: 0x24c
    uSTM32F302_CAN_SCE_F2R1 STM32F302_CAN_SCE_F2R1; // Offset: 0x250
    uSTM32F302_CAN_SCE_F2R2 STM32F302_CAN_SCE_F2R2; // Offset: 0x254
    uSTM32F302_CAN_SCE_F3R1 STM32F302_CAN_SCE_F3R1; // Offset: 0x258
    uSTM32F302_CAN_SCE_F3R2 STM32F302_CAN_SCE_F3R2; // Offset: 0x25c
    uSTM32F302_CAN_SCE_F4R1 STM32F302_CAN_SCE_F4R1; // Offset: 0x260
    uSTM32F302_CAN_SCE_F4R2 STM32F302_CAN_SCE_F4R2; // Offset: 0x264
    uSTM32F302_CAN_SCE_F5R1 STM32F302_CAN_SCE_F5R1; // Offset: 0x268
    uSTM32F302_CAN_SCE_F5R2 STM32F302_CAN_SCE_F5R2; // Offset: 0x26c
    uSTM32F302_CAN_SCE_F6R1 STM32F302_CAN_SCE_F6R1; // Offset: 0x270
    uSTM32F302_CAN_SCE_F6R2 STM32F302_CAN_SCE_F6R2; // Offset: 0x274
    uSTM32F302_CAN_SCE_F7R1 STM32F302_CAN_SCE_F7R1; // Offset: 0x278
    uSTM32F302_CAN_SCE_F7R2 STM32F302_CAN_SCE_F7R2; // Offset: 0x27c
    uSTM32F302_CAN_SCE_F8R1 STM32F302_CAN_SCE_F8R1; // Offset: 0x280
    uSTM32F302_CAN_SCE_F8R2 STM32F302_CAN_SCE_F8R2; // Offset: 0x284
    uSTM32F302_CAN_SCE_F9R1 STM32F302_CAN_SCE_F9R1; // Offset: 0x288
    uSTM32F302_CAN_SCE_F9R2 STM32F302_CAN_SCE_F9R2; // Offset: 0x28c
    uSTM32F302_CAN_SCE_F10R1 STM32F302_CAN_SCE_F10R1; // Offset: 0x290
    uSTM32F302_CAN_SCE_F10R2 STM32F302_CAN_SCE_F10R2; // Offset: 0x294
    uSTM32F302_CAN_SCE_F11R1 STM32F302_CAN_SCE_F11R1; // Offset: 0x298
    uSTM32F302_CAN_SCE_F11R2 STM32F302_CAN_SCE_F11R2; // Offset: 0x29c
    uSTM32F302_CAN_SCE_F12R1 STM32F302_CAN_SCE_F12R1; // Offset: 0x2a0
    uSTM32F302_CAN_SCE_F12R2 STM32F302_CAN_SCE_F12R2; // Offset: 0x2a4
    uSTM32F302_CAN_SCE_F13R1 STM32F302_CAN_SCE_F13R1; // Offset: 0x2a8
    uSTM32F302_CAN_SCE_F13R2 STM32F302_CAN_SCE_F13R2; // Offset: 0x2ac
    uSTM32F302_CAN_SCE_F14R1 STM32F302_CAN_SCE_F14R1; // Offset: 0x2b0
    uSTM32F302_CAN_SCE_F14R2 STM32F302_CAN_SCE_F14R2; // Offset: 0x2b4
    uSTM32F302_CAN_SCE_F15R1 STM32F302_CAN_SCE_F15R1; // Offset: 0x2b8
    uSTM32F302_CAN_SCE_F15R2 STM32F302_CAN_SCE_F15R2; // Offset: 0x2bc
    uSTM32F302_CAN_SCE_F16R1 STM32F302_CAN_SCE_F16R1; // Offset: 0x2c0
    uSTM32F302_CAN_SCE_F16R2 STM32F302_CAN_SCE_F16R2; // Offset: 0x2c4
    uSTM32F302_CAN_SCE_F17R1 STM32F302_CAN_SCE_F17R1; // Offset: 0x2c8
    uSTM32F302_CAN_SCE_F17R2 STM32F302_CAN_SCE_F17R2; // Offset: 0x2cc
    uSTM32F302_CAN_SCE_F18R1 STM32F302_CAN_SCE_F18R1; // Offset: 0x2d0
    uSTM32F302_CAN_SCE_F18R2 STM32F302_CAN_SCE_F18R2; // Offset: 0x2d4
    uSTM32F302_CAN_SCE_F19R1 STM32F302_CAN_SCE_F19R1; // Offset: 0x2d8
    uSTM32F302_CAN_SCE_F19R2 STM32F302_CAN_SCE_F19R2; // Offset: 0x2dc
    uSTM32F302_CAN_SCE_F20R1 STM32F302_CAN_SCE_F20R1; // Offset: 0x2e0
    uSTM32F302_CAN_SCE_F20R2 STM32F302_CAN_SCE_F20R2; // Offset: 0x2e4
    uSTM32F302_CAN_SCE_F21R1 STM32F302_CAN_SCE_F21R1; // Offset: 0x2e8
    uSTM32F302_CAN_SCE_F21R2 STM32F302_CAN_SCE_F21R2; // Offset: 0x2ec
    uSTM32F302_CAN_SCE_F22R1 STM32F302_CAN_SCE_F22R1; // Offset: 0x2f0
    uSTM32F302_CAN_SCE_F22R2 STM32F302_CAN_SCE_F22R2; // Offset: 0x2f4
    uSTM32F302_CAN_SCE_F23R1 STM32F302_CAN_SCE_F23R1; // Offset: 0x2f8
    uSTM32F302_CAN_SCE_F23R2 STM32F302_CAN_SCE_F23R2; // Offset: 0x2fc
    uSTM32F302_CAN_SCE_F24R1 STM32F302_CAN_SCE_F24R1; // Offset: 0x300
    uSTM32F302_CAN_SCE_F24R2 STM32F302_CAN_SCE_F24R2; // Offset: 0x304
    uSTM32F302_CAN_SCE_F25R1 STM32F302_CAN_SCE_F25R1; // Offset: 0x308
    uSTM32F302_CAN_SCE_F25R2 STM32F302_CAN_SCE_F25R2; // Offset: 0x30c
    uSTM32F302_CAN_SCE_F26R1 STM32F302_CAN_SCE_F26R1; // Offset: 0x310
    uSTM32F302_CAN_SCE_F26R2 STM32F302_CAN_SCE_F26R2; // Offset: 0x314
    uSTM32F302_CAN_SCE_F27R1 STM32F302_CAN_SCE_F27R1; // Offset: 0x318
    uSTM32F302_CAN_SCE_F27R2 STM32F302_CAN_SCE_F27R2; // Offset: 0x31c
} sSTM32F302_CAN_SCE;

