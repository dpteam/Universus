//
//  u_script.cpp
//  Universus
//
//  Created by Mage-Wizard on 18.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#include "u_script.h"

// initialize

u_script::u_script()
{
    u_LuaState = lua_open();
    
    // provides math
    luaopen_math(u_LuaState);
    
    // provides base
    luaopen_base(u_LuaState);
    
    // provides math
    luaopen_math(u_LuaState);
};

// destroy
u_script::~u_script()
{
    lua_close(u_LuaState);
}

// load & run script from file

int u_script::doScriptFromFile(char *filename)
{
    luaL_dofile(u_LuaState, filename);
    
    return lua_tointeger(u_LuaState, lua_gettop(u_LuaState));
}