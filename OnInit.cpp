#include "CApp.h"

bool CApp::OnInit() { //This function handles all the loading of data

     if((Surf_Display = SDL_SetVideoMode(820, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
        return false;
    }

    SDL_WM_SetCaption("Splitgun",NULL);

    message = IMG_Load( "char1.png" ); // da napravq transperent png image
    message1 = IMG_Load( "char2.png" );
    bulletRed = IMG_Load( "bullet.png");
    bulletBlue = IMG_Load( "bulletBlue.png");
    background = IMG_Load ("finalBackGround.png");
   //   apply_surface( 0, 0, background, screen );
 //  SDL_BlitSurface(message, &rect1,Surf_Display, &rect2);

    backRec.x = 0;
    backRec.y = 0;
    position.x = 0;
    position.y = 400;
    position1.x = 750;
    position1.y = 400;

    //redBulletPos.x = position.x+75;
    //redBulletPos.y = position.y+26;
    memset(keysPressed, false, sizeof(keysPressed));

    return true;
}
