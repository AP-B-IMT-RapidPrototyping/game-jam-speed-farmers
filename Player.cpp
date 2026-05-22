//
// Created by tutku on 22/05/2026.
//

#include "Player.h"

namespace Speler {
   Player::Player() {
      position = {200,200};
      width = 50;
      height = 70;
   }

   Player::~Player() {

   }

   void Player::Update() {
      if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) {
         position.y -= 2.0;
      }
      if (IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) {
         position.y += 2.0;
      }
      if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) {
         position.x -= 2.0;
      }
      if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) {
         position.x += 2.0;
      }
   }

   void Player::Draw() const {
      DrawCircle(position.x,position.y, 20, RED);
   }
}
