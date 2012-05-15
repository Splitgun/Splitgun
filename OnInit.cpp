#include "CApp.h"

bool CApp::OnInit()
{

     if((Surf_Display = SDL_SetVideoMode(820, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
        return false;
    }

    SDL_WM_SetCaption("Splitgun",NULL);

	background = IMG_Load("finalBackGround.png");

	redPlayer = IMG_Load( "char1.png" );
    bluePlayer = IMG_Load( "char2.png" );

	bulletRed = IMG_Load("bullet.png");
	bulletBlue = IMG_Load("bulletBlue.png");

	blueBar = IMG_Load("blueBar.png");
	redBar = IMG_Load("redBar.png");

	blueBarPos.x = 820;
	blueBarPos.y = 200;
	redBarPos.x = 820;
	redBarPos.y = 200;

	redBulletPos.x = 820;
    blueBulletPos.x = 820;

	backgroungRec.x = 0;
	backgroungRec.y = 0;

	redPlayerPos.x = 0;
    redPlayerPos.y = 400;

	bluePlayerPos.x = 720;
    bluePlayerPos.y = 400;

    memset(keysPressed, false, sizeof(keysPressed));

    return true;
}
