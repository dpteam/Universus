//
//  u_script.h
//  Universus
//
//  Created by Mage-Wizard on 18.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#ifndef _U_SCRIPT_H_
#define _U_SCRIPT_H_

#include "u_luabinds.h"

class u_script : public u_luabinds
{
public:
    u_script();
    virtual ~u_script();
    
    // load & run script from file
    int doScriptFromFile(char* filename);
};

#endif