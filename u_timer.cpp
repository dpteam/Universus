//
//  u_timer.cpp
//  Universus
//
//  Created by Mage-Wizard on 17.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#include "u_timer.h"

u_timer::u_timer() : u_started(false), u_paused(false), ticks(0), last(0)
{
    // constructor
}

void u_timer::Pause()
{
    if(u_started && !u_paused) {
        last = SDL_GetTicks() - ticks;
        u_paused = true;
    }
}

void u_timer::Start()
{
    if(u_paused) 
    {
        ticks = SDL_GetTicks() - last;
        last = 0;
        u_paused = false;
        u_started = true;
    }
    
    ticks = SDL_GetTicks();
    u_started = true;
}

// get timer ticks in mseconds

int u_timer::getTicks()
{
    return this->ticks;
}

bool u_timer::isPaused()
{
    return &this->u_paused;
}

bool u_timer::isStarted()
{
    return &this->u_started;
}