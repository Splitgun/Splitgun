/*#include "SDL.h" 
int main( int argc, char* args[] ) 
{ 
	//Start SDL 
	SDL_Init( SDL_INIT_EVERYTHING ); 
	//Quit SDL 
	SDL_Quit(); 
	return 0; 
}*/

#include "CApp.h"


int main(int argc, char* argv[]) {

	//SDL_Init(SDL_INIT_VIDEO);
    CApp theApp;
 
    return theApp.OnExecute();
}