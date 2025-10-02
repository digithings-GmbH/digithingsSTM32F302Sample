
typedef enum {AUTHORIZATION_NFC_TAG_NOT_COMPARED, AUTHORIZATION_NFC_TAG_UNKNOWN, AUTHORIZATION_NFC_TAG_VALID} eAuthorizationNfcTagValidState;

void AuthorizationInit (void);
void AuthorizationMain(void);
eAuthorizationNfcTagValidState AuthorizationNfcTagGetValidState(void);
