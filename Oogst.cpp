//
// Created by tutku on 22/05/2026.
//
#include <iostream>
#include "Oogst.h"

#include <complex>

#include  "raylib.h"

Oogst::Oogst() {
    graanPos = {200, 350};
    graHeight = 100.0f;
    graWidth = 100.0f;
    size = {50,50};
}

void Oogst::draw() {
    DrawText("Mais", graanPos.x + 15, graanPos.y + 40, 20,ORANGE);
    DrawTexture(image, graanPos.x, graanPos.y, WHITE);

    DrawRectangleV(graanPos, size, RED);
}

Oogst::~Oogst() {
    image = LoadTexture("C:/Users/tutku/Documents/AP/y2526/game-jam-speed-farmers/cmake-build-debug/Png/free_sample_crops.png");
}


void Oogst::unloadTexture() {
    UnloadTexture(image);
}
