#include "CApp.h"

void CApp::OnRender() { //This function handles all the rendering of anything that shows up on the screen
    SDL_Init(SDL_INIT_VIDEO);
    SDL_FillRect(Surf_Display,&Surf_Display->clip_rect, 0x999fff); 


   SDL_BlitSurface(message, NULL, Surf_Display, &position);
   SDL_BlitSurface(message1, NULL, Surf_Display, &position1);

    SDL_Flip(Surf_Display);

}
