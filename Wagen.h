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
        Texture2D texture;

    public:
        Wagen();
        void update();
        void draw();
    void loadTexture();
    void unloadTexture();
    float GetWidth() {
        return VraWidth;
    }
    float GetHeight() {
        return VraHeight;
    }
};


#endif //SPEEDFARMER_WAGEN_H