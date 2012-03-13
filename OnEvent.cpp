#include "CApp.h"

void CApp::OnEvent(SDL_Event* Event){ //This function handles all input events
    if(Event->type == SDL_QUIT){
        Running = false;
    }

}
