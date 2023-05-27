#include "Paddle.h"

Paddle::Paddle(int i)
{
	id = i;
	speed = 20.f;

	if (id == 0) {
		x = 0;
	}
	else if (id == 1) {
		x = SCREEN_WIDTH - width;
	}

	y = SCREEN_HEIGHT / 2 - height / 2;

	x = 0;
	y = 0;


	rect.x = (int)x;
	rect.y = (int)y;
}
