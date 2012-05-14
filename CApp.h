#ifndef _CAPP_H_
    #define _CAPP_H_

#include <SDL.h>
#include <SDL_image.h>

class CApp {
    private:
        bool    Running;

        SDL_Surface* Surf_Display;
        SDL_Surface* message;
        SDL_Surface* background;
        SDL_Surface* loadedImage;
        SDL_Surface* screen;
        SDL_Rect position;
        SDL_Event keyevent;
        SDL_Rect rect1;
        SDL_Rect rect2;
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
