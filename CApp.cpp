#include "CApp.h"

CApp::CApp() {
    Surf_Display = NULL;
    bulletRed = NULL;
    message = NULL;
    message1 = NULL;
 //   screen = NULL;
    loadedImage = NULL;


    Running = true;

}


int main(int argc, char* argv[]) {


    CApp theApp;
  //  theApp.OnExecute();
    return theApp.OnExecute();
}
