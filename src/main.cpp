#include<raylib.h>

Color grass = {63, 172, 25, 255};
float cellsize = 30;
float cellcount = 25;

class Food{
    public:
    Vector2 position = {5,6};

    void draw(){
        DrawRectangle(position.x*cellsize, position.y*cellsize, cellsize, cellsize, RED);
    }
};

Food food;

int main(){
    InitWindow(cellsize*cellcount, cellsize*cellcount, "Snake"); 
    SetTargetFPS(60);



    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(grass);

        food.draw();

        EndDrawing();
    }
    CloseWindow();
    return 0;
}