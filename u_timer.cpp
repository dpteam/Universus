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

void u_timer::Pause()
{
    last = ticks;
    
    elapsedTime = 0;
    
    u_timerState = PAUSED;
}

void u_timer::Start()
{
    if(u_timerState == PAUSED) 
    {
        elapsedTime = last;
        
        u_timerState = RUNNING;
    }
}

void u_timer::Reset()
{
    ticks = 0;
    last = 0;
    elapsedTime = 0;
    
    u_timerState = RESET;
}