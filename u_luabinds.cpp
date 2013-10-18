//
//  u_luabinds.cpp
//  Universus
//
//  Created by Mage-Wizard on 18.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#include "u_luabinds.h"

// bind integer
template<>
void u_luabinds::bindConstant<int>(int value, char *constname)
{
    lua_pushinteger(u_LuaState, value);
    lua_setglobal(u_LuaState, constname);
}

// bind double
template<>
void u_luabinds::bindConstant<double>(double value, char *constname)
{
    lua_pushnumber(u_LuaState, value);
    lua_setglobal(u_LuaState, constname);
}

// bind char
template<>
void u_luabinds::bindConstant<char*>(char* value, char *constname)
{
    lua_pushstring(u_LuaState, value);
    lua_setglobal(u_LuaState, constname);
}

// bind bool

template<>
void u_luabinds::bindConstant<bool>(bool value, char *constname)
{
    lua_pushboolean(u_LuaState, value);
    lua_setglobal(u_LuaState, constname);
}

// bind lua_cfunction
template<>
void u_luabinds::bindConstant<lua_CFunction>(lua_CFunction value, char *constname)
{
    lua_pushcfunction(u_LuaState, value);
    lua_setglobal(u_LuaState, constname);
}

// create lua table
void u_luabinds::createLuaTable()
{
    lua_createtable(u_LuaState, 2, 0);
}

// register int constant in table
template<>
void u_luabinds::registerConstTable(int value, int index)
{
    lua_pushnumber(u_LuaState, index);
    lua_pushinteger(u_LuaState, value);
    lua_settable(u_LuaState, -3);
}

// register double constant in table
template<>
void u_luabinds::registerConstTable<double>(double value, int index)
{
    lua_pushnumber(u_LuaState, index);
    lua_pushnumber(u_LuaState, value);
    lua_settable(u_LuaState, -3);
}

// register char constant in table
template<>
void u_luabinds::registerConstTable<char*>(char* value, int index)
{
    lua_pushnumber(u_LuaState, index);
    lua_pushstring(u_LuaState, value);
    lua_settable(u_LuaState, -3);
}

// register bool constant in table
template<>
void u_luabinds::registerConstTable<bool>(bool value, int index)
{
    lua_pushnumber(u_LuaState, index);
    lua_pushboolean(u_LuaState, value);
    lua_settable(u_LuaState, -3);
}

// register lua_cfunction in table
template<>
void u_luabinds::registerConstTable<lua_CFunction>(lua_CFunction value, int index)
{
    lua_pushnumber(u_LuaState, index);
    lua_pushcfunction(u_LuaState, value);
    lua_settable(u_LuaState, -3);
}

// register lua table
void u_luabinds::registerTable(char *tablename)
{
    lua_setglobal(u_LuaState, tablename);
}

int u_luabinds::getArgumentCount()
{
    return lua_gettop(u_LuaState);
}

template<>
int u_luabinds::getArgument<int>(int index)
{
    return lua_tointeger(u_LuaState, index);
}

template<>
double u_luabinds::getArgument<double>(int index)
{
    return lua_tonumber(u_LuaState, index);
}

template<>
char* u_luabinds::getArgument<char*>(int index)
{
    return (char*)lua_tostring(u_LuaState, index);
}

template<>
bool u_luabinds::getArgument<bool>(int index)
{
    return lua_toboolean(u_LuaState, index);
}

template<>
void u_luabinds::returnToScript<int>(int value)
{
    lua_pushinteger(u_LuaState, value);
}

template<>
void u_luabinds::returnToScript<double>(double value)
{
    lua_pushnumber(u_LuaState, value);
}

template<>
void u_luabinds::returnToScript<char*>(char* value)
{
    lua_pushstring(u_LuaState, value);
}

template<>
void u_luabinds::returnToScript<bool>(bool value)
{
    lua_pushboolean(u_LuaState, value);
}