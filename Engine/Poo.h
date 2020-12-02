#pragma once

#include "Graphics.h"
#include "Player.h"
#include "Vector2.h"

class Poo
{
private:
	static constexpr float width = 24;
	static constexpr float height = 24;
	Vector2 position;
	Vector2 velocity;
	bool isEaten = false;
	//bool initialized = false;
public:
	void Update(float deltaTime);
	void Colliding(const Player& player);
	void Draw(Graphics& gfx) const;
	void Initializer(const Vector2& pos, const Vector2& vel);
	void GameOver();
	bool IsEaten() const;
};