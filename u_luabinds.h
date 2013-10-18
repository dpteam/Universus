//
//  u_luabinds.h
//  Universus
//
//  Created by Mage-Wizard on 18.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#ifndef _U_LUABINDS_H_
#define _U_LUABINDS_H_

extern "C" {
#include <Lua/Lua.h>
#include <Lua/lauxlib.h>
#include <Lua/lualib.h>
}

class u_luabinds
{
public:
    
    template<class T>
    void bindConstant(T value, char* constname);
    
    void createLuaTable();
    
    template<class T>
    void registerConstTable(T value, int index);
    
    void registerTable(char* tablename);
    
    int getArgumentCount();
    
    template<class T>
    T getArgument(int index);
    
    template<class T>
    void returnToScript(T value);

    lua_State *u_LuaState;
};

#endif
