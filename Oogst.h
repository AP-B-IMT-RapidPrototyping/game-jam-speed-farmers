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
    Rectangle getRectangle();

public:
    Oogst();
    void update();
    void draw();
};



