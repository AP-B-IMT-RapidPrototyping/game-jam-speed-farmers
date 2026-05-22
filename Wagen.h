//
// Created by tutku on 22/05/2026.
//

#ifndef SPEEDFARMER_WAGEN_H
#define SPEEDFARMER_WAGEN_H
#include "raylib.h"


class Wagen {
    private:
        Vector2 VrachtPos;
        float VraHeight;
        float VraWidth;
        float Vraspeed;
        Rectangle getRectangle();

    public:
        Wagen();
        void update();
        void draw();
};


#endif //SPEEDFARMER_WAGEN_H