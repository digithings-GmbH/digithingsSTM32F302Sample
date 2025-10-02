using MicroLibrary;
using ScottPlot;
using ScottPlot.Hatches;
using Simulation.FirmwareInterface;
using System;
using System.Collections.Generic;
using System.IO.Ports;
using System.Linq;
using System.Net.NetworkInformation;
using System.Reflection.Metadata;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Media.Media3D;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Threading;
using System.Xml.Linq;
using System.Xml.Serialization;
using WinSim.WallboxApplication;
using static WinSim.Gpio;

namespace WinSim
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window {
        public enum eCarConnected { CAR_CONNECTED_FALSE, CAR_CONNECTED_TRUE }
        public enum eCarRedayForCharging { CAR_READY_FOR_CHARGING_FALSE, CAR_READY_FOR_CHARGING_TRUE }
        public enum eWallboxConnectorLocked { WALLBOX_CONNECTOR_LOCKED_FALSE, WALLBOX_CONNECTOR_LOCKED_TRUE }

        public static eCarConnected CarConnectedState = eCarConnected.CAR_CONNECTED_FALSE;
        public static eCarRedayForCharging CarReadyForChargingState = eCarRedayForCharging.CAR_READY_FOR_CHARGING_FALSE;
        public static eWallboxConnectorLocked WallboxConnectorLockedState = eWallboxConnectorLocked.WALLBOX_CONNECTOR_LOCKED_FALSE;

        public static UInt32 ControlPilotVoltage = 0;

        private DispatcherTimer WindowTimer;

        private BitmapImage bA1 = new BitmapImage(new Uri("pack://application:,,,/Images/CpStateA1.jpg", UriKind.Absolute));
        private BitmapImage bA2 = new BitmapImage(new Uri("pack://application:,,,/Images/CpStateA2.jpg", UriKind.Absolute));
        private BitmapImage bB1 = new BitmapImage(new Uri("pack://application:,,,/Images/CpStateB1.jpg", UriKind.Absolute));
        private BitmapImage bB2 = new BitmapImage(new Uri("pack://application:,,,/Images/CpStateB2.jpg", UriKind.Absolute));
        private BitmapImage bC1 = new BitmapImage(new Uri("pack://application:,,,/Images/CpStateC1.jpg", UriKind.Absolute));
        private BitmapImage bC2 = new BitmapImage(new Uri("pack://application:,,,/Images/CpStateC2.jpg", UriKind.Absolute));
        public MainWindow()
        {
            InitializeComponent();
            MainThread.Start();
            SysTick.Start();
            StartDispatcherTimer();
            SerialPort.SerialPortInit();
        }
        private void StartDispatcherTimer()
        {
            WindowTimer = new System.Windows.Threading.DispatcherTimer();
            WindowTimer.Tick += new EventHandler(dispatcherTimer_Tick);
            WindowTimer.Interval = TimeSpan.FromMilliseconds(100);
            WindowTimer.Start();
        }
        private void dispatcherTimer_Tick(object sender, EventArgs e)
        {
            this.Dispatcher.Invoke(new Action(() => { UpdateView(); }));
        }

        private void UpdateView() /* for future MVVM bindings */
        {
            if (eGpioState.GPIO_HIGH == Gpio.GpioStatePortA0) {
                CheckBoxStatusLed.IsChecked = true;
            }
            else {
                CheckBoxStatusLed.IsChecked = false;
            }

            if (eGpioState.GPIO_HIGH == Gpio.GpioStatePortA3) {
                CheckBox230VRelais.IsChecked = true;
            }
            else {
                CheckBox230VRelais.IsChecked = false;
            }

            UInt32 CpState = WrapperControlPilot.WrapperControlPilotGetState();

            BitmapImage b = bA2;
            BitmapImage br = bA2;

            switch (CpState) {
                case 0xA1: b = bA1; break;
                case 0xA2: b = bA2; break;
                case 0xB1: b = bB1; break;
                case 0xB2: b = bB2; break;
                case 0xC1: b = bC1; break;
                case 0xC2: b = bC2; break;
            }

            ImageCp.Source = b;

            string SerialPortDataReceivedString = SerialPort.LastReceivedString;
            if (SerialPortDataReceivedString != null) {
                string SerialPortDataReceivedStringCpInfo = SerialPortDataReceivedString.Substring(0, 5);
                switch (SerialPortDataReceivedStringCpInfo) {
                    case "CP_A1": br = bA1; break;
                    case "CP_A2": br = bA2; break;
                    case "CP_B1": br = bB1; break;
                    case "CP_B2": br = bB2; break;
                    case "CP_C1": br = bC1; break;
                    case "CP_C2": br = bC2; break;
                }
                ImageCpRemote.Source = br;

                string SerialPortDataReceivedString230VRelaisInfo = SerialPortDataReceivedString.Substring(6, 1);
                if ("0" == SerialPortDataReceivedString230VRelaisInfo) {
                    CheckBox230VRelaisRemote.IsChecked = false;
                }
                else {
                    CheckBox230VRelaisRemote.IsChecked = true;
                }
                string SerialPortDataReceivedStringLockInfo = SerialPortDataReceivedString.Substring(10, 1);
                if ("0" == SerialPortDataReceivedStringLockInfo) {
                    CheckBoxLockRemote.IsChecked = false;
                }
                else {
                    CheckBoxLockRemote.IsChecked = true;
                }

                string SerialPortDataReceivedStringStaeOfChargeInfo = SerialPortDataReceivedString.Substring(8, 1);
                LabelStateOfCHarge.Content = SerialPortDataReceivedStringStaeOfChargeInfo;
            }
        }

        private void CheckBoxInput_Checked(object sender, RoutedEventArgs e) {
            CheckBox cb = (CheckBox)sender;
            switch(cb.Name) {
                case "CheckBoxCarConnectedSimulation":
                    if (true == cb.IsChecked) { 
                        CarConnectedState = eCarConnected.CAR_CONNECTED_TRUE; }
                    else { 
                        CarConnectedState = eCarConnected.CAR_CONNECTED_FALSE; } break;
                case "CheckBoxCarReadySimulation":
                    if (true == cb.IsChecked) { 
                        CarReadyForChargingState = eCarRedayForCharging.CAR_READY_FOR_CHARGING_TRUE; }
                    else { 
                        CarReadyForChargingState = eCarRedayForCharging.CAR_READY_FOR_CHARGING_FALSE; }break;
                case "CheckBoxLockSimulation": ;
                    if (true == cb.IsChecked) { 
                        WallboxConnectorLockedState = eWallboxConnectorLocked.WALLBOX_CONNECTOR_LOCKED_TRUE; }
                    else { 
                        WallboxConnectorLockedState = eWallboxConnectorLocked.WALLBOX_CONNECTOR_LOCKED_FALSE; }
                    break;
            }
        }
    }
}
