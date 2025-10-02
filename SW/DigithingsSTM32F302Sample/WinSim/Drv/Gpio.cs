using System;
using System.Reflection.Metadata;
using WinSim.WallboxApplication;

namespace WinSim {


    public class Gpio {
        public enum eGpioState { GPIO_LOW, GPIO_HIGH };

        public static eGpioState GpioStatePortA0 = eGpioState.GPIO_LOW;
        public static eGpioState GpioStatePortA1 = eGpioState.GPIO_LOW;
        public static eGpioState GpioStatePortA2 = eGpioState.GPIO_LOW;
        public static eGpioState GpioStatePortA3 = eGpioState.GPIO_LOW;
        public static eGpioState GpioStatePortB14 = eGpioState.GPIO_LOW;

        public static UInt32 GpioOdr = 0;

        const UInt32 GpioMask12 = 0x00001000;

        public static void GpioAMain() {
            UInt32 GpioBsrr = WrapperEmbRegister.WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister.F302_GPIOA, 0x18);
            UInt32 GpioSet = GpioBsrr & 0x0000FFFF;
            UInt32 GpioReset = ((GpioBsrr & 0xFFFF0000)>>16);

            if (GpioSet != 0) { 
                GpioOdr |= GpioSet; 
            }
            if (GpioReset != 0) { 
                GpioOdr &= ~GpioReset; 
            }

            if (1 == (GpioOdr & 1)) { GpioStatePortA0 = eGpioState.GPIO_HIGH; }
            else { GpioStatePortA0 = eGpioState.GPIO_LOW; }
            if (2 == (GpioOdr & 2)) { GpioStatePortA1 = eGpioState.GPIO_HIGH; }
            else { GpioStatePortA1 = eGpioState.GPIO_LOW; }
            if (4 == (GpioOdr & 4)) { GpioStatePortA2 = eGpioState.GPIO_HIGH; }
            else { GpioStatePortA2 = eGpioState.GPIO_LOW; }
            if (8 == (GpioOdr & 8)) { GpioStatePortA3 = eGpioState.GPIO_HIGH; }
            else { GpioStatePortA3 = eGpioState.GPIO_LOW; }

            WrapperEmbRegister.WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister.F302_GPIOA, 0x14, GpioOdr);
            WrapperEmbRegister.WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister.F302_GPIOA, 0x18, 0);
        }
        public static void GpioBMain() {
            UInt32 GpioBsrr = WrapperEmbRegister.WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister.F302_GPIOB, 0x18);
            UInt32 GpioIdr = WrapperEmbRegister.WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister.F302_GPIOB, 0x10);
            UInt32 GpioSet = GpioBsrr & 0x0000FFFF;
            UInt32 GpioReset = ((GpioBsrr & 0xFFFF0000) >> 16);

            if (GpioSet != 0) {
                GpioOdr |= GpioSet;
            }
            if (GpioReset != 0) {
                GpioOdr &= ~GpioReset;
            }

            if (0x00004000 == (GpioOdr & 0x00004000)) { 
                GpioStatePortB14 = eGpioState.GPIO_HIGH; 
            }
            else { 
                GpioStatePortB14 = eGpioState.GPIO_LOW; 
            }

            WrapperEmbRegister.WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister.F302_GPIOB, 0x14, GpioOdr);
            WrapperEmbRegister.WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister.F302_GPIOB, 0x18, 0);

            if (MainWindow.eWallboxConnectorLocked.WALLBOX_CONNECTOR_LOCKED_TRUE == MainWindow.WallboxConnectorLockedState) {
                GpioIdr &= ~GpioMask12;
            }
            else {
                GpioIdr |= GpioMask12;
            }
            WrapperEmbRegister.WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister.F302_GPIOB, 0x10, GpioIdr);
        }

        public static void GpioMain() {
            GpioAMain();
            GpioBMain();
        }
    }
}