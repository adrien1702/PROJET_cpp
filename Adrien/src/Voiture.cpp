#ifndef VOITURE_H
#define VOITURE_H
#include <iostream>
#include <string>
#include <ctime>
#include <map>
using namespace std;

class Voiture {
    private:
        string plaque;
        string marque;
        string modele;
        int annee;
        int tempsEntree;
    public:
        Voiture(std::string plaque, std::string marque, std::string modele, int annee, int tempsEntree) : plaque(plaque), marque(marque), modele(modele), annee(annee), tempsEntree(tempsEntree) {}
        string getPlaque() { return plaque; }
        string getMarque() { return marque; }
        string getModele() { return modele; }
        int getAnnee() { return annee; }
        int getTempsEntree() { return tempsEntree; }
};

#endif

