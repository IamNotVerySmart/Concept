#pragma once
#include <raylib.h>
#include <raymath.h>
#include <iostream>

#include "Player.h"
#include "Board.h"

class Enemy
{
public:
	Vector2 position; // determines position of player on screen
	float speed; // determines how much pixels player moves key press
	int positionOnGrid[2];

	Enemy(Vector2 nStartPos, float nEnemySpeed, int nPositionOnGrid[2]);
	void Draw(Vector2 position, Vector2 size);
};

