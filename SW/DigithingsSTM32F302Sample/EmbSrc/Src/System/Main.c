
#include "..\Target\Target.h"
#include "../Drv/F302_Flash.h"
#include "../Drv/F302Dma.h"
#include "../CortexM4/CortexM4Nvic.h"
#include "../CortexM4/CortexM4Stk.h"
#include "../System/Timeslice.h"
#include "../Drv/F302Rcc.h"
#include "../Drv/F302Gpio.h"
#include "../Drv/F302Timer2.h"
#include "../Drv/F302Dma.h"
#include "../Drv/F302Adc.h"
#include "../Drv/F302Spi3.h"
#include "../DrvIn/Spi3In.h"
#include "../App/ControlPilot.h"
#include "../App/Relais230V.h"
#include "../App/LedBus.h"
#include "../App/Nfc.h"
#include "../App/ControlPilotVoltMeasure.h"
#include "../App/Authorization.h"
#include "../DrvIn/Usart1In.h"
#include "../DrvOut/Usart1Out.h"
#include "../Drv/F302Usart1.h"
#include "../HalOut/NeoPixel.h"
#include "../HalOut/DebugTerminalOut.h"
#include "../HalOut/SpiSchedulerOut.h"
#include "../HalIn/SpiSchedulerIn.h"


int main()
{
	F302_FlashInit();
	F302RccInit();

	ControlPilotVoltMeasureInit();
	DebugTerminalOutInit();
	Relais230VInit();
	ControlPilotInit();
	LedBusInit();
	NeoPixelInit();

	AuthorizationInit();
	NfcInit();
	SpiSchedulerInInit();
	SpiSchedulerOutInit();
	Spi3Init();
	Spi3InInit();

	F302GpioInit();
	F302Timer2Init();
	F302DmaInitCh1(); /* ADC */
	F302DmaInitCh5(); /* Neo Pixel */
	F302AdcInit();

	Usart1InInit();
	Usart1OutInit();
	Usart1Init();

	CortexM4NvicInit();
	CortexM4StkInit();
	TimesliceInit();
	StartTimesliceForever();

	while(1);
	return 0;
}
