#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Player
{
private:
	float x = 400;
	float y = 300;
	static constexpr float width = 20;
	static constexpr float height = 20;
	float speed = 1 * 60.0f;
public:
	void ClampScreen();
	void Draw(Graphics& gfx) const;
	void Update( const Keyboard& kbd, float deltaTime);
	void GameOver();
	float GetX() const;
	float GetY() const;
	static float GetWidth();
	static float GetHeight();
};
