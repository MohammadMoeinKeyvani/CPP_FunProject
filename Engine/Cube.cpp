#include "Cube.h"

Cube::Cube()
	:
	randomNum(rd()),
	xDist(0, 770),
	yDist(0, 570)
{

}

void Cube::Draw(Graphics& gfx)
{
	for (int tempy = int(position.y); tempy < height + int(position.y); tempy++)
	{
		for (int tempx = int(position.x); tempx < width + int(position.x); tempx++)
		{
			gfx.PutPixel(tempx, tempy, color);
		}
	}
}

void Cube::Colliding(const Player & player)
{
	float playerRight = player.GetPosition().x + player.GetWidth();
	float playerBottom = player.GetPosition().y + player.GetHeight();
	float right = position.x + width;
	float bottom = position.y + height;

	if (player.GetPosition().x <= right &&
		player.GetPosition().y <= bottom &&
		playerRight >= position.x &&
		playerBottom >= position.y)
	{
		isColliding = true;
		collideCounter++;
	}
		
}

void Cube::Update()
{
	if (isColliding)
	{
		position.x = xDist(randomNum);
		position.y = yDist(randomNum);
		isColliding = false;
	}

	if (isColorIncreasing)
	{
		if (color.GetR() >= 250)
		{
			isColorIncreasing = false;
		}
		else
		{
			color = Color(color.GetR() + 2, color.GetG() + 4, color.GetB() + 4);
		}
	}
	else
	{
		if (color.GetR() <= 100)
		{
			isColorIncreasing = true;
		}
		else
		{
			color = Color(color.GetR() - 2, color.GetG() - 4, color.GetB() - 4);
		}
	}
}

int Cube::GetCollideCounter()
{
	return collideCounter;
}


