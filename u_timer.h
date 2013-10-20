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

#include <SDL2/SDL.h>

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
