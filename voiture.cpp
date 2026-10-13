#include "voiture.h"
#include <iostream>
#include <cmath>


CVoiture::CVoiture(std::string m, std::string mod, double x, double y)
    : marque(m), modele(mod), posX(x), posY(y), kilometrageTotal(0.0){}

void CVoiture::deplacer(double dx, double dy) {

    posX += dx;
    posY += dy;

    double distance = std::sqrt(dx *dx + dy * dy);
    kilometrageTotal += distance;

}

void CVoiture::afficherPosition() const {
    std::cout << marque << " " << modele
              << " -> Position: (" << posX << ", " << posY << ")"
              << " | Kilometrage total: " << kilometrageTotal << " km" << std::endl;
}

std::string CVoiture::getMarque() const { return marque; }
std::string CVoiture::getModele() const { return modele; }
double CVoiture::getPosX() const { return posX; }
double CVoiture::getPosY() const { return posY; }
double CVoiture::getKilometrageTotal() const { return kilometrageTotal; }
