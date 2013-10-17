//
//  u_timer.cpp
//  Universus
//
//  Created by Mage-Wizard on 17.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#include "u_timer.h"

bool u_timer::isRunning(void)
{
    if(u_timerState == RUNNING) 
    {
        return true;
    }
    
    return false;
}

bool u_timer::isPaused(void)
{
    if(u_timerState == PAUSED) 
    {
        return true;
    }
    
    return false;
}

void u_timer::Pause(void)
{
    last = SDL_GetTicks() - ticks;
    
    u_timerState = PAUSED;
}

void u_timer::Start(void)
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

int u_timer::getTicks(void)
{
    return ticks;
}

void u_timer::Reset(void)
{
    ticks = 0;
    last = 0;
    
    u_timerState = RESET;
}

void u_timer::Stop(void)
{
    u_timer::Reset();
    
    u_timerState = STOPPED;
}