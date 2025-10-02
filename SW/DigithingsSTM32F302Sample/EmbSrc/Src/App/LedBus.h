typedef enum { LED_BUS_DISABLED, LED_BUS_ENABLED } eLedBusEnabledState;

typedef struct {
	unsigned char LedGreen;
	unsigned char LedRed;
	unsigned char LedBlue;
	unsigned char LedWhite;
} tLedBrightness;

typedef struct {
	tLedBrightness LedBrightness[16];
} tLedStripGRBW;

void LedBusInit(void);
void LedBusMain(void);
const tLedStripGRBW* LedBusGetStrip(void);
unsigned char LedBusGetBrightness(void);
