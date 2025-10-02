// Base Addres of DBGMCU = 0xE0042000

#define STM32F302_DBGMCU_IDCODE_RESET_VALUE 0x0
typedef struct {
    unsigned long DEV_ID : 12;
    unsigned long Res0 : 4;
    unsigned long REV_ID : 16;
} sSTM32F302_DBGMCU_IDCODE;

typedef union {
    sSTM32F302_DBGMCU_IDCODE Bit;
    unsigned long  All;
} uSTM32F302_DBGMCU_IDCODE;

#define STM32F302_DBGMCU_CR_RESET_VALUE 0x0
typedef struct {
    unsigned long DBG_SLEEP : 1;
    unsigned long DBG_STOP : 1;
    unsigned long DBG_STANDBY : 1;
    unsigned long Res0 : 2;
    unsigned long TRACE_IOEN : 1;
    unsigned long TRACE_MODE : 2;
    unsigned long Res1 : 24;
} sSTM32F302_DBGMCU_CR;

typedef union {
    sSTM32F302_DBGMCU_CR Bit;
    unsigned long  All;
} uSTM32F302_DBGMCU_CR;

#define STM32F302_DBGMCU_APB1FZ_RESET_VALUE 0x0
typedef struct {
    unsigned long DBG_TIM2_STOP : 1;
    unsigned long DBG_TIM3_STOP : 1;
    unsigned long DBG_TIM4_STOP : 1;
    unsigned long DBG_TIM5_STOP : 1;
    unsigned long DBG_TIM6_STOP : 1;
    unsigned long DBG_TIM7_STOP : 1;
    unsigned long DBG_TIM12_STOP : 1;
    unsigned long DBG_TIM13_STOP : 1;
    unsigned long DBG_TIMER14_STOP : 1;
    unsigned long DBG_TIM18_STOP : 1;
    unsigned long DBG_RTC_STOP : 1;
    unsigned long DBG_WWDG_STOP : 1;
    unsigned long DBG_IWDG_STOP : 1;
    unsigned long Res0 : 8;
    unsigned long I2C1_SMBUS_TIMEOUT : 1;
    unsigned long I2C2_SMBUS_TIMEOUT : 1;
    unsigned long Res1 : 2;
    unsigned long DBG_CAN_STOP : 1;
    unsigned long Res2 : 6;
} sSTM32F302_DBGMCU_APB1FZ;

typedef union {
    sSTM32F302_DBGMCU_APB1FZ Bit;
    unsigned long  All;
} uSTM32F302_DBGMCU_APB1FZ;

#define STM32F302_DBGMCU_APB2FZ_RESET_VALUE 0x0
typedef struct {
    unsigned long Res0 : 2;
    unsigned long DBG_TIM15_STOP : 1;
    unsigned long DBG_TIM16_STOP : 1;
    unsigned long DBG_TIM17_STO : 1;
    unsigned long DBG_TIM19_STOP : 1;
    unsigned long Res1 : 26;
} sSTM32F302_DBGMCU_APB2FZ;

typedef union {
    sSTM32F302_DBGMCU_APB2FZ Bit;
    unsigned long  All;
} uSTM32F302_DBGMCU_APB2FZ;

typedef struct {
    uSTM32F302_DBGMCU_IDCODE STM32F302_DBGMCU_IDCODE; // Offset: 0x0
    uSTM32F302_DBGMCU_CR STM32F302_DBGMCU_CR; // Offset: 0x4
    uSTM32F302_DBGMCU_APB1FZ STM32F302_DBGMCU_APB1FZ; // Offset: 0x8
    uSTM32F302_DBGMCU_APB2FZ STM32F302_DBGMCU_APB2FZ; // Offset: 0xc
} sSTM32F302_DBGMCU;

