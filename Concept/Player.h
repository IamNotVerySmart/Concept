#pragma once
#include <raylib.h>
#include <raymath.h>
#include <iostream>

#include "Board.h"
#include "Enemy.h"

class Player
{
public:
	Vector2 position; // determines position of player on screen
	float speed; // determines how much pixels player moves key press
	int positionOnGrid[2]; // determines player position on grid which allows for easy checking of win condition and collision with enemies

	Player(Vector2 nStartPos, float nPlayerSpeed, int nPositionOnGrid[2]);
	void Draw(Vector2 position, Vector2 size);
	void Move();
};

