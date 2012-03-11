#include "CApp.h"

bool CApp::OnInit() { //This function handles all the loading of data

     if((Surf_Display = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
        return false;
    }
    return true;
}
