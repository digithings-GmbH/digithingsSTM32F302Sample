#include "WrapperDef.h"
#include "..\Src\App\ControlPilot.h"

DLL_EXPORT eControlPilotState WrapperControlPilotGetState() { return ControlPilotGetState(); }
