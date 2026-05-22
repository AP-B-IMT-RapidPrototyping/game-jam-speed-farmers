//
// Created by tutku on 22/05/2026.
//

#include "Wagen.h"
#include "raylib.h"

Wagen::Wagen() {
    VrachtPos = {550, 400};
    VraHeight = 100.0f;
    VraWidth = 100.0f;
}

void Wagen::draw() {
    DrawRectangle(VrachtPos.x, VrachtPos.y, VraWidth, VraHeight, GREEN);
    DrawText("Vracht", VrachtPos.x + 15, VrachtPos.y + 40, 20,RED);
}