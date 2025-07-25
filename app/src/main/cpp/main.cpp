#include "raymob.h"

#include "game/src/game.h"

int main(void)
{
    SetConfigFlags(FLAG_MSAA_4X_HINT);
    InitWindow(0, 0, "raylib [core] example - basic window");
    SetTargetFPS(60);

    GameAssets ga;
    GameState gs;

    init(ga, gs);

    while (!WindowShouldClose()) {
        updateAndDraw(gs);
    }

    CloseWindow();        // Close window and OpenGL context

    return 0;
}