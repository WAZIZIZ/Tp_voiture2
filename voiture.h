#ifndef VOITURE_H
#define VOITURE_H

#include <string>

class CVoiture {
private:
    std::string marque;
    std::string modele;
    double posX;
    double posY;
    double kilometrageTotal;

public:

    CVoiture(std::string m, std::string mod, double x = 0.0, double y = 0.0);


    void deplacer(double dx, double dy);
    void afficherPosition() const;


    std::string getMarque() const;
    std::string getModele() const;
    double getPosX() const;
    double getPosY() const;
    double getKilometrageTotal() const;

};

#endif
