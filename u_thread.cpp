//
//  u_thread.cpp
//  Universus
//
//  Created by Mage-Wizard on 18.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#include "u_thread.h"

int threadRunner(void* data) {
    return reinterpret_cast<u_thread*>(data)->_run();
} 

int u_thread::_run()
{
    int ret = run();
    
    thread = 0;
    
    return ret;
}

int u_thread::run()
{
    return 0;
}

void u_thread::Start(char *threadName)
{
    if(thread) return;
    
    thread = SDL_CreateThread(threadRunner, threadName, this);
}

int u_thread::Wait()
{
    int ret = 0;
    if(!thread) return 0;
    SDL_WaitThread(thread, &ret);
    
    return ret;
}

void u_thread::setThreadPriority(SDL_ThreadPriority *priority)
{
    SDL_SetThreadPriority(*priority);
}