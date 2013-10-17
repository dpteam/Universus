//
//  platform.h
//  Universus
//
//  Created by Mage-Wizard on 17.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#ifndef _PLATFORM_H_
#define _PLATFORM_H_

// OS X platform

#if (defined(__APPLE__) && defined(__MACH__))

#define PLATFORM_OSX

#endif

// Linux platform

#if defined(__linux__)

#define PLATFORM_LINUX

#endif

// Windows platform

#if (defined(_WIN32) || defined(_WIN64))

#define PLATFORM_WIN

#endif

#endif
