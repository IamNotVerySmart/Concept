#include <raylib.h>
#include <raymath.h>
#include <iostream>

#include "Player.h"
#include "Board.h"
#include "Enemy.h"


int playerStartPos[2] = { 0, 9 }; // Player starting position on grid
int enemy1StartPos[2] = { 9, 0 }; // Enemy1 starting position on grid
int enemy2StartPos[2] = { 7, 0 }; // Enemy2 starting position on grid


int main()
{
    std::cout << "Hello World!\n";
    InitWindow(600, 600, "[placeholder]");
    SetTargetFPS(60);

    Board board;
    
    Vector2 drawPlayerPosition = { float(GetScreenWidth() - (board.cellSize * 9)), float(GetScreenHeight() - board.cellSize) }; // Position where to start drawing player
    Vector2 drawEnemy1Position = { float(GetScreenWidth() - board.cellSize), float(GetScreenHeight() - (board.cellSize * 9)) }; // Position where to start drawing enemy1
    Vector2 drawEnemy2Position = { float(GetScreenWidth() - board.cellSize * 7), float(GetScreenHeight() - (board.cellSize * 9)) }; // Position where to start drawing enemy2
    float movementSpeed = float(board.gridSize); // determines how much pixels player moves key press
    Vector2 size = { float(board.cellSize), float(board.cellSize) }; // size of player and enemy

    Player player(drawPlayerPosition, movementSpeed, playerStartPos);
    Enemy enemy1(drawEnemy1Position, movementSpeed, enemy1StartPos);
    Enemy enemy2(drawEnemy2Position, movementSpeed, enemy2StartPos);



    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);



        board.DrawGrid();
        //board.grid

        enemy1.Draw(enemy1.position, size);
        enemy2.Draw(enemy2.position, size);

        player.Draw(player.position, size);
        player.Move();


        //board.CheckWin(player);
        EndDrawing();
    }

    CloseWindow();
}