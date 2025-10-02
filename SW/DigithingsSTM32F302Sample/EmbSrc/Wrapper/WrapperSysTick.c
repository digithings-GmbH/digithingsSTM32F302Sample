#include "WrapperDef.h"

extern void CortexM4StkInt();
DLL_EXPORT void WrapperSysTickInt() { CortexM4StkInt(); }