#include <raylib.h>
#include <raymath.h>
#include <iostream>

#include "Player.h"
#include "Board.h"

Board::Board()
{
    screenWidth = GetScreenWidth();
    screenHeight = GetScreenHeight();
    cellSize = screenWidth / gridSize;
}

void Board::DrawGrid()
{
    for (int x = 0; x < gridSize; x++) {
        for (int y = 0; y < gridSize; y++) {
            int posX = x * cellSize;
            int posY = y * cellSize;

            // Draw horizontal grid lines
            DrawLine(0, posY, screenWidth, posY, DARKGRAY);

            // Draw vertical grid lines
            DrawLine(posX, 0, posX, screenHeight, DARKGRAY);
        }
    }
}
