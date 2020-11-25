#pragma once

#include "Graphics.h"
#include "Player.h"

class Poo
{
private:
	static constexpr int width = 24;
	static constexpr int height = 24;
	int x;
	int y;
	int velocityOfX;
	int velocityOfY;
	bool isEaten = false;
	//bool initialized = false;
public:
	void Update();
	void Colliding(const Player& player);
	void Draw(Graphics& gfx) const;
	void Initializer(int xIn, int yIn, int vx, int vy);
	void GameOver();
	bool IsEaten() const;
};