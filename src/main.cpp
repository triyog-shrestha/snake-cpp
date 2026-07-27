#include<raylib.h>

Color grass = {63, 172, 25, 255};

class Snake{
    public:
        float posX, posY, width, height, speed;

        void drawSnake(){
            DrawRectangle(posX, posY, width, height, WHITE);
        }
};

Snake snake;

int main(){
    int winW = 1000;
    int winH = 1000;
    InitWindow(winW, winH, "Snake"); 
    SetTargetFPS(60);


    snake.posX = winW/2.0;
    snake.posY = winH/2.0;
    snake.width = 100;
    snake.height = 20;
    snake.speed = 10;


    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(grass);
        snake.drawSnake();
        snake.posX += snake.speed;

        

        EndDrawing();
    }
    CloseWindow();
    return 0;
}