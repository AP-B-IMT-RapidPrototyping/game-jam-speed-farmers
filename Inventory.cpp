//
// Created by tutku on 22/05/2026.
//
#include <string>
#include "Inventory.h"
#include "Player.h"

Inventory::Inventory(Speler::Player* Player){
    speler = Player;

}
int Speler::Player::getGold() const { return gold; }

void Inventory::drawUI() const {
    // Tekent de volledige HUD (heads-up display) onderaan het scherm

    // Kleurpalet voor de RPG-stijl UI
    Color panelColor = { 105, 65, 40, 255 };   // Donkerbruin (houten balk)
    Color borderColor = { 65, 35, 15, 255 };   // Donkere rand voor diepte-effect
    Color slotColor = { 140, 95, 60, 255 };    // Lichtbruin voor inventarisvakjes

    // Grote bruine balk onderaan het scherm (van x=0 tot x=800, op y=500, hoogte 100)
    DrawRectangle(0, 500, 800, 100, panelColor);
    DrawRectangleLinesEx({ 0, 500, 800, 100 }, 4, borderColor); // Dikke rand eromheen

    // Naam van de speler (links in de balk)
    DrawText("Coins:", 20, 515, 22, WHITE);

    // Goud-teller (hoeveel goud de speler heeft)
    std::string goldText = "Goud: " + std::to_string(speler->getGold());
    DrawText(goldText.c_str(), 20, 550, 20, YELLOW);

    // Verticale scheidingslijn tussen status (links) en inventaris (rechts)
    DrawLineEx({ 180, 500 }, { 180, 600 }, 4, borderColor);

    // Titel boven de inventarisvakjes
    DrawText("Inventory:", 200, 510, 18, WHITE);

    // Instellingen voor de 5 inventarisvakjes
    int startX = 200;    // X-startpositie van het eerste vakje
    int slotY = 540;     // Y-positie van alle vakjes
    int slotSize = 40;   // Grootte van elk vakje (40x40 pixels)
    int spacing = 10;    // Ruimte tussen de vakjes

    // Teken 5 inventarisvakjes naast elkaar
    for (int i = 0; i < 5; i++) {
        int currentSlotX = startX + (i * (slotSize + spacing)); // Bereken X-positie van dit vakje

        // Achtergrond van het vakje (lichtbruin vierkant met rand)
        DrawRectangle(currentSlotX, slotY, slotSize, slotSize, slotColor);
        DrawRectangleLinesEx({ (float)currentSlotX, (float)slotY, (float)slotSize, (float)slotSize }, 2, borderColor);

        /*// Als de speler genoeg maïs heeft om dit vakje te vullen, teken een maïs-icoontje
        if (i < speler.getCornCount()) {
            Rectangle sourceRec = { 7 * 16.0f, 0.0f, 16.0f, 32.0f }; // Fase 7 (volgroeid maïs) op de spritesheet

            // Centreer het icoontje binnen het vakje
            Rectangle destRec = {
                (float)currentSlotX + 8,   // Kleine marge links
                (float)slotY + 4,          // Kleine marge boven
                24.0f,                     // Breedte van het icoontje
                32.0f                      // Hoogte van het icoontje
            };

            DrawTexturePro(
                cornSpritesheet,    // Maïs-spritesheet
                sourceRec,          // Volgroeide maïs-sprite
                destRec,            // Positie en grootte in het vakje
                { 0.0f, 0.0f },     // Geen pivot
                0.0f,               // Geen rotatie
                WHITE               // Geen kleurfilter
            );*/
    }
}