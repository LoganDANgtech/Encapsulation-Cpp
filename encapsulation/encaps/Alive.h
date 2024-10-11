#pragma once

class Alive {
public:
	float MaxHp;
	float Hp;

	Alive();
	Alive(float _MaxHp);
	Alive(float _MaxHp, float _Hp);

	virtual float GetMaxHp() const;
	virtual float GetHp() const;

	virtual void LooseHp(const float Dmg);
};