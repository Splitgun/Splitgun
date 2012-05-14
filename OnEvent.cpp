#include "CApp.h"

void CApp::OnEvent(SDL_Event* Event){ //This function handles all input events
    if(Event->type == SDL_QUIT){

        Running = false;
    } else {

    //  bool isRunning = true;

        //The SDL event that we will poll to get events.


        switch(Event->type)
        {
            case SDL_QUIT:
            {
                Running = false;

                break;
            }

            case SDL_KEYDOWN:
            {
                keysPressed[Event->key.keysym.sym] = true; //push button

                break;
            }

            case SDL_KEYUP:
            {
                keysPressed[Event->key.keysym.sym] = false; // pop button

                break;
            }
        }


        Running = true;

    }










 //  SDL_BlitSurface(message, &rect1,Surf_Display, &rect2);



}
