#pragma once


class Vector2 
{
public:
	Vector2() = default;
	Vector2(float xInput, float yInput);
	Vector2 operator+(const Vector2& rightVec) const;
	Vector2& operator+=(const Vector2& rightVec);
	Vector2 operator*(const float scaler) const;
	Vector2& operator*=(const float scaler);
	Vector2 operator-(const Vector2& rightVec) const;
	Vector2 operator-=(const Vector2& rightVec);
	Vector2& Normalized();
	Vector2 GetNormalized();
	float GetLength();
	float GetLengthSqure();
public:
	float x;
	float y;
};