#include "CApp.h"

bool CApp::OnInit() { //This function handles all the loading of data

     if((Surf_Display = SDL_SetVideoMode(820, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
        return false;
    }

    SDL_WM_SetCaption("Splitgun",NULL);

	background = IMG_Load("finalBackGround.png");
    message = IMG_Load( "char1.png" );
    message1 = IMG_Load( "char2.png" );
	bulletRed = IMG_Load("bullet.png");
	bulletBlue = IMG_Load("bulletBlue.png");

	redBulletPos.x = 820;
    blueBulletPos.x = 820;

	backRec.x = 0;
	backRec.y = 0;
    
	position.x = 0;
    position.y = 400;
    
	position1.x = 720;
    position1.y = 400;

    memset(keysPressed, false, sizeof(keysPressed));

    return true;
}