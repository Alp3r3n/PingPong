#pragma once
#include "Utils.h"

class Ball
{
public:
	Ball();
	void update();
	void SetVel(float x, float y);

	SDL_Rect* GetRect();

private:
	int dir = 0;
	int size = 20;
	float speed;

	Vec2 pos;
	Vec2 vel;
	SDL_Rect rect;
};

