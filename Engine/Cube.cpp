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
	for (int tempy = y; tempy < height + y; tempy++)
	{
		for (int tempx = x; tempx < width + x; tempx++)
		{
			gfx.PutPixel(tempx, tempy, color);
		}
	}
}

void Cube::Colliding(const Player & player)
{
	int playerRight = player.GetX() + player.GetWidth();
	int playerBottom = player.GetY() + player.GetHeight();
	int right = x + width;
	int bottom = y + height;

	if (player.GetX() <= right &&
		player.GetY() <= bottom &&
		playerRight >= x &&
		playerBottom >= y)
	{
		isColliding = true;
		collideCounter++;
	}
		
}

void Cube::Update()
{
	if (isColliding)
	{
		x = xDist(randomNum);
		y = yDist(randomNum);
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


