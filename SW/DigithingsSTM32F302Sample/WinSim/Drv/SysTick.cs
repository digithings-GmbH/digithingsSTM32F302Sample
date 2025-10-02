using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Runtime.InteropServices.ComTypes;
using System.Threading;
using WinSim;
using WinSim.WallboxApplication;

namespace Simulation.FirmwareInterface {
    class SysTick {
        static protected Thread _Thread;

        static long TestCount = 0;

        [DllImport("kernel32")]
        public static extern void GetSystemTimeAsFileTime(ref FILETIME lpSystemTimeAsFileTime);

        private const UInt64 IntervalIn100Us = 1000; // 100 Us is 100 microseconds

        static public void Start() {
            _Thread = new Thread(SystTickThreadCallback);
            _Thread.IsBackground = true;
            _Thread.Priority = ThreadPriority.Highest;
            _Thread.Start();
        }

        static private unsafe void SystTickThreadCallback() {
            double _microSecPerTick = 1000000D / System.Diagnostics.Stopwatch.Frequency;

            Stopwatch Stopwatch = new Stopwatch();

            Stopwatch.Start();
            Stopwatch.Restart();

            while (true) {
                if (Stopwatch.ElapsedTicks > 5000) {
                    Stopwatch.Restart();
                    ChargePilot.ChargePilotMain();
                    Rcc.RccMain();
                    Adc.AdcMain();
                    Gpio.GpioMain();
                    WrapperEmbSysTick.WrapperSysTickInt();
                }
            }
        }

        static public void Close() {
            _Thread.Interrupt();
        }
    }
}
