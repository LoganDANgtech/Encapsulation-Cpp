#include "AMovable.h"

AMovable::AMovable() : dir(0, 1), speed(0)
{}
AMovable::AMovable(Vector2 _dir, float _speed) : dir(_dir), speed(_speed)
{}

void AMovable::SetDirection(Vector2 _dir) {
	this->dir = _dir;
}
void AMovable::SetVitesse(float _speed) {
	this->speed = _speed;
}
