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

        int currentFrame;   // Het huidige animatieframe (kolom 0, 1 of 2 op de spritesheet)
        int frameRow;       // De huidige rij op de spritesheet (0=voor, 1=links, 2=rechts, 3=achter)
        int frameCounter;   // Telt hoeveel game-frames er verstreken zijn (voor animatiesnelheid)
        int frameSpeed;     // Na hoeveel frames het volgende animatieplaatje getoond wordt
        bool isMoving;      // Geeft aan of de speler op dit moment beweegt (true) of stilstaat (false)
    public:
        Player();
        ~Player();

        void Draw() const;
        void Update();

        int getCornCount() const;
        void addCorn();
        void clearInventory();
        bool isFull() const;
    };
}

