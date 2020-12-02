#include "Vector2.h"
#include <cmath>

Vector2::Vector2(float xInput, float yInput)
{
    x = xInput;
    y = yInput;
}

Vector2 Vector2::operator+(const Vector2& rightVec) const
{
    return Vector2( x + rightVec.x , y + rightVec.y);
}

Vector2& Vector2::operator+=(const Vector2& rightVec)
{
    return *this = *this + rightVec;
}

Vector2 Vector2::operator*(const float scaler) const
{
    return Vector2(x * scaler, y * scaler);
}

Vector2& Vector2::operator*=(const float scaler)
{
    return *this = *this * scaler;
}

Vector2 Vector2::operator-(const Vector2& rightVec) const
{
    return Vector2(x - rightVec.x, y - rightVec.y);
}

Vector2 Vector2::operator-=(const Vector2& rightVec)
{
    return *this = *this - rightVec;
}

Vector2& Vector2::Normalized()
{
    return *this = GetNormalized();
}

Vector2 Vector2::GetNormalized()
{
    const float length = GetLength();
    if (length != 0.0)
    {
        return *this * (1.0f / length);
    }
    return *this;
}

float Vector2::GetLength()
{
    return std::sqrt(GetLengthSqure());
}

float Vector2::GetLengthSqure()
{
    return x * x + y * y;
}
