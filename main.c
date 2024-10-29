#include "./include/raylib.h"
#include "window.h"
#include "camera.h"

int main() {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(windowWidth, windowHeight, "GAME - 1");
    Camera camera = InitCamera();
    Camera *pcamera = &camera;
    int cameraMode = CAMERA_FIRST_PERSON;
    while (!WindowShouldClose()) {
        UpdateCamera(pcamera, cameraMode);

        BeginDrawing();

        // draw ground
        DrawPlane((Vector3){ 0.0f, 0.0f, 0.0f }, (Vector2){ 32.0f, 32.0f }, LIME);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
