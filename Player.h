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
        int height;
        int width;
    public:
        Player();
        ~Player();

        void Draw() const;
        void Update();
    };
}

