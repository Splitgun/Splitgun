#ifndef _CAPP_H_
    #define _CAPP_H_

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

class CApp {
    private:
        bool    Running;

		bool    bulletSpeedRed;
        bool    bulletSpeedBlue;

		bool	wKey;
		bool	wKeyDown;

		bool	upKey;
		bool    upKeyDown;

		bool	scoreBarOn;

		int blueTeamScore;
		int redTeamScore;

        SDL_Surface* Surf_Display;
		SDL_Surface* background;

		SDL_Surface* redPlayer;
        SDL_Surface* bluePlayer;

		SDL_Surface* bulletRed;
        SDL_Surface* bulletBlue;

		SDL_Surface* blueBar;
		SDL_Surface* redBar;

		SDL_Rect blueBarPos;
		SDL_Rect redBarPos;

        SDL_Rect backgroungRec;
        SDL_Rect redPlayerPos;
        SDL_Rect bluePlayerPos;
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
