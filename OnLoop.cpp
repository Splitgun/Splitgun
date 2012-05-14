#include "CApp.h"

void CApp::OnLoop(){ //This function handles all the data updates



     if (keysPressed[SDLK_d])
    {
        if (position.x <= 739 && position.x!=(position1.x-50))
            position.x += 10;
    }else
  //  position.x += 1;
    if (keysPressed[SDLK_a])
    {
        if(position.x!=(position1.x+50))
        position.x -= 10;
    }else


     //   redBulletPos.x+=2;
  //asddddddddfgshjklkjshgfghjkjhgfghjklkjhygtghjklkjhghjk

     if (keysPressed[SDLK_RIGHT])
    {
        if (position1.x <= 739 && position1.x!=(position.x-50))
        position1.x += 10;
    }else

    if (keysPressed[SDLK_LEFT])
    {   if(position1.x!=(position.x+50))
        position1.x -= 10;
    }

   /* if (keysPressed[SDLK_DOWN])
    {   if (position1.y <=499 && position1.y!=(position.y))
        position1.y += 1;
    } */

 //   CHAKAM TE AZ SE DVIJA BAVNO PREZ TEAM...............................................................................

    if(keysPressed[SDLK_DOWN])
        {
        if(bulletSpeedBlue && blueBulletPos.x<=0){
        blueBulletPos.x = position1.x-75;
        blueBulletPos.y = position1.y+26;
       // if( redBulletPos.x<=815){
       //
       // }
        //bulletSpeed = false;
        }else
        if(!bulletSpeedBlue) {
        blueBulletPos.x = position1.x-75;
        blueBulletPos.y = position1.y+26;
        bulletSpeedBlue = true;
        }
        }
if(keysPressed[SDLK_DOWN])
        {
        if(bulletSpeedBlue && blueBulletPos.x<=0){
        blueBulletPos.x = position1.x-75;
        blueBulletPos.y = position1.y+26;
       // if( redBulletPos.x<=815){
       //
       // }
        //bulletSpeed = false;
        }else
        if(!bulletSpeedBlue) {
        blueBulletPos.x = position1.x-75;
        blueBulletPos.y = position1.y+26;
        bulletSpeedBlue = true;
        }

        }


    if(keysPressed[SDLK_s])
    {
        if(bulletSpeedRed && redBulletPos.x>=797){
        redBulletPos.x = position.x+75;
        redBulletPos.y = position.y+26;
       // if( redBulletPos.x<=815){
       //
       // }
        //bulletSpeed = false;
        }else
        if(!bulletSpeedRed) {
        redBulletPos.x = position.x+75;
        redBulletPos.y = position.y+26;
        bulletSpeedRed = true;
        }

     //   redBulletPos.x+=2;
    }

    if(bulletSpeedRed && redBulletPos.x<=797){
        redBulletPos.x+=10;
 //    redBulletPos.x = position.x+75;
    }

    if(bulletSpeedBlue && redBulletPos.x >= 0){
       blueBulletPos.x-=10;
     //  if(redBulletPos.x >= 0 && redBulletPos.x<5) blueBulletPos.x-=30;

 //    redBulletPos.x = position.x+75;
    }

    if(keysPressed[SDLK_PAGEDOWN]){
    if(bulletSpeedRed){

         redBulletPos.x = position.x+75;
        redBulletPos.y = position.y+26;
        SDL_Delay(1);
    }

    }


}
