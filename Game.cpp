//
// Created by tutku on 22/05/2026.
//

#include "Game.h"

#include "Inventory.h"
#include "raylib.h"
#include "Player.h"
#include "Oogst.h"
#include "Player.h"
#include "Wagen.h"

void Scherm() {
   //initializatie van scherm
   Game* game = new ::Game;
    Oogst* oogst = new Oogst;
    Wagen* wagen = new Wagen;
    Speler::Player* player = new Speler::Player;
    Inventory* inv = new Inventory(player);


//dkdjfe
   int width = game ->GetWidth();
   int height = game ->GetHeight();
   InitWindow(width,height,"SpeedFarmer");
   SetTargetFPS(60);
   //hier alles samenvoegen
 oogst->loadTexture();

   while (!WindowShouldClose()) {
       BeginDrawing();
       ClearBackground(BLACK);
       oogst ->draw();
       player -> Draw();
       player ->Update();
       wagen ->draw();
       inv ->drawUI();


       EndDrawing();


   }
   // hier deletes zetten
    oogst->unloadTexture();
    delete game;
    delete oogst;
    delete player;

   CloseWindow();


}
