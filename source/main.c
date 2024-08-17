#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "bitwise_fun.h"
#include "pointer_fun.h"
#include "float_fun.h"
#include "array_fun.h"
#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60); // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------
    int d = 0;
    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        char text[20];
        sprintf(text, "test: %d", d++);

        DrawRectangle(100, 100, 50, 50, BLUE);

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText(text, 190, 100, 20, GREEN);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;

    printf("pointer fun ================\n");
    pointerFunInit();

    printf("bitwise fun ================\n");
    bitwiseFunInit();

    printf("float fun ==================\n");
    floatFunInit();

    printf("array fun ==================\n");
    arrayFunInit();

    return 0;
}
