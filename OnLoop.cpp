

#include "CApp.h"

void CApp::OnLoop()
{

// left and right moves of the red hero
     if (keysPressed[SDLK_d])
    {
        if (redPlayerPos.x <= 255 && redPlayerPos.x!=(bluePlayerPos.x-50))
            redPlayerPos.x += 5;
    }else

    if (keysPressed[SDLK_a])
    {
        if(redPlayerPos.x!=(bluePlayerPos.x+50))
			redPlayerPos.x -= 5;
    }

// red bullet movements
	if(bulletSpeedRed && redBulletPos.x<=797)
	{
        redBulletPos.x+=10;
		if((redBulletPos.x>=bluePlayerPos.x && redBulletPos.x<=bluePlayerPos.x+80) && (redBulletPos.y>=bluePlayerPos.y && redBulletPos.y<=bluePlayerPos.y+100))
		{
			redTeamScore++;
			bulletSpeedRed=false;
		}
    }

	if(redTeamScore == 10 && !scoreBarOn)
	{
		redBarPos.x = 300;
		scoreBarOn = true;
	}



// jump of the red hero
	if (keysPressed[SDLK_w] && !wKey && !wKeyDown)
	{
		wKey = true;
		wKeyDown = true;
	}

	if(wKey && wKeyDown && redPlayerPos.y > 200)
	{
		redPlayerPos.y -= 5;
		if(redPlayerPos.y <= 200)
			wKey = false;
	}

	if(!wKey && wKeyDown && redPlayerPos.y <= 400 )
	{
		redPlayerPos.y += 5;
		if(redPlayerPos.y >= 400)
			wKeyDown = false;
	}

// left and right moves of the blue hero
	if (keysPressed[SDLK_RIGHT])
    {
        if (bluePlayerPos.x <= 740 )
			bluePlayerPos.x += 5;
    }else

    if (keysPressed[SDLK_LEFT])
    {
		if(bluePlayerPos.x >= 485)
			bluePlayerPos.x -= 5;
    }

// blue bullet movements
	if(bulletSpeedBlue && blueBulletPos.x >= 0)
	{
		blueBulletPos.x-=10;
		if((blueBulletPos.x<=redPlayerPos.x+52 && blueBulletPos.x>=redPlayerPos.x) && (blueBulletPos.y>=redPlayerPos.y && blueBulletPos.y<=redPlayerPos.y+100))
		{
			blueTeamScore++;
			bulletSpeedBlue=false;
		}
    }

	if(blueTeamScore == 10 && !scoreBarOn)
	{
		blueBarPos.x = 300;
		scoreBarOn = true;
	}

// jump of the blue hero

	if (keysPressed[SDLK_UP] && !upKey && !upKeyDown)
	{
		upKey = true;
		upKeyDown = true;
	}

	if(upKey && upKeyDown && bluePlayerPos.y > 200)
	{
		bluePlayerPos.y -= 5;
		if(bluePlayerPos.y <= 200)
			upKey = false;
	}

	if(!upKey && upKeyDown && bluePlayerPos.y <= 400 )
	{
		bluePlayerPos.y += 5;
		if(bluePlayerPos.y >= 400)
			upKeyDown = false;
	}

// shooting of the blue hero
    if(keysPressed[SDLK_DOWN])
    {
		if(bulletSpeedBlue && blueBulletPos.x<=0)
		{
			blueBulletPos.x = bluePlayerPos.x-27;
			blueBulletPos.y = bluePlayerPos.y+26;
        }else
		if(!bulletSpeedBlue)
		{
			blueBulletPos.x = bluePlayerPos.x-27;
			blueBulletPos.y = bluePlayerPos.y+26;
			bulletSpeedBlue = true;
        }
	}

// shooting of the red hero
    if(keysPressed[SDLK_s])
    {
        if(bulletSpeedRed && redBulletPos.x>=797){
        redBulletPos.x = redPlayerPos.x+75;
        redBulletPos.y = redPlayerPos.y+26;
        }else
        if(!bulletSpeedRed)
		{
			redBulletPos.x = redPlayerPos.x+75;
			redBulletPos.y = redPlayerPos.y+26;
			bulletSpeedRed = true;
        }
    }

// the hack button by 71ck for RedPlayer!!!
    if(keysPressed[SDLK_h])
	{
		if(bulletSpeedRed)
			{
				redBulletPos.x = redPlayerPos.x+75;
				redBulletPos.y = redPlayerPos.y+26;
			}
    }

// the hack button by 71ck for BluePlayer!!!
	 if(keysPressed[SDLK_PAGEDOWN])
	{
		if(bulletSpeedBlue)
			{
				blueBulletPos.x = bluePlayerPos.x-27;
				blueBulletPos.y = bluePlayerPos.y+26;
			}
    }




}
