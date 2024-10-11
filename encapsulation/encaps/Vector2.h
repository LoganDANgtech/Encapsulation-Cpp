#pragma once

class Vector2 {
private:
	float x;
	float y;
public:

	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;

	void SetX(float sx);
	void SetY(float sy);

	float Norm() const;
	void Normalize();

	Vector2 DistVector(const Vector2& V2);
	float Distfloat(const Vector2& V2);

	bool operator == (const Vector2& V2);
};