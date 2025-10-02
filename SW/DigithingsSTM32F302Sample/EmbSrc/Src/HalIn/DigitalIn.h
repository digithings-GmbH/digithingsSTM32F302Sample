typedef enum { DIGITAL_IN_NO_LOCK, DIGITAL_IN_LOCK } eDigitalInLockState; 
typedef enum { DIGITAL_IN_RELAIS_230V_REQUEST_OPEN, DIGITAL_IN_RELAIS_230V_REQUEST_CLOSE} eDigitalInRelais230VOutput;

eDigitalInLockState DigitalInGetLockState(void);
eDigitalInRelais230VOutput DigitalInGetRelais230VRequestState(void);