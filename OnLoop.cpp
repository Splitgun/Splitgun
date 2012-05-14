#include "CApp.h"

void CApp::OnLoop(){


// left and right moves of the red hero
     if (keysPressed[SDLK_d])
    {
        if (position.x <= 739 && position.x!=(position1.x-50))
            position.x += 5;
    }else

    if (keysPressed[SDLK_a])
    {
        if(position.x!=(position1.x+50))
			position.x -= 5;
    }

	if(bulletSpeedRed && redBulletPos.x<=797)
	{
        redBulletPos.x+=10;
    }

// jump of the red hero
	if (keysPressed[SDLK_w] && !wKey && !wKeyDown)
	{
		wKey = true;
		wKeyDown = true;
	}

	if(wKey && wKeyDown && position.y > 200)
	{
		position.y -= 5;
		if(position.y <= 200)
			wKey = false;
	}

	if(!wKey && wKeyDown && position.y <= 400 )
	{
		position.y += 5;
		if(position.y >= 400)
			wKeyDown = false;
	}


// left and right moves of the blue hero
	if (keysPressed[SDLK_RIGHT])
    {
        if (position1.x <= 739 && position1.x!=(position.x-50))
			position1.x += 5;
    }else

    if (keysPressed[SDLK_LEFT])
    {
		if(position1.x!=(position.x+50))
			position1.x -= 5;
    }

	if(bulletSpeedBlue && redBulletPos.x >= 0)
	{
       blueBulletPos.x-=10;
    }

// jump of the blue hero

	if (keysPressed[SDLK_UP] && !upKey && !upKeyDown)
	{
		upKey = true;
		upKeyDown = true;
	}

	if(upKey && upKeyDown && position1.y > 200)
	{
		position1.y -= 5;
		if(position1.y <= 200)
			upKey = false;
	}

	if(!upKey && upKeyDown && position1.y <= 400 )
	{
		position1.y += 5;
		if(position1.y >= 400)
			upKeyDown = false;
	}



//position.x sus blueBulletPos.x

// shooting of the blue hero
    if(keysPressed[SDLK_DOWN])
    {
		if(bulletSpeedBlue && blueBulletPos.x<=0)
		{
			blueBulletPos.x = position1.x-75;
			blueBulletPos.y = position1.y+26;
        }else
		if(!bulletSpeedBlue)
		{
			blueBulletPos.x = position1.x-75;
			blueBulletPos.y = position1.y+26;
			bulletSpeedBlue = true;
        }
	}

// shooting of the red hero
    if(keysPressed[SDLK_s])
    {
        if(bulletSpeedRed && redBulletPos.x>=797){
        redBulletPos.x = position.x+75;
        redBulletPos.y = position.y+26;
        }else
        if(!bulletSpeedRed)
		{
			redBulletPos.x = position.x+75;
			redBulletPos.y = position.y+26;
			bulletSpeedRed = true;
        }
    }

// the hack button by 71ck !!!
    if(keysPressed[SDLK_PAGEDOWN])
	{
		if(bulletSpeedRed)
			{

				redBulletPos.x = position.x+75;
				redBulletPos.y = position.y+26;
				SDL_Delay(1);
			}
    }


}
