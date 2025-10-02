typedef enum  {STATUS_LED_ON, STATUS_LED_OFF} eStatusLedState;

void StatusLedInit(void);
void StatusLedMain(void);

eStatusLedState StatusLedGetState(void);
