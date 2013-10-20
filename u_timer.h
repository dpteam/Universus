//
//  u_timer.h
//  Universus
//
//  Created by Mage-Wizard on 17.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#ifndef _U_TIMER_H_
#define _U_TIMER_H_

#include "u_platform.h"

// SDL2 includes for OS X and Linux
#if defined(PLATFORM_OSX) || defined(PLATFORM_LINUX)

#include <SDL2/SDL.h>

#endif

// SDL2 includes for Windows
#ifdef PLATFORM_WIN

#include <SDL.h>

#endif


// timer?

class u_timer
{
public:
    u_timer();
    
    // starts the timer
    virtual void Start();
    
    // pause the timer
    void Pause();
    
    // get timer ticks in mseconds
    int getTicks();
    
    // check if timer is paused
    bool isPaused();
    
    // check if times is started
    bool isStarted();
    
private:
    int ticks, last;
    bool u_started, u_paused;
};

#endif
