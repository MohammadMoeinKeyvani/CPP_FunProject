#pragma once

#include "Player.h"
#include "Graphics.h"
#include "Colors.h"
#include <random>

class Cube
{
private:
	std::random_device rd;
	std::mt19937 randomNum;
	std::uniform_int_distribution<int> xDist;
	std::uniform_int_distribution<int> yDist;
	int x = xDist(randomNum);
	int y = yDist(randomNum);
	int width = 25;
	int height = 25;
	int collideCounter = 0;
	bool isColliding = false;
	bool isColorIncreasing = true;
	Color color = { 101 , 0 , 0 };
public:
	Cube();
	void Draw(Graphics& gfx);
	void Colliding(const Player& player);
	void Update();
	int GetCollideCounter();
};