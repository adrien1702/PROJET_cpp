#ifndef PARKING_H
#define PARKING_H
#include <iostream>
#include <string>
#include <ctime>
#include <map>
#include "Voiture.h"
using namespace std;

class Parking {
private:
    int nbPlaces;
    int nbVoitures;
    int tarif;
    map<string, Voiture*> voitures;

public:
    Parking() : nbPlaces(10), nbVoitures(0), tarif(5) {}
    ~Parking() {
        for (auto v : voitures)
            delete v.second;
    }

    void ajouterVoiture(string plaque, string marque, std::string modele, int annee) {
        if (nbVoitures < nbPlaces) {
            voitures[plaque] = new Voiture(plaque, marque, modele, annee, time(0));
            nbVoitures++;
            std::cout << "Car added with success ! there is" << nbPlaces - nbVoitures << " lots available" << endl;
        }
        else {
            cout << " Parking Is full." << endl;
        }
    }

    void sortirVoiture(string plaque) {
        if (voitures.find(plaque) != voitures.end()) {
            int tempsPasse = time(0) - voitures[plaque]->getTempsEntree();
            int prix = tempsPasse * tarif / 60;
cout << "Voiture " << plaque << " exit the parking lot after " << tempsPasse / 60 << " minutes. Price : " << prix << " centimes." << endl;
cout << "Brand: " << voitures[plaque]->getMarque() << " Modèl: " << voitures[plaque]->getModele() << " Year: " << voitures[plaque]->getAnnee() << endl;
delete voitures[plaque];
voitures.erase(plaque);
nbVoitures--;
}
else {
cout << "The car with the plate " << plaque << " is not in the parking"  << endl;
}
}
void afficherRecapitulatif() {
   cout << "Information about the car park:" << endl;
    cout << "Number of places available: " << nbPlaces << endl;
cout << "Number of cars in the parking : " << nbVoitures << endl;
    cout << "Price for a minutes : " << tarif << " centimes" << endl;
}
};

#endif // PARKING_H
