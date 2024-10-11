#include "Vector2.h"
#include <cmath>
Vector2::Vector2() : x(0), y(0)
{}

Vector2::Vector2(float x, float y) : x(x), y(y)
{}

float Vector2::GetX() const {
    return this->x;
}
float Vector2::GetY() const {
    return this->y;
}

void Vector2::SetX(float sx) {
    this->x = sx;
}
void Vector2::SetY(float sy) {
    this->y = sy;
}

float Vector2::Norm() const {
    float VNorm = std::abs(std::sqrt(this->x * this->x + this->y * this->y));
    return VNorm;
}

void Vector2::Normalize() {
    float VNorm = this->Norm();
    this->x /= VNorm;
    this->y /= VNorm;
}

Vector2 Vector2::DistVector(const Vector2& V2) {
    return Vector2((V2.GetX() - this->GetX()), (V2.GetY() - this->GetY()));
}

float Vector2::Distfloat(const Vector2& V2) {
    return std::sqrt((V2.GetX() - this->GetX()) * (V2.GetX() - this->GetX()) + (V2.GetY() - this->GetY()) * (V2.GetY() - this->GetY()));
}

bool Vector2::operator==(const Vector2& V2) {
    bool tmp(this->GetX() == V2.GetX() and this->GetY() == V2.GetY());
    return tmp;
}