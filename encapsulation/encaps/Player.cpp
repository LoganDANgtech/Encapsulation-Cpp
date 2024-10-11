#include "Player.h"
#include <iostream>
#include <string>

Player::Player() : Entity(), Alive(), AMovable(), IAttacker()
{}
Player::Player(Vector2 _pos, float _MaxHp, Vector2 _dir, float _speed) : Entity(_pos), Alive(_MaxHp), AMovable(_dir, _speed), IAttacker() {
	std::cout << "Player just created at x = " + std::to_string(_pos.GetX()) + " and y = " + std::to_string(pos.GetY()) + " with " + std::to_string(_MaxHp) + " life with direction x = " + std::to_string(_dir.GetX()) + " and y = " + std::to_string(_dir.GetY()) << std::endl;
}

void Player::LooseHp(const float Dmg) {
	this->Hp -= Dmg;
	if (Hp <= 0) {
		std::cout << "Player just died" << std::endl;
	}
}
void Player::Move() {
	Vector2 Ppos = this->GetPos();
	this->SetPos(Vector2(Ppos.GetX() + this->dir.GetX() * speed, Ppos.GetY() + this->dir.GetY() * speed));
	std::cout << "Player move to x = " + std::to_string(pos.GetX()) + " and y = " + std::to_string(pos.GetY()) << std::endl;
}
void Player::Attack(Alive* Attacked) {
	std::cout << "Player just attacked" << std::endl;
	Attacked->LooseHp(10);
	
}