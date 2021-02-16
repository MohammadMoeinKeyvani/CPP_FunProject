#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "Vector2.h"
#include "Mouse.h"

class Player
{
private:
	Vector2 position = Vector2(400.0f, 300.0f);
	static constexpr float width = 20;
	static constexpr float height = 20;
	float speed = 1 * 60.0f;
public:
	void ClampScreen();
	void Draw(Graphics& gfx) const;
	void Update( const Keyboard& kbd, float deltaTime);
	void Update( const Mouse& mouse, float deltaTime);
	void GameOver();
	Vector2 GetPosition() const;
	static float GetWidth();
	static float GetHeight();
};
