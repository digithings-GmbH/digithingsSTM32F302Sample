@ECHO OFF


:: project name that also equals .hex-binary file
SET PROJ_NAME=%1
:: current binary directory
SET BINARY_DIR=%2

SET SREC_DIR=srecord
SET SREC_CONFIG=srec_RwsRc.config


cd ..\..\..\Tools\srec

:: check existence of tool
if not exist "srec_cat.exe" (
echo "srec_cat.exe does not exist."
goto :FINISH
)

:: check existence of hex file
if exist "..\..\EclipseWorkspace\RwsRc\Release\RwsRc.hex" (
goto :GEN_CONFIG
) else (
echo "..\..\EclipseWorkspace\RwsRc\Release\RwsRc.hex does not exist in folder."
goto :FINISH
)

if exist "..\..\EclipseWorkspace\RwsRcMainBootloader\Release\RwsRcMainBootloader.hex" (
goto :GEN_CONFIG
) else (
echo "..\..\EclipseWorkspace\RwsRcMainBootloader\Release\RwsRcMainBootloader.hex does not exist in folder."
goto :FINISH
)

:: generate the srecord config file
:GEN_CONFIG
:: STM32 reference manual defines the default polynomial value
:: of CRC-32 (Ethernet) is 0x4C11DB7, which is also used through
:: srecord. The address for the integrity table is 
:: 0x08000400, where the CRC-32 begins +64Bytes behind the FW-Signaure.
:: The srecord CRC32 init value is either -CITT value: 0xFFFFFFFF (default), 
:: or if needed zero using -XMODEM with the value 0x00000000.
(
echo # Please note the order of parameters is important
echo # excution e.g.: srec_cat @thisFile.config
echo.
echo # input file
echo ..\..\EclipseWorkspace\RwsRcMainBootloader\Release\RwsRcMainBootloader.hex       	# input file
echo -Intel                     		   	# input file format
echo ..\..\EclipseWorkspace\RwsRc\Release\RwsRc.hex       	# input file
echo -Intel                     		   	# input file format
echo.
echo # output parameter
echo -Output   
echo ..\..\EclipseWorkspace\RwsRc\Release\RwsRc_inc_Bl.hex   # output file
echo -Intel                      # output format
echo -line-length 44             # set line lenght similar to IAR output
echo -address-length=4           # output format in bytes, for STM32 32bit
)>%SREC_CONFIG%


call srec_cat.exe @%SREC_CONFIG%

:: finish batch file
:FINISH

