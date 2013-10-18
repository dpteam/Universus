//
//  u_thread.h
//  Universus
//
//  Created by Mage-Wizard on 18.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#ifndef _U_THREAD_
#define _U_THREAD_

#include <SDL2/SDL_thread.h>

class u_thread 
{
public:
    friend int threadRunner(void*);
    
    u_thread();
    virtual ~u_thread();
    
    void Start(char *threadName);
    
    int Wait();
    
    void Kill();
    
    void setThreadPriority(SDL_ThreadPriority *priority);
    
private:
    SDL_Thread *thread;
    
    int _run();
    
    virtual int run();
};

#endif
