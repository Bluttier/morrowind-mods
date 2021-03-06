
#include "stdafx.h"

extern "C" {
#include <lua.h>
#include <lauxlib.h>
}

#include "PatchWorldMap.h"

static const struct luaL_Reg functions[] = {
	{ "hookMapOverrides", UIEXT::patchWorldMap },
	{ "setMapZoom", UIEXT::setMapZoom },
	{ NULL, NULL }
};

extern "C" int __declspec(dllexport) luaopen_uiextension(lua_State* L) {
	luaL_register(L, "uiextension", functions);
	return 1;
}
