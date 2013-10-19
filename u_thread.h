//
//  u_thread.h
//  Universus
//
//  Created by Mage-Wizard on 18.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#ifndef _U_THREAD_
#define _U_THREAD_

#include <pthread.h>

enum ThreadPriority
{
    PRIORITY_LOW,
    PRIORITY_NORMAL,
    PRIORITY_HIGH
};

class u_thread 
{
public:
    pthread_t Thread;
};

#endif
