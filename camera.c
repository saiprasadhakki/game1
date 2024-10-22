#include "camera.h"
#include "include/raylib.h"

// Camera camera;
// camera.position = (Vector3){ 0.0f, 2.0f, 4.0f };    // Camera position
// camera.target = (Vector3){ 0.0f, 2.0f, 0.0f };      // Camera looking at point
// camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
// camera.fovy = 60.0f;                                // Camera field-of-view Y
// camera.projection = CAMERA_PERSPECTIVE;             // Camera projection type
// int CameraMode = CAMERA_FIRST_PERSON;

Camera InitCamera() {
    return (Camera) {
	.position = (Vector3){ 0.0f, 2.0f, 4.0f },    
	.target = (Vector3){ 0.0f, 2.0f, 0.0f },      
	.up = (Vector3){ 0.0f, 1.0f, 0.0f },          
	.fovy = 60.0f,                                
	.projection = CAMERA_PERSPECTIVE,             
	.up = (Vector3){ 0.0f, 1.0f, 0.0f },          
	.fovy = 60.0f
    };
}

