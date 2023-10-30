#include <raylib.h>
#include <raymath.h>
#include <iostream>

#include "Player.h"
#include "Board.h"

Player::Player(Vector2 nStartPos, float nPlayerSpeed, int nPositionOnGrid[2])
{
	position = nStartPos;
	speed = nPlayerSpeed;
	positionOnGrid[0] = nPositionOnGrid[0];
	positionOnGrid[1] = nPositionOnGrid[1];
}

void Player::Draw(Vector2 position, Vector2 size)
{
	DrawRectangleV(position, size, BLUE);
}

void Player::Move()
{
	//Moves player after pressing corresponding keys
	if (IsKeyPressed(KEY_D))
	{
		position.x += GetScreenWidth() / speed;
		positionOnGrid[0]++;
		//std::cout << "x: " << positionOnGrid[0] << "y: " << positionOnGrid[1] << std::endl;
	}
	if (IsKeyPressed(KEY_A))
	{
		position.x -= GetScreenWidth() / speed;
		positionOnGrid[0]--;
		//std::cout << "x: " << positionOnGrid[0] << "y: " << positionOnGrid[1] << std::endl;
	}
	if (IsKeyPressed(KEY_S))
	{
		position.y += GetScreenWidth() / speed;
		positionOnGrid[1]++;
		//std::cout << "x: " << positionOnGrid[0] << "y: " << positionOnGrid[1] << std::endl;
	}
	if (IsKeyPressed(KEY_W))
	{
		position.y -= GetScreenWidth() / speed;
		positionOnGrid[1]--;
		//std::cout << "x: " << positionOnGrid[0] << "y: " << positionOnGrid[1] << std::endl;
	}
	//Blocking player from going outside of screen
	if (position.x < 0)
	{
		position.x += GetScreenWidth() / speed;
		positionOnGrid[0] = 0;
	}
	if (position.y < 0)
	{
		position.y += GetScreenWidth() / speed;
		positionOnGrid[1] = 0;
	}
	if (position.x > GetScreenWidth() - (GetScreenWidth() / speed))
	{
		position.x -= GetScreenWidth() / speed;
		positionOnGrid[0] = 9;
	}
	if (position.y > GetScreenHeight() - (GetScreenHeight() / speed))
	{
		position.y -= GetScreenWidth() / speed;
		positionOnGrid[1] = 9;
	}
	//std::cout << "x: " << positionOnGrid[0] << "y: " << positionOnGrid[1] << std::endl;
}