#include "../HalIn/MeasureIn.h"

unsigned long StateOfChargeGetState_Permille(void) {
	unsigned long StateOfChargeAdValue = MeasureInGetStateOfChargeRaw();
	unsigned long StateOfChargeInPromille;
	StateOfChargeInPromille = StateOfChargeAdValue * 1000;
	StateOfChargeInPromille /= 4096;
	return StateOfChargeInPromille;
}
