#include <iostream>
#include <string>
#include <ctime>
#include <map>
#include "Parking.h"
using namespace std;

int main() {
Parking parking;
char choix;
string plaque;
string marque;
string modele;
int annee;
while (true) {
    cout << "add a car ?(A) Exit a car ? (S) or (Q for Quit) : ";
    cin >> choix;
    if (choix == 'A') {
        cout << "Numbre licensplate : ";
        cin >> plaque;
        cout << "brand: ";
        cin >> marque;
        cout << "model : ";
        cin >> modele;
       cout << "year : ";
       cin >> annee;
        parking.ajouterVoiture(plaque, marque, modele, annee);
    }
    else if (choix == 'S') {
        cout << " Numbre licens plate : ";
        cin >> plaque;
        parking.sortirVoiture(plaque);
}
else if (choix == 'Q') {
break;
}
else {
cout << "not valid." << endl;
}
}
parking.afficherRecapitulatif();

return 0;
}
