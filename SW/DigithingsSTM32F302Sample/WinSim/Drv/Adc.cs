using System;
using WinSim.WallboxApplication;


namespace WinSim {


    public class Adc {
        const UInt32 ADC_CR_ADEN = 0x00000001;
        const UInt32 ADC_ISR_ADRDY = 0x00000001;
        const UInt32 ADC_ISR_LDORDY = 0x00001000;
        const UInt32 ADC_CR_ADCAL = 0x80000000;

       
        public static void AdcMain() {
            UInt32 Adc1Isr = WrapperEmbRegister.WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister.F302_ADC1, 0);
            UInt32 Adc1Cr = WrapperEmbRegister.WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister.F302_ADC1, 8);
            if ((Adc1Cr & ADC_CR_ADCAL) == ADC_CR_ADCAL) {
                Adc1Cr &= ~ADC_CR_ADCAL;
            }

            if ((Adc1Cr & ADC_CR_ADEN) == ADC_CR_ADEN) {
                Adc1Isr |= ADC_ISR_ADRDY;
            }
            WrapperEmbRegister.WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister.F302_ADC1, 8, Adc1Cr);
            WrapperEmbRegister.WrapperRegisterWrite(WrapperEmbRegister.PeriperalRegister.F302_ADC1, 0, Adc1Isr);

            WrapperEmbAdc.WrapperAdcSetChannel(0, ChargePilot.CpVoltage); 
        }
    }
}