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
      speed =4.0f;
   }

   Player::~Player() {
      // Inventaris instellen
      cornCount = 0;                  // Speler begint met 0 maïs in de tas
      maxCapacity = 2;                // Maximaal 5 maïs tegelijk dragen
      gold = 0;

      // Animatie-instellingen
      currentFrame = 0;               // Beginframe van de loopanimatie (eerste plaatje)
      frameRow = 0;                   // Rij 0 = speler kijkt naar voren (richting omlaag)
      frameCounter = 0;               // Telt hoeveel frames er verstreken zijn (voor timing)
      frameSpeed = 10;                // Wissel elke 10 frames van animatieplaatje
      isMoving = false;               // Speler staat stil aan het begin
   }

   void Player::Update() {
      // Beweeg naar LINKS (pijltje links of A)
      if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A)) {
         position.x -= speed;        // Verschuif de speler naar links
         frameRow = 1;               // Gebruik rij 2 van de spritesheet (links-animatie)
         isMoving = true;            // Speler is aan het bewegen
      }
      // Beweeg naar RECHTS (pijltje rechts of D)
      else if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) {
         position.x += speed;        // Verschuif de speler naar rechts
         frameRow = 2;               // Gebruik rij 1 van de spritesheet (rechts-animatie)
         isMoving = true;
      }

      // Beweeg OMHOOG (pijltje omhoog of W)
      if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W)) {
         position.y -= speed;        // Verschuif de speler omhoog
         frameRow = 3;               // Gebruik rij 3 van de spritesheet (rug naar camera)
         isMoving = true;
      }
      // Beweeg OMLAAG (pijltje omlaag of S)
      else if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S)) {
         position.y += speed;        // Verschuif de speler omlaag
         frameRow = 0;               // Gebruik rij 0 van de spritesheet (voorkant, naar camera)
         isMoving = true;
      }

      // --- ANIMATIE TIMING: bepaal welk frame van de loopanimatie getoond wordt ---
      if (isMoving) {                         // Alleen animeren als de speler beweegt
         frameCounter++;                     // Teller ophogen elke frame
         if (frameCounter >= frameSpeed) {   // Als de teller de frameSpeed bereikt...
            frameCounter = 0;              // Reset de teller
            currentFrame++;                // Ga naar het volgende animatieframe

            if (currentFrame > 2) {        // Spritesheet heeft 3 frames (0, 1, 2)
               currentFrame = 0;          // Terug naar het eerste frame (animatie herhaalt)
            }
         }
      } else {
         currentFrame = 1;   // Stilstaand: gebruik het middelste frame als rustpositie
      }
      //collisions
      //bool isAtMarket = CheckCollisionRecs({position.x, position.y, size, height}, {marketPos.x, marketPos.y, marketWidth, marketHeight});
   }
   }

   /*void Player::Update() {
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
   }*/

void Speler::Player::Draw() const {
   Rectangle sourceRec = {
      (float)currentFrame * 32.0f,    // X op de spritesheet: kolom (frame 0, 1 of 2)
      (float)frameRow * 32.0f,        // Y op de spritesheet: rij (richting: voor, links, rechts, achter)
      32.0f,                          // Breedte van één vakje op de spritesheet
      32.0f                           // Hoogte van één vakje op de spritesheet
  };

   // Stel in hoe groot de speler op het scherm verschijnt (3x opgeschaald: 32 → 96 pixels)
   Rectangle destRec = {
      position.x,     // X-positie op het scherm
      position.y,     // Y-positie op het scherm
      96.0f,          // Breedte op het scherm (3x zo groot als de sprite)
      96.0f           // Hoogte op het scherm (3x zo groot als de sprite)
  };

   DrawTexturePro(
       texture,            // De geladen speler-spritesheet
       sourceRec,          // Het uit te snijden stukje (huidig frame + richting)
       destRec,            // Waar en hoe groot op het scherm tekenen
       { 0.0f, 0.0f },     // Geen pivot-verschuiving
       0.0f,               // Geen rotatie
       WHITE               // Geen kleurfilter (teken originele kleuren)
      );
   }



   // INVENTARIS !!!
   int Speler::Player::getCornCount() const {
      return cornCount;
   }

   void Speler::Player::addCorn() {
      if (cornCount < maxCapacity) {
         cornCount++;
      }
   }

   void Speler::Player::clearInventory() {
      cornCount = 0;
   }

   bool Speler::Player::isFull() const {
      return cornCount >= maxCapacity;
   }


   void Speler::Player::loadTexture() {
      // Laad de karakter-spritesheet in vanuit de map (4 richtingen x 3 frames = 12 vakjes)
      texture = LoadTexture("C:/Users/tutku/Documents/AP/y2526/game-jam-speed-farmers/cmake-build-debug/Png/Farm-character2D.png");
   }

   void Speler::Player::unloadTexture() {
      UnloadTexture(texture);     // Verwijder de afbeelding uit het geheugen bij afsluiten
   }
