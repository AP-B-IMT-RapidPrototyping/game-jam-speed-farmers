//
// Created by user on 5/22/2026.
//

#include "Text.h"

#include "raylib.h"

Text::Text() {
    quota = 20;
    crops = 0;
}


void Text::Draw() const {
    DrawText("quota:" + quota,400,0,30,YELLOW);
}
