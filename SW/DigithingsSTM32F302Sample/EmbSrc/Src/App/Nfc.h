typedef enum  { NFC_UID_NO_RESPONSE, NFC_UID_VALID_UID } eNfcLastReceived;

typedef struct {
	unsigned char Data[13];
} tNfcUid;

void NfcInit(void);
void NfcMain(void);
tNfcUid * NfcGetIdInAscii(void);
unsigned char NfcGetNfcReceivedIdCounter(void);
eNfcLastReceived NfcGetLastReceived (void);
