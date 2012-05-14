#include "CApp.h"

bool CApp::OnInit() { //This function handles all the loading of data

     if((Surf_Display = SDL_SetVideoMode(820, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
        return false;
    }

    SDL_WM_SetCaption("Splitgun",NULL);

    message = IMG_Load( "char1.png" );
   
    SDL_BlitSurface(message, &rect1,Surf_Display, &rect2);
    return true;
}
