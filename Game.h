//
// Created by tutku on 22/05/2026.
//

#pragma once


void Scherm();

class Game {
private:
    const int screenWidth = 800;
    const int screenHeight = 600;

public:
    int GetWidth() {
        return screenWidth;
    }

    int GetHeight() {
        return screenHeight;
    }
};




