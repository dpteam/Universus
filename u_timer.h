//
//  u_timer.h
//  Universus
//
//  Created by Mage-Wizard on 17.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#ifndef _U_TIMER_H_
#define _U_TIMER_H_

#include "platform.h"

// timer?

enum TimerState
{
    RUNNING,
    PAUSED,
    RESET
};

class u_timer
{
public:
    u_timer() : u_timerstate(RESET), elapsedTime(0) {}
    
    void Start();
    void Pause();
    void Reset();
    
    int getTicks();
    
private:
    int elapsedTime;
    
    TimerState u_timerstate;
};

#endif
