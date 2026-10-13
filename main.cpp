#include "voiture.h"
#include <iostream>

int main() {
    CVoiture v1("Peugeot", "206", 0.0, 0.0);

    std::cout << "=== Test de l'evolution de la classe CVoiture ===" << std::endl; v1.afficherPosition();


    std::cout << "\nDeplacement 2 (dx = 3, dy = 4)..." << std::endl;
    v1.deplacer(3.0, 4.0);
    v1.afficherPosition();


    std::cout << "\nDeplacement 2 (dx = -1, dy = 2)..." << std::endl;
    v1.deplacer(-1.0, 2.0);
    v1.afficherPosition();


    return 0;
}
