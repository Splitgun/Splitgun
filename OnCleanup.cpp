#include "CApp.h"

void CApp::OnCleanup()
{
	SDL_FreeSurface(Surf_Display);
	SDL_FreeSurface(background);

	SDL_FreeSurface(redPlayer);
	SDL_FreeSurface(bluePlayer);

	SDL_FreeSurface(bulletRed);
	SDL_FreeSurface(bulletBlue);

	SDL_FreeSurface(blueBar);
	SDL_FreeSurface(redBar);

	SDL_Quit();
}
