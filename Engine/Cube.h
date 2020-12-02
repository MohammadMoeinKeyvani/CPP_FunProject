#pragma once

#include "Player.h"
#include "Graphics.h"
#include "Colors.h"
#include "Vector2.h"
#include <random>

class Cube
{
private:
	std::random_device rd;
	std::mt19937 randomNum;
	std::uniform_real_distribution<float> xDist;
	std::uniform_real_distribution<float> yDist;
	Vector2 position = Vector2(xDist(randomNum), yDist(randomNum));
	float width = 25;
	float height = 25;
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