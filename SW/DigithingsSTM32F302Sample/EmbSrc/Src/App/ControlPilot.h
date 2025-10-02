
typedef enum { CP_A1 = 0xA1, CP_A2 = 0xA2, CP_B1 = 0xB1, CP_B2 = 0xB2, CP_C1 = 0xC1, CP_C2 = 0xC2, CP_E = 0X0E, CP_F = 0x0F } eControlPilotState;

void ControlPilotInit(void);
void ControlPilotMain(void);
unsigned char ControlPilotGetPwmDutyCycle(void);
eControlPilotState ControlPilotGetState(void);