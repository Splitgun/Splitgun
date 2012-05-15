#include "CApp.h"

CApp::CApp()
{
    Surf_Display = NULL;
    bulletRed = NULL;
	bulletBlue = NULL;
	blueBar = NULL;
	redBar = NULL;
    redPlayer = NULL;
    bluePlayer = NULL;

	bulletSpeedRed = false;
    bulletSpeedBlue = false;

	wKey = false;
	wKeyDown = false;

	upKey = false;
	upKeyDown = false;

	scoreBarOn = false;

    background = NULL;
    Running = true;

	blueTeamScore = 0;
	redTeamScore = 0;

}

