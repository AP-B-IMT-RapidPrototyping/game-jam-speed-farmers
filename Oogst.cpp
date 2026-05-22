//
// Created by tutku on 22/05/2026.
//
#include <iostream>
#include "Oogst.h"
#include  "raylib.h"

Oogst::Oogst() {
    graanPos = {400, 550};
    graHeight = 100.0f;
    graWidth = 100.0f;
}

void Oogst::draw() {
    DrawRectangleV(graanPos, {graWidth, graHeight}, BROWN);
    DrawText("Mais", graanPos.x + 15, graanPos.y + 40, 20,ORANGE);
}
