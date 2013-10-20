//
//  u_thread.h
//  Universus
//
//  Created by Mage-Wizard on 18.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#ifndef _U_THREAD_
#define _U_THREAD_

#include "u_platform.h"

// SDL2 includes for OS X and Linux
#if defined(PLATFORM_OSX) || defined(PLATFORM_LINUX)

#include <SDL2/SDL_thread.h>

#endif

// SDL2 includes for Windows
#ifdef PLATFORM_WIN

#include <SDL2/SDL_thread.h>

#endif


enum ThreadPriority 
{
    PRIORITY_LOW = SDL_THREAD_PRIORITY_LOW,
    PRIORITY_NORMAL = SDL_THREAD_PRIORITY_NORMAL,
    PRIORITY_HIGH = SDL_THREAD_PRIORITY_HIGH
};

class u_thread 
{
public:
    u_thread();
    
    friend int threadRunner(void*);
    
    // starts the thread
    void Start(char *threadName);
    
    int Wait();
    
    void setThreadPriority(ThreadPriority *priority);    
    
private:
    SDL_Thread *thread;
    int _run();
    virtual int run();    
};

#endif
