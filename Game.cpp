//
// Created by tutku on 22/05/2026.
//

#include "Game.h"
#include "raylib.h"
#include "Player.h"

void Scherm() {
   //initializatie van scherm
   Game* game = new ::Game;

   int width = game ->GetWidth();
   int height = game ->GetHeight();
   InitWindow(width,height,"SpeedFarmer");
   SetTargetFPS(60);
   //hier alles samenvoegen
   while (!WindowShouldClose()) {

   }
   // hier deletes zetten
   delete game;
   CloseWindow();

}
