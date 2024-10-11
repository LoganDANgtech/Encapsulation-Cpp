#pragma once
#include "Entity.h"
#include "Vector2.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive {
public:

	BreakableObject();
	BreakableObject(float _x, float _y, float _MaxHp);

	void LooseHp(const float Dmg) override;
};