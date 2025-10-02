typedef struct {
	unsigned char Size;
	unsigned char Data[4];
} tSpiInData;

void Spi3InInit(void);
void Spi3InInt(void);
tSpiInData Spi3InGetData(void);
