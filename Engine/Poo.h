#pragma once

#include "Graphics.h"
#include "Player.h"

class Poo
{
private:
	static constexpr float width = 24;
	static constexpr float height = 24;
	float x;
	float y;
	float velocityOfX;
	float velocityOfY;
	bool isEaten = false;
	//bool initialized = false;
public:
	void Update(float deltaTime);
	void Colliding(const Player& player);
	void Draw(Graphics& gfx) const;
	void Initializer(float xIn, float yIn, float vx, float vy);
	void GameOver();
	bool IsEaten() const;
};