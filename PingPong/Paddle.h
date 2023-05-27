#pragma once
#include "Utils.h"

class Paddle
{
	public:
		Paddle(int i);

	private:
		int id;
		int dir = 0;
		int width = 20;
		int height = 100;
		float x, y, speed;
		SDL_Rect rect;
};

