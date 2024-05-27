#include<iostream>
#include<string>

#include "contact.h"
#include "gestionContact.h"


int main() {
    GestionContact cm;
    int choix;
    do {
        cout << "Bienvenue dans le gestionnaire de contacts !" << endl;
        cout << "1. Ajouter un contact" << endl;
        cout << "2. Afficher la liste des contacts" << endl;
        cout << "3. Rechercher un contact" << endl;
        cout << "4. Supprimer un contact" << endl;
        cout << "5. Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                cm.ajoutContact();
                break;
            case 2:
                cm.afficherContacts();
                break;
            case 3:
                cm.rechercherContacts();
                break;
            case 4:
                cm.supprimerContact();
                break;
            case 5:
                cout << "Au revoir !" << endl;
                break;
            default:
                cout << "Choix invalide, veuillez reessayer.\n" << endl;
        }
        cout << endl;
    } while (choix != 5);

    return 0;
}
