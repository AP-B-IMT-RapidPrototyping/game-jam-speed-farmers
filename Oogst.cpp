//
// Created by tutku on 22/05/2026.
//

#include "Oogst.h"


void Oogst::draw() {
    DrawRectangleV(graanPos, {graWidth, graHeight}, BROWN);
    DrawText("Mais", graanPos.x + 15, graanPos.y + 40, 20,ORANGE);
}
