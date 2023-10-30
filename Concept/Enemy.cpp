#include <raylib.h>
#include <raymath.h>
#include <iostream>

#include "Board.h"
#include "Enemy.h"

Enemy::Enemy(Vector2 nStartPos, float nEnemySpeed, int nPositionOnGrid[2])
{
	position = nStartPos;
	speed = nEnemySpeed;
	positionOnGrid[0] = nPositionOnGrid[0];
	positionOnGrid[1] = nPositionOnGrid[1];
}

void Enemy::Draw(Vector2 position, Vector2 size)
{
	DrawRectangleV(position, size, RED);
}