#include "CApp.h"

int CApp::OnExecute() {
    if(OnInit() == false) {
        return -1;
    }



    while(Running) {
        while(SDL_PollEvent(&keyEvent)) {
            OnEvent(&keyEvent);
     //       CApp::Collision(message,message1);
        }

        OnLoop();
        OnRender();
    }

    OnCleanup();

    return 0;
}
