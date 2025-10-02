typedef struct {
	unsigned char Count;
	char Data[34];
} tDebugTerminalData;

void DebugTerminalOutInit(void);
void DebugTerminalOutMain(void);
tDebugTerminalData * DebugTerminalOutGetData(void);
unsigned long DebugTerminalGetStringIndex(void);
unsigned long DebugTerminalGetSendDataCounter(void);
