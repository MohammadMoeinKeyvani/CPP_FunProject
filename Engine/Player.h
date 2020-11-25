#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Player
{
private:
	int x = 400;
	int y = 300;
	static constexpr int width = 20;
	static constexpr int height = 20;
	int speed = 1;
public:
	void ClampScreen();
	void Draw(Graphics& gfx) const;
	void Update( const Keyboard& kbd);
	void GameOver();
	int GetX() const;
	int GetY() const;
	static int GetWidth();
	static int GetHeight();
};
