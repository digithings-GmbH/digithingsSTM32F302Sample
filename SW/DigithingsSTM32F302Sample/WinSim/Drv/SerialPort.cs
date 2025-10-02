using System;
using System.Collections.Generic;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WinSim {
    internal class SerialPort {

        private static System.IO.Ports.SerialPort? _serialPort;
        public static string? LastReceivedString;
        public static void SerialPortInit() {
            _serialPort = new System.IO.Ports.SerialPort();
            _serialPort.PortName = "COM8";       // Ändere auf deinen COM-Port
            _serialPort.BaudRate = 19200;
            _serialPort.Parity = Parity.None;
            _serialPort.DataBits = 8;
            _serialPort.StopBits = StopBits.One;
            _serialPort.Handshake = Handshake.None;
            _serialPort.ReadTimeout = 1000;
            _serialPort.WriteTimeout = 1000;

            _serialPort.DataReceived += new SerialDataReceivedEventHandler(DataReceivedHandler);

            try {
                _serialPort.Open();
            }
            catch (Exception ex) {
                
            }
        }

        private static void DataReceivedHandler(object sender, SerialDataReceivedEventArgs e) {
            try {
                LastReceivedString = _serialPort.ReadLine();
            }
            catch (TimeoutException) {
            }
        }
    }
}
