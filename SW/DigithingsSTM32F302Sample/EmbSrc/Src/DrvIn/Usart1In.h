typedef struct {
	unsigned char Count;
	char Data[256];
} tUsart1RxData;

void Usart1InInt(void);
void Usart1InInit(void);
unsigned long Usart1InGetRxCount(void);
tUsart1RxData * Usart1GetRxData(void);
