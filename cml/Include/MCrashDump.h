#ifndef _MCRASHDUMP_H
#define _MCRASHDUMP_H

#include "MDebug.h"
#include "Shlwapi.h"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4091)
#endif
#include <dbghelp.h>
#ifdef _MSC_VER
#pragma warning(pop)
#endif


DWORD CrashExceptionDump(PEXCEPTION_POINTERS ExceptionInfo, const char* szDumpFileName);

#endif