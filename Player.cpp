//
// Created by tutku on 22/05/2026.
//

#include "Player.h"

namespace Speler {
   Player::Player() {
      position = {200,200};
      width = 50;
      height = 70;
      pos = {100,100};
      size = {20,40};
   }

   Player::~Player() {
      // Inventaris instellen
      cornCount = 0;                  // Speler begint met 0 maïs in de tas
      maxCapacity = 2;                // Maximaal 5 maïs tegelijk dragen

      // Animatie-instellingen
      currentFrame = 0;               // Beginframe van de loopanimatie (eerste plaatje)
      frameRow = 0;                   // Rij 0 = speler kijkt naar voren (richting omlaag)
      frameCounter = 0;               // Telt hoeveel frames er verstreken zijn (voor timing)
      frameSpeed = 10;                // Wissel elke 10 frames van animatieplaatje
      isMoving = false;               // Speler staat stil aan het begin
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
      //DrawCircle(position.x,position.y, 20, RED);
      DrawTexture(texture, position.x, position.y, WHITE);

   }

   /*// INVENTARIS !!!
   int Player::getCornCount() const {  // Geeft terug hoeveel maïs de speler momenteel bij zich heeft
      return cornCount;
   }

   void Player::addCorn() {            // Voegt 1 maïs toe aan de inventaris (alleen als de tas niet vol is)
      if (cornCount < maxCapacity) {  // Controleer of er nog ruimte is
         cornCount++;                // Voeg 1 maïs toe
      }
   }

   void Player::clearInventory() {     // Maakt de inventaris helemaal leeg (bijv. na verkoop op de markt)
      cornCount = 0;
   }

   bool Player::isFull() const {                   // Controleert of de inventaris vol zit
      return cornCount >= maxCapacity;            // Geeft 'true' terug als de speler 5/5 maïs heeft
   }*/
   void Player::loadTexture() {
      // Laad de karakter-spritesheet in vanuit de map (4 richtingen x 3 frames = 12 vakjes)
      texture = LoadTexture("C:/Users/tutku/Documents/AP/y2526/game-jam-speed-farmers/cmake-build-debug/Png/Farm-character2D.png");
   }

   void Player::unloadTexture() {
      UnloadTexture(texture);     // Verwijder de afbeelding uit het geheugen bij afsluiten
   }
}
