//
// Created by tutku on 22/05/2026.
//

#ifndef SPEEDFARMER_OOGST_H
#define SPEEDFARMER_OOGST_H
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


#endif //SPEEDFARMER_OOGST_H