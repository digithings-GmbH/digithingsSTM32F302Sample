typedef enum { SPI_UNDEF, SPI_NFC, SPI_FLASH, SPI_GYRO } eSpiChannel;

typedef struct {
	eSpiChannel SpiChannel;
	unsigned char Count;
	unsigned char Data[4];
} tSpiOutData;
