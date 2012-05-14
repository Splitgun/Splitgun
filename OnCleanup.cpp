#include "CApp.h"

void CApp::OnCleanup(){ //This function simply cleans up any resources loaded
SDL_FreeSurface(Surf_Display);
 SDL_FreeSurface(message);
 SDL_FreeSurface(message1);
 SDL_FreeSurface(bulletRed);
 SDL_FreeSurface(bulletBlue);
SDL_Quit();
}
