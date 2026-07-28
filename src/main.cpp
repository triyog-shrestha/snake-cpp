#include<raylib.h>

Color grass = {63, 172, 25, 255};
float cellsize = 30;
float cellcount = 25;

class Food{
    public:
    Vector2 position = {12,12};
    Texture2D texture;

    Food(){
        Image image = LoadImage("graphics/food.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);
    }

    // ~Food(){
    //     UnloadTexture(texture);
    // }

    void draw(){
        DrawTexture(texture, position.x*cellsize, position.y*cellsize, WHITE);
    }
};



int main(){
    InitWindow(cellsize*cellcount, cellsize*cellcount, "Snake"); 
    SetTargetFPS(60);
    Food food;

    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(grass);

        food.draw();

        EndDrawing();
    }
    CloseWindow();
    return 0;
}