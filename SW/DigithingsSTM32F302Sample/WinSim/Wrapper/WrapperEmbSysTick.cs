using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

namespace WinSim
{
    class WrapperEmbSysTick
    {
        [DllImport("EmbSrc", SetLastError = true, CallingConvention = CallingConvention.Cdecl)]
        static public extern unsafe void WrapperSysTickInt();
    }
}
