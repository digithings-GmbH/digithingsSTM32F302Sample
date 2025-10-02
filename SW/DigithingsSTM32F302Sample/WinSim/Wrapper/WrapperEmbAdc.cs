using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using System.Security.RightsManagement;

namespace WinSim
{
    class WrapperEmbAdc {
        [DllImport("EmbSrc", SetLastError = true, CallingConvention = CallingConvention.Cdecl)]
        static public extern unsafe void WrapperAdcSetChannel(UInt32 AdcChannel, UInt32 AdcValue);
    }
}