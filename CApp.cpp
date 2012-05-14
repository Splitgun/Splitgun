#include "CApp.h"

CApp::CApp() {
    Surf_Display = NULL;
    bulletRed = NULL;
	bulletBlue = NULL;
    message = NULL;
    message1 = NULL;
 //   screen = NULL;
    loadedImage = NULL;

	bulletSpeedRed = false;
    bulletSpeedBlue = false;
	wKey = false;
	wKeyDown = false;
	upKey = false;
	upKeyDown = false;

    background = NULL;
    Running = true;


}

