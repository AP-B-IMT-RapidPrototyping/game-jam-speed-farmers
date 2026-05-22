//
// Created by tutku on 22/05/2026.
//

#include "Game.h"
#include "raylib.h"
#include "Player.h"
#include "Oogst.h"

void Scherm() {
   //initializatie van scherm
   Game* game = new ::Game;
    Oogst* oogst = new Oogst;


   int width = game ->GetWidth();
   int height = game ->GetHeight();
   InitWindow(width,height,"SpeedFarmer");
   SetTargetFPS(60);
   //hier alles samenvoegen
   ClearBackground(BLACK);
   while (!WindowShouldClose()) {
       BeginDrawing();
        oogst ->draw();
       EndDrawing();
   }
   // hier deletes zetten
   delete game;

   CloseWindow();

}
