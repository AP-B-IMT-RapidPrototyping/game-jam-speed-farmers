//
// Created by tutku on 22/05/2026.
//


#pragma once

#include "raylib.h"


class Oogst {
private:
    Vector2 graanPos;
    float graHeight;
    float graWidth;
    float speed;
    Rectangle getRectangle;
    Texture2D image;
    Vector2 size;

public:
    void loadTexture();
    void unloadTexture();
    void update();
    void draw();
    Oogst();
    ~Oogst();
};



