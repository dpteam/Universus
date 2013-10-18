//
//  u_timer.h
//  Universus
//
//  Created by Mage-Wizard on 17.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#ifndef _U_TIMER_H_
#define _U_TIMER_H_

#include <SDL2/SDL.h>
#include "u_script.h"


// timer?

enum TimerState
{
    RUNNING,
    PAUSED,
    RESET,
    STOPPED
};

class u_timer
{
public:
    u_timer() : u_timerState(RUNNING), ticks(0), last(0) {}
    
    // starts the timer
    void Start(lua_State*);
    
    // pause the timer
    void Pause(lua_State*);
    
    // resets timer
    void Reset(lua_State*);
    
    // stop timer
    void Stop(lua_State*);
    
    // get timer ticks in mseconds
    int getTicks(lua_State*);
    
private:
    int ticks, last;
    
    TimerState u_timerState;
};

#endif
