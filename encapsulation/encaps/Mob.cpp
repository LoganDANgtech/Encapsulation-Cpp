#include "Mob.h"
#include <iostream>
#include <string>
Mob::Mob() : Entity(), Alive(), AMovable()
{}
Mob::Mob(float _x, float _y, float _MaxHp, Vector2 _dir, float _speed) : Entity(Vector2(_x, _y)), Alive(_MaxHp), AMovable(_dir, _speed) {
	std::cout << "Mob just created at x = " + std::to_string(_x) + " and y = " + std::to_string(_y) + " with " + std::to_string(_MaxHp) + " life with direction x = " + std::to_string(_dir.GetX()) + " and y = " + std::to_string(_dir.GetY()) << std::endl;
}

void Mob::LooseHp(const float Dmg) {
	this->Hp -= Dmg;
	if (Hp <= 0){
		std::cout << "Mob just died" << std::endl;
	}
}

void Mob::Move() {
	Vector2 Mpos = this->GetPos();
	this->SetPos(Vector2(Mpos.GetX() + this->dir.GetX() * speed, Mpos.GetY() + this->dir.GetY() * speed));
	std::cout << "Mob move to x = " + std::to_string(pos.GetX()) + " and y = " + std::to_string(pos.GetY()) << std::endl;
}