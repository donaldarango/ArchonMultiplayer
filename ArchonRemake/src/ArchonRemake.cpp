#include "ArchonRemake.h"
#include <raylib.h>
#include <stdio.h>

using namespace std;

int main()
{
    /*if (enet_initialize() != 0)
    {
        printf("An error occurred while initializing ENet.\n");
        return 1;
    }*/

    // Initialize the window with width, height, and title
    InitWindow(800, 450, "raylib - basic window");

    // Set target frames per second
    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    // Close window and OpenGL context
    CloseWindow();

    // enet_deinitialize();
    return 0;
}
