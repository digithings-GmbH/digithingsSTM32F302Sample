#include "../Lib/MemCpy.h"
#include "../DrvIn/Spi3In.h"
#include "../HalIn/SpiSchedulerIn.h"
#include "../App/Nfc.h"
#include "../HalOut/SpiSchedulerOut.h"


unsigned char NfcNoResponseCounterOld;
unsigned char NfcReceiveCounterOld;
eNfcLastReceived NfcLastReceived;

const tNfcUid NFC_NO_RESPONSE_IN_ASCII = {"--.--.--.--\r\n"};
const tNfcUid NFC_ACTUAL_UID_IN_ACII = {"-1.-1.-1.-1\r\n"};
unsigned char NfcReceivedIdCounter;

tNfcUid NfcActualIdInAscii;
tNfcUid * pNfcActualIdInAscii;

void NfcInit(void) {
	NfcNoResponseCounterOld = 0;
	NfcReceiveCounterOld = 0;
	NfcReceivedIdCounter = 0;
	NfcLastReceived = NFC_UID_NO_RESPONSE;
	pNfcActualIdInAscii = (tNfcUid *)&NFC_NO_RESPONSE_IN_ASCII;
	memcpy(&NfcActualIdInAscii.Data[0], &NFC_ACTUAL_UID_IN_ACII,13);
}


char NfcNibbleToAscii(char Nibble) {
	char ret;
	switch (Nibble) {
		case 0x00 :  ret = '0'; break;
		case 0x01 :  ret = '1'; break;
		case 0x02 :  ret = '2'; break;
		case 0x03 :  ret = '3'; break;
		case 0x04 :  ret = '4'; break;
		case 0x05 :  ret = '5'; break;
		case 0x06 :  ret = '6'; break;
		case 0x07 :  ret = '7'; break;
		case 0x08 :  ret = '8'; break;
		case 0x09 :  ret = '9'; break;
		case 0x0A :  ret = 'a'; break;
		case 0x0B :  ret = 'b'; break;
		case 0x0C :  ret = 'c'; break;
		case 0x0D :  ret = 'd'; break;
		case 0x0E :  ret = 'e'; break;
		case 0x0F :  ret = 'f'; break;
		default: ret = ' ';
	}
	return ret;
}

void NfcMain(void) {
	unsigned char NfcNoResponseCounter;
	unsigned char NfcReceiveCounter;
	tSpiSchedulerInData * NfcSpiInData;
	NfcSpiInData = SpiSchedulerInGetData();
	NfcNoResponseCounter = SpiSchedulerOutGetNfcNoResponseCounter();
	NfcReceiveCounter = SpiSchedulerOutGetNfcReceiveCounter();
	if (NfcNoResponseCounter !=  NfcNoResponseCounterOld) {
		NfcNoResponseCounterOld = NfcNoResponseCounter;
		if (NFC_UID_VALID_UID == NfcLastReceived) {
			NfcLastReceived = NFC_UID_NO_RESPONSE;
			pNfcActualIdInAscii = (tNfcUid *)&NFC_NO_RESPONSE_IN_ASCII;
			NfcReceivedIdCounter++;
		}
	}
	if (NfcReceiveCounter !=  NfcReceiveCounterOld) {
		NfcReceiveCounterOld = NfcReceiveCounter;
		if (NFC_UID_NO_RESPONSE == NfcLastReceived) {
			NfcLastReceived = NFC_UID_VALID_UID;
			NfcActualIdInAscii.Data[0] = NfcNibbleToAscii(((NfcSpiInData->NfcTagUid.NfcTagUid[0]&0xF0)>>4));
			NfcActualIdInAscii.Data[1] = NfcNibbleToAscii((NfcSpiInData->NfcTagUid.NfcTagUid[0]&0x0F));
			NfcActualIdInAscii.Data[3] = NfcNibbleToAscii(((NfcSpiInData->NfcTagUid.NfcTagUid[1]&0xF0)>>4));
			NfcActualIdInAscii.Data[4] = NfcNibbleToAscii((NfcSpiInData->NfcTagUid.NfcTagUid[1]&0x0F));
			NfcActualIdInAscii.Data[6] = NfcNibbleToAscii(((NfcSpiInData->NfcTagUid.NfcTagUid[2]&0xF0)>>4));
			NfcActualIdInAscii.Data[7] = NfcNibbleToAscii((NfcSpiInData->NfcTagUid.NfcTagUid[2]&0x0F));
			NfcActualIdInAscii.Data[9] = NfcNibbleToAscii(((NfcSpiInData->NfcTagUid.NfcTagUid[3]&0xF0)>>4));
			NfcActualIdInAscii.Data[10] = NfcNibbleToAscii((NfcSpiInData->NfcTagUid.NfcTagUid[3]&0x0F));
			pNfcActualIdInAscii = (tNfcUid *)&NfcActualIdInAscii;
			NfcReceivedIdCounter++;
		}
	}
}

tNfcUid * NfcGetIdInAscii(void)  {
	return pNfcActualIdInAscii;
}

unsigned char NfcGetNfcReceivedIdCounter(void) {
	return NfcReceivedIdCounter;
}

eNfcLastReceived NfcGetLastReceived (void) {
	return NfcLastReceived;
}
