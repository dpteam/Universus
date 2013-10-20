//
//  u_platform.h
//  Universus
//
//  Created by Mage-Wizard on 20.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#ifndef _U_PLATFORM_H_
#define _U_PLATFORM_H_

#if (defined(__APPLE__) && defined(__MACH__))
#define PLATFORM_OSX
#endif

#if (defined(_WINDOWS) && defined(_MSC_VER))
#define PLATFORM_WIN
#endif

#if defined(__linux__)
#define PLATFORM_LINUX
#endif

#endif
