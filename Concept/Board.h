#pragma once
#include <raylib.h>
#include <raymath.h>
#include <iostream>

#include "Player.h"

class Board
{
public:
	int screenWidth;
	int screenHeight;
	const int gridSize = 10; // Number of grid cells
	int cellSize; // Size of each cell
	const int grid[10][10] = { 0 }; // 2D array of grid cells

	Board();
	void DrawGrid();
	//void CheckWin(Player player);
};
