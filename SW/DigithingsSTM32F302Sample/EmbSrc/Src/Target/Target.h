

#ifdef WIN_SIM

#define ASM(x)
#define ATTRIBUTE_SECTION(x)
#define RAMFUNC

#define TARGET_PERIPH_MEMORY_SIZE 2048

typedef enum {
	CORTEX_M4_STK,
	CORTEX_M4_NVIC,
	F302_RCC,
	F302_GPIOA,
	F302_GPIOB,
	F302_GPIOC,
	F302_ADC1,
	F302_ADC12,
	F302_USART1,
	F302_DMA1_7,
	F302_TIM2,
	F302_FLASH,
	F302_SPI3,
	PERIPHERAL_REGISTER_COUNT
} tTargetPeriph;

typedef struct {
	unsigned char TargetMemory[TARGET_PERIPH_MEMORY_SIZE];
} tTargetMemoryBlock;

tTargetMemoryBlock TargetMemory[PERIPHERAL_REGISTER_COUNT];

#define CORTEX_M4_NVIC_ADR &TargetMemory[CORTEX_M4_STK]
#define CORTEX_M4_STK_ADR &TargetMemory[CORTEX_M4_NVIC]
#define F302_RCC_ADR &TargetMemory[F302_RCC]
#define F302_GPIOA_ADR &TargetMemory[F302_GPIOA]
#define F302_GPIOB_ADR &TargetMemory[F302_GPIOB]
#define F302_GPIOC_ADR &TargetMemory[F302_GPIOC]
#define F302_ADC1_ADR &TargetMemory[F302_ADC1]
#define F302_ADC12_ADR &TargetMemory[F302_ADC12]
#define F302_USART1_ADR &TargetMemory[F302_USART1]
#define F302_DMA1_7_ADR &TargetMemory[F302_DMA1_7]
#define F302_TIM2_ADR &TargetMemory[F302_TIM2]
#define F302_FLASH_ADR &TargetMemory[F302_FLASH]
#define F302_SPI3_ADR &TargetMemory[F302_SPI3]

void TargetRegisterWriteUsart1Tdr(unsigned char Data);

#else

#define ASM(x) asm(x)
#define ATTRIBUTE_SECTION(x) __attribute__ (x)
#define RAMFUNC __attribute__ ((long_call, section (".ramfunctions")))

#define CORTEX_M4_STK_ADR 0xE000E010
#define CORTEX_M4_NVIC_ADR 0xE000E100
#define F302_FLASH_ADR  0x40022000
#define F302_RCC_ADR 0x40021000
#define F302_GPIOA_ADR 0x48000000
#define F302_GPIOB_ADR 0x48000400
#define F302_GPIOC_ADR 0x48000800
#define F302_ADC1_ADR 0x50000000
#define F302_ADC12_ADR 0x50000300
#define F302_USART1_ADR 0x40013800
#define F302_DMA1_7_ADR 0x40020000
#define F302_TIM2_ADR 0x40000000
#define F302_SPI3_ADR 0x40003C00





void TargetRegisterWriteUsart1Tdr(unsigned char Data);

#endif
