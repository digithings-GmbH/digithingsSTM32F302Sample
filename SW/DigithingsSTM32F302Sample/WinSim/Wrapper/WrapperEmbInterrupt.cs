using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using System.Security.RightsManagement;

namespace WinSim
{
    class WrapperEmbInterrupt{
        [DllImport("EmbSrc", SetLastError = true, CallingConvention = CallingConvention.Cdecl)]
        static public extern unsafe void WrapperInterrupt(UInt16 Pos);
    }
}