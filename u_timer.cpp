//
//  u_timer.cpp
//  Universus
//
//  Created by Mage-Wizard on 17.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#include "u_timer.h"

void u_timer::Pause(lua_State *L)
{
    last = SDL_GetTicks() - ticks;
    
    u_timerState = PAUSED;
}

void u_timer::Start(lua_State *L)
{
    if(u_timerState == PAUSED) 
    {
        ticks = SDL_GetTicks() - last;
        
        last = 0;
        
        u_timerState = RUNNING;
    }
    
    ticks = SDL_GetTicks();
}

// get timer ticks in mseconds

int u_timer::getTicks(lua_State *L)
{
    return ticks;
}

void u_timer::Reset(lua_State *L)
{
    ticks = 0;
    last = 0;
    
    u_timerState = RESET;
}

void u_timer::Stop(lua_State *L)
{
    u_timerState = STOPPED;
}