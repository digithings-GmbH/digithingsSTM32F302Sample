using System.Threading;
using WinSim;

namespace Simulation.FirmwareInterface {
    class MainThread {
        static protected Thread _Thread;

        static public void Start() {
            _Thread = new Thread(MainThreadCallback);
            _Thread.IsBackground = true;
            _Thread.Start();
        }

        static private unsafe void MainThreadCallback() {
            WrapperEmbMain.WrapperMain();
            //Wrapper.WrapperFirmwareMain();
        }

        static public void Close() {
            _Thread.Interrupt();
        }

    }
}
