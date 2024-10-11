#include "Alive.h"
#include <iostream>

Alive::Alive() : MaxHp(0), Hp(0)
{}
Alive::Alive(float _MaxHp) : MaxHp(_MaxHp), Hp(_MaxHp)
{}
Alive::Alive(float _MaxHp, float _Hp) : MaxHp(_MaxHp), Hp(_Hp)
{}

float Alive::GetMaxHp() const {
	return this->MaxHp;
}
float Alive::GetHp() const {
	return this->Hp;
}

void Alive::LooseHp(const float Dmg) {
	this->Hp -= Dmg;
}