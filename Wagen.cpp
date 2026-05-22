//
// Created by tutku on 22/05/2026.
//

#include "Wagen.h"
#include "raylib.h"

Wagen::Wagen() {
    VrachtPos = {550, 300};
    VraHeight = 100.0f;
    VraWidth = 100.0f;
}

void Wagen::draw() {
   DrawTexture(texture,VrachtPos.x,VrachtPos.y,WHITE);
}

void Wagen::loadTexture() {
    texture=LoadTexture("C:/Users/user/game-jam-speed-farmers/cmake-build-debug/Png/ktruck2.png");
}

void Wagen::unloadTexture() {
    UnloadTexture(texture);
}
