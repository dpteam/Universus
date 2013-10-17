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
    void Start(void);
    
    // pause the timer
    void Pause(void);
    
    // resets timer
    void Reset(void);
    
    // stop timer
    void Stop(void);
    
    // get timer ticks in mseconds
    int getTicks();
    
    // if timer is running, return BOOL (not u_timerState)
    bool isRunning(void);
    
    // if timer is paused, return BOOL (not u_timerState)
    bool isPaused(void);
    
private:
    int ticks, last;
    
    TimerState u_timerState;
};

#endif
