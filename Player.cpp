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

   void Player::Update() {
      if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) {
         position.y -= 2.0;
      }
      if (IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) {
         position.y += 2.0;
      }
      if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) {

      }
      if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) {

      }
   }

   void Player::Draw() const {
      DrawRectangle(position.x,position.y,50,70,RED);
   }
}
