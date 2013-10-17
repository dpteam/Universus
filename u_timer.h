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
    u_timer();
    
    void Start();
    void Pause();
    void Reset();
    
private:
    clock_t startAt;
    clock_t elapsedTime;
};

#endif
