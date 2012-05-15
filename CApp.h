#ifndef _CAPP_H_
    #define _CAPP_H_

#include <SDL.h>
#include <SDL_image.h>

class CApp {
    private:
        bool    Running;
        
		bool    bulletSpeedRed;
        bool    bulletSpeedBlue;
		
		bool	wKey;
		bool	wKeyDown;
		
		bool	upKey;
		bool    upKeyDown;


        SDL_Surface* Surf_Display;
		SDL_Surface* background;
        
		SDL_Surface* message;
        SDL_Surface* message1;
        
		SDL_Surface* bulletRed;
        SDL_Surface* bulletBlue;
        
        SDL_Rect backRec;
        SDL_Rect position;
        SDL_Rect position1;
        SDL_Rect redBulletPos;
        SDL_Rect blueBulletPos;
        SDL_Event keyEvent;


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
