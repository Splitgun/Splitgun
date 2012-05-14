#include "CApp.h"

void CApp::OnLoop(){ //This function handles all the data updates



     if (keysPressed[SDLK_d])
    {
        if (position.x <= 739 && position.x!=(position1.x-50))
            position.x += 1;
    }else
  //  position.x += 1;
    if (keysPressed[SDLK_a])
    {
        if(position.x!=(position1.x+50))
        position.x -= 1;
    }else

    if (keysPressed[SDLK_s])
    {
        if (position.y <=499 && position.y!=(position1.y))
            position.y += 1;
    }


     if (keysPressed[SDLK_RIGHT])
    {
        if (position1.x <= 739 && position1.x!=(position.x-50))
        position1.x += 1;
    }else

    if (keysPressed[SDLK_LEFT])
    {   if(position1.x!=(position.x+50))
        position1.x -= 1;
    }else

    if (keysPressed[SDLK_DOWN])
    {   if (position1.y <=499 && position1.y!=(position.y))
        position1.y += 1;
    }



}
