#include "CApp.h"

void CApp::OnRender()
{
    SDL_FillRect(Surf_Display,&Surf_Display->clip_rect, 0x999fff);

    SDL_BlitSurface(background, NULL, Surf_Display, &backgroungRec);

	SDL_BlitSurface(redPlayer, NULL, Surf_Display, &redPlayerPos);
	SDL_BlitSurface(bluePlayer, NULL, Surf_Display, &bluePlayerPos);

	SDL_BlitSurface(bulletRed,NULL,Surf_Display, &redBulletPos);
    SDL_BlitSurface(bulletBlue,NULL,Surf_Display, &blueBulletPos);

	SDL_BlitSurface(blueBar,NULL,Surf_Display, &blueBarPos);
	SDL_BlitSurface(redBar,NULL,Surf_Display, &redBarPos);

    SDL_Flip(Surf_Display);

}
