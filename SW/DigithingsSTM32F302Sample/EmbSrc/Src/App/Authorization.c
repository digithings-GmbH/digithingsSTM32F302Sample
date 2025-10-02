#include "../App/Authorization.h"
#include "../App/Nfc.h"


const unsigned char AuthorizationValidNfcTagId[] = {'e', '9', '.', 'f', '3', '.', '3', '3', '.', 'c', '1', '\r', '\n'};

unsigned char AuthorizationNfcReceivedCounterOld;
eAuthorizationNfcTagValidState AuthorizationNfcTagValidState;

void AuthorizationInit (void) {
	AuthorizationNfcReceivedCounterOld = 0;
	AuthorizationNfcTagValidState = AUTHORIZATION_NFC_TAG_NOT_COMPARED;
}

void AuthorizationMain(void) {
	unsigned char AuthorizationNfcReceivedCounterNow = NfcGetNfcReceivedIdCounter();
	tNfcUid * pAuthorizationNfcId = NfcGetIdInAscii();
	unsigned char i;
	if (AuthorizationNfcReceivedCounterNow != AuthorizationNfcReceivedCounterOld) {
		AuthorizationNfcTagValidState = AUTHORIZATION_NFC_TAG_VALID;
		for (i=0; i<13;i++) {
			if (AuthorizationValidNfcTagId[i] != pAuthorizationNfcId->Data[i]) {
				AuthorizationNfcTagValidState = AUTHORIZATION_NFC_TAG_UNKNOWN;
			}
		}

		AuthorizationNfcReceivedCounterOld = AuthorizationNfcReceivedCounterNow;

	}
}

eAuthorizationNfcTagValidState AuthorizationNfcTagGetValidState(void) {
	return AuthorizationNfcTagValidState;
}
