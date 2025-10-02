using System;


namespace WinSim {


    public class Rcc {
        const UInt32 RCC_CR_HSION =  0x00000001;
        const UInt32 RCC_CR_HSRIDY = 0x00000002;
        const UInt32 RCC_CR_HSEON = 0x00010000;
        const UInt32 RCC_CR_HSERDY = 0x00020000;
        const UInt32 RCC_CR_PLLON = 0x01000000;
        const UInt32 RCC_CR_PLLRDY = 0x02000000;


        public static void RccMain() {
            UInt32 RccCr = WrapperEmbRegister.WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister.F302_RCC, 0);
            UInt32 RccCfgr = WrapperEmbRegister.WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister.F302_RCC, 0x10);

            RccCr |= RCC_CR_HSION;  /* HSI is after Reset always on and ready */
            RccCr |= RCC_CR_HSRIDY;

            if ((RccCr & RCC_CR_PLLON) == RCC_CR_PLLON)
            {
                RccCr |= RCC_CR_PLLRDY;
            }
            WrapperEmbRegister.WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister.F302_RCC, 0, RccCr);

            UInt32 RccSw = RccCfgr & 0x00000003;
            UInt32 RccSws = RccSw << 3;
            RccCfgr |= RccSws;
            WrapperEmbRegister.WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister.F302_RCC, 0x10, RccCfgr);
        }

    }
}