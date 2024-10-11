#include "BreakableObject.h"
#include <iostream>
#include <string>
BreakableObject::BreakableObject() : Entity(), Alive()
{}
BreakableObject::BreakableObject(float _x, float _y, float _MaxHp) : Entity(Vector2(_x, _y)), Alive(_MaxHp){
	std::cout << "Breakable Object just created at x = " + std::to_string(_x) + " and y = " + std::to_string(_y) + " with " + std::to_string(_MaxHp) + " life" << std::endl;
}

void BreakableObject::LooseHp(const float Dmg) {
	this->Hp -= Dmg;
	if (Hp <= 0) {
		std::cout << "Breakable Object just broke" << std::endl;
	}
}