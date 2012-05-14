#ifndef _CAPP_H_
    #define _CAPP_H_

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

class CApp {
    private:
        bool    Running;

        SDL_Surface* Surf_Display;
        SDL_Surface* message;
        SDL_Surface* message1;
        SDL_Surface* bulletRed;
        SDL_Surface* background;
        SDL_Surface* loadedImage;
    //    SDL_Surface* screen;
        SDL_Rect position;
        SDL_Rect position1;
        SDL_Event keyEvent;
        SDL_Rect rect1;
        SDL_Rect rect2;
        SDL_Rect rect3;
        SDL_Rect rect4;

        bool keysPressed[332];

    public:
        CApp();

        int OnExecute();

    public:

        bool OnInit();

        void OnEvent(SDL_Event* Event);

        void OnLoop();

        void OnRender();

        void OnCleanup();
};

#endif
