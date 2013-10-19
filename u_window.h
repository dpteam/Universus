//
//  u_window.h
//  Universus
//
//  Created by Mage-Wizard on 20.10.13.
//  Copyright (c) 2013 DartPowerTeam. All rights reserved.
//

#ifndef _U_WINDOW_H_
#define _U_WINDOW_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>

class u_window
{
public:
    u_window();
    
    bool initWindow(int height, int width);
    void Teardown();
    
private:
    SDL_Window* u_mainWindow;
    SDL_GLContext u_mainGLContext;
};

#endif
