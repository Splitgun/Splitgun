#include "CApp.h"

void CApp::OnRender() { //This function handles all the rendering of anything that shows up on the screen

    SDL_FillRect(Surf_Display,&Surf_Display->clip_rect, 0x999fff); 

    rect1.x = 0;
    rect1.y = 0;
    rect1.w = message->w;
    rect1.h = message->h;

    rect2.x = position.x;
    rect2.y = position.y;

   SDL_BlitSurface(message, NULL, Surf_Display, &position);

    SDL_Flip(Surf_Display);

}
