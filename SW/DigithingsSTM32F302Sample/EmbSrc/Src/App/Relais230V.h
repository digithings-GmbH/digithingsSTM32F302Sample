
typedef enum { RELAIS_230V_OPEN, RELAIS_230V_CLOSED } eRelais230VStatus;

void Relais230VInit(void);
void Relais230VMain(void);
eRelais230VStatus Relais230VGetState(void);