#include "Ball.h"

Ball::Ball() {
	speed = 15.f;
	
	pos.x = SCREEN_WIDTH / 2 - size / 2;
	pos.y = SCREEN_HEIGHT / 2 - size / 2;

	vel.x = 1;
	vel.y = -1;

	rect.x = (int)pos.x;
	rect.y = (int)pos.y;
	rect.w = size;
	rect.h = size;
}

void Ball::update() {

	rect.x = (int)pos.x;
	rect.y = (int)pos.y;
}

void Ball::SetVel(float x, float y) {

}

SDL_Rect* Ball::GetRect() {
	return &rect;
}