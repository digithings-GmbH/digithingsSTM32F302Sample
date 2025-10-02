#include "../HalIn/DigitalIn.h"
#include "../DrvIn/GpioIn.h"

eDigitalInLockState DigitalInGetLockState(void) {
	eGpioInPortState DigitalInState;
	DigitalInState = GpioInGetPortB12();
	if (GPIO_IN_PORT_HIGH == DigitalInState) {
		return DIGITAL_IN_NO_LOCK;
	}
	else {
		return DIGITAL_IN_LOCK;
	}
}
