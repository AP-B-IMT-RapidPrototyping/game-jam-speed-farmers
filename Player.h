//
// Created by tutku on 22/05/2026.
//

#pragma once

#include <string>
#include "raylib.h"

namespace Speler {
    class Player {
    private:
        Vector2 position;
        Vector2 pos;
        Vector2 size;
        int height;
        int width;

        int cornCount;      // Hoeveel maïs de speler momenteel in de inventaris heeft
        int maxCapacity;    // Het maximaal aantal maïs dat de speler kan dragen
    public:
        Player();
        ~Player();

        void Draw() const;
        void Update();
    };
}

