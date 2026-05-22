//
// Created by tutku on 22/05/2026.
//

#include "Game.h"
#include "raylib.h"
#include "Player.h"
#include "Oogst.h"
#include "Player.h";
void Scherm() {
   //initializatie van scherm
   Game* game = new ::Game;
    Oogst* oogst = new Oogst;
   Speler::Player* player = new Speler::Player;
//dkdjfe
   int width = game ->GetWidth();
   int height = game ->GetHeight();
   InitWindow(width,height,"SpeedFarmer");
   SetTargetFPS(60);
   //hier alles samenvoegen

   while (!WindowShouldClose()) {
       BeginDrawing();
       ClearBackground(BLACK);
        oogst ->draw();
       player -> Draw();
       player ->Update();

       EndDrawing();

   }
   // hier deletes zetten
   delete game;
    delete oogst;
 delete player;

   CloseWindow();

}
