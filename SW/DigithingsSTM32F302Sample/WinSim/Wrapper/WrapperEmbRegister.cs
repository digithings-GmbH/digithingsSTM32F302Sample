using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

namespace WinSim
{
    public class WrapperEmbRegister {
        public enum PeriperalRegister {
            CORTEX_M4_STK,
            CORTEX_M4_NVIC,
            F302_RCC,
            F302_GPIOA,
            F302_GPIOB,
            F302_GPIOC,
            F302_ADC1,
            F302_ADC12,
            F302_USART1,
            F302_DMA1_7,
            F302_TIM2,
            F302_FLASH,
            F302_SPI3,
            PERIPHERAL_REGISTER_COUNT
        };

        [DllImport("EmbSrc", SetLastError = true, CallingConvention = CallingConvention.Cdecl)]
        static public extern unsafe void WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister Peri, byte Offset, UInt32 Data);
        [DllImport("EmbSrc", SetLastError = true, CallingConvention = CallingConvention.Cdecl)]
        static public extern unsafe UInt32 WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister Peri, byte Offset);
    }
}