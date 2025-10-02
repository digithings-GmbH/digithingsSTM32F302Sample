using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static WinSim.MainWindow;

namespace WinSim.WallboxApplication {
    internal class ChargePilot {
        public static UInt32 CpVoltage = 0;
        public static void ChargePilotMain() {
            CpVoltage = 2000;
            if (eCarConnected.CAR_CONNECTED_TRUE == MainWindow.CarConnectedState) {
                CpVoltage = 1400;
                if (eCarRedayForCharging.CAR_READY_FOR_CHARGING_TRUE == MainWindow.CarReadyForChargingState) {
                    CpVoltage = 1300;
                }
            }
        }
    }
}