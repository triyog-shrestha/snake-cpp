#include<raylib.h>

Color grass = {63, 172, 25, 255};
float cellsize = 30;
float cellcount = 25;



int main(){
    InitWindow(cellsize*cellcount, cellsize*cellcount, "Snake"); 
    SetTargetFPS(60);



    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(grass);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}