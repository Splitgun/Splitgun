#include "CApp.h"

bool CApp::OnInit() { //This function handles all the loading of data

     if((Surf_Display = SDL_SetVideoMode(820, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
        return false;
    }

    SDL_WM_SetCaption("Splitgun",NULL);

    message = IMG_Load( "char1.png" ); 
    message1 = IMG_Load( "char2.png" );
   //   apply_surface( 0, 0, background, screen );
 //  SDL_BlitSurface(message, &rect1,Surf_Display, &rect2);

    position.x = 0;
    position.y = 500;
    position1.x = 720;
    position1.y = 500;

    memset(keysPressed, false, sizeof(keysPressed));

    return true;
}
