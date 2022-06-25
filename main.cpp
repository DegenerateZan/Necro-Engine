#include "include/raylib.h"
#include "iostream"
#include "ctime"
#include "unistd.h"
//#include "CImg.h" // The reason i use this Library is bcus lack of my knowledge of raylib


//verloc stands for version location 
/*
           (y)
            I
            I
(x)---------------------->
            I
            I
*/


   
void splashscreen(int width , int height,Texture2D logo,Vector2 middleposition){
    // To do : get the size of the PNG file and return the value
    //TO DO : get the used window and put the logo png file on the right order
    // in order to resize on a right value i need to get the sie of the texture first
    //for (float timedraw = 0.0f; timedraw <= 1.0f; timedraw += 0.1f){
    
    
        DrawTextureEx(logo, middleposition, 0, 0.5f, RAYWHITE);
        
        
        int fontsize = 30;
        DrawText("this app will be closed in 2 seconds", 0, 50, fontsize , RED);
        

        return;
}

int main(void)
{
    int tlayar = 600;
    int llayar = 800;
    InitWindow(llayar, tlayar, "raylib [core] example - basic window");
    Image logo1 = LoadImage("necrologo.png");
    Texture2D logo = LoadTextureFromImage(logo1);
    UnloadImage(logo1);
    int verlocX = tlayar - 15;
    Vector2 middleposition = { (float)(llayar/2 - logo.width/4), (float)(tlayar/2 - logo.height/4 - 20) };
    SetTargetFPS(25); 

    while (!WindowShouldClose())
    {
        BeginDrawing();        
            DrawText("Version : Alpha 0.0.1", 0, verlocX, 15, BLACK);
            DrawFPS(llayar - 80,tlayar - 30);
            splashscreen(llayar, tlayar, logo, middleposition);
                
            
            ClearBackground(WHITE);
        EndDrawing();
    }



    UnloadTexture(logo);
    CloseWindow();

   



    return 0;
}