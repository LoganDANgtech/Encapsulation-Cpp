#pragma once
#include "Vector2.h"
class AMovable {
public:
	Vector2 dir;
	float speed;

	AMovable();
	AMovable(Vector2 _dir, float _speed);

	virtual void SetDirection(Vector2 _dir);
	virtual void SetVitesse(float _speed);
	virtual void Move() = 0;
};