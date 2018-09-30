// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>



// reference additional headers your program requires here

extern "C" {
#include <lua.h>
#include <lauxlib.h>
}

#include <MemoryUtil.h>
#include <Log.h>

#include <TES3Attachment.h>
#include <TES3Game.h>
#include <TES3Reference.h>
#include <TES3Script.h>
#include <TES3WorldController.h>

#include <TES3Util.h>
#include <UIUtil.h>

