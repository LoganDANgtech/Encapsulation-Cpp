#pragma once
#include "Entity.h"
#include "Vector2.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker {
public:

	Player();
	Player(Vector2 _pos, float _MaxHp, Vector2 _dir, float _speed);

	void LooseHp(const float Dmg) override;
	void Move() override;
	void Attack(Alive* Attacked) override;
};