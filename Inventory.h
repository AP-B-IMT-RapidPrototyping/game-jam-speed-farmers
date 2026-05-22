//
// Created by tutku on 22/05/2026.
//

#ifndef SPEEDFARMER_INVENTORY_H
#define SPEEDFARMER_INVENTORY_H
#include "raylib.h"
#include "Player.h"

class Inventory {
private:
    Speler::Player* speler;
    int getGold() const;

public:
    void drawUI() const;
    Inventory(Speler::Player* speler);
    // INVENTARIS !!
    bool getHasGrain() const;           // Geeft terug of de speler graan bij zich heeft
    void setHasGrain(bool status);      // Stelt in of de speler graan heeft (true/false)
    int getCornCount() const;           // Geeft terug hoeveel maïs de speler momenteel bij zich heeft
    void addCorn();                     // Voegt 1 maïs toe aan de inventaris (als de tas niet vol is)
    void clearInventory();              // Maakt de volledige inventaris leeg (na verkoop op de markt)
    bool isFull() const;                // Geeft true terug als de inventaris vol zit (cornCount >= maxCapacity)
};


#endif //SPEEDFARMER_INVENTORY_H