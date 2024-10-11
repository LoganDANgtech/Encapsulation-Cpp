#pragma once
#include "Entity.h"
#include "Vector2.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable {
public:

	Mob();
	Mob(float _x, float _y, float _MaxHp, Vector2 _dir, float _speed);

	void LooseHp(const float Dmg) override;
	void Move() override;


};