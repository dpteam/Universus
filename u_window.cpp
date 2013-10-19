//
//  u_window.cpp
//  Universus
//
//  Created by Mage-Wizard on 20.10.13.
//  Copyright (c) 2013 DartPower Team. All rights reserved.
//

#include "u_window.h"

bool u_window::initWindow(int height, int width)
{
    // create the main window
    u_mainWindow = SDL_CreateWindow("Universus", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
    
    if(!u_mainWindow)
        return false;
    
    // create OpenGL context
    u_mainGLContext = SDL_GL_CreateContext(u_mainWindow);
    
    // enable double buffering
    SDL_GL_SwapWindow(u_mainWindow);
    
    // if all done, return true
    return true;
}

void u_window::Teardown()
{
    // destroy OpenGL context
    SDL_GL_DeleteContext(u_mainGLContext);
    
    // destroy the main window
    SDL_DestroyWindow(u_mainWindow);
}