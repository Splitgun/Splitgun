#include "CApp.h"

void CApp::OnLoop(){ //This function handles all the data updates

     if (keysPressed[SDLK_RIGHT])
    {
        position.x += 1;
    }else

    if (keysPressed[SDLK_LEFT])
    {
        position.x -= 1;
    }else



    if (keysPressed[SDLK_DOWN])
    {
        position.y += 1;
    }


}
