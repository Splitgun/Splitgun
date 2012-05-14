#include "CApp.h"

CApp::CApp() {
    Surf_Display = NULL;
    message = NULL;
     screen = NULL;
    loadedImage = NULL;

    Running = true;

}

int CApp::OnExecute() {
    if(OnInit() == false) {
        return -1;
    }

    SDL_Event Event;

    while(Running) {
        while(SDL_PollEvent(&Event)) {
            OnEvent(&Event);
        }

        OnLoop();
        OnRender();
    }

    OnCleanup();

    return 0;
}
int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);

    CApp theApp;

    return theApp.OnExecute();
}
