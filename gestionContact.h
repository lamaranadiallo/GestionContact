#ifndef __GESTIONCONTACT__
#define __GESTIONCONTACT__

#include<iostream>
#include <vector>
#include<string>

#include "contact.h"

using namespace std;

class GestionContact {
private:
    vector<Contact> contacts;

public:
    void ajoutContact() {
        string nom, numero;
        cout << "Entrez le nom du contact : ";
        cin.ignore();
        getline(cin, nom);
        cout << "Entrez le numero de telephone : ";
        getline(cin, numero);
        contacts.push_back(Contact(nom, numero));
        cout << "\nContact ajoute avec succes !" << endl;
    }

    void afficherContacts() {
        if (contacts.empty()) {
            cout << "La liste de contacts est vide." << endl;
        } else {
            cout << "Liste des contacts :" << endl;
            for (const auto& contact : contacts) {
                cout << "Nom : " << contact.nom << ", Numero de telephone : " << contact.numero << endl;
            }
        }
    }

    void rechercherContacts() {
        string nom;
        cout << "Entrez le nom du contact a rechercher : ";
        cin.ignore();
        getline(cin, nom);
        bool found = false;
        for (const auto& contact : contacts) {
            if (contact.nom == nom) {
                cout << "Nom : " << contact.nom << ", Numero de telephone : " << contact.numero << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Contact non trouve." << endl;
        }
    }

    void supprimerContact() {
        string nom;
        cout << "Entrez le nom du contact à supprimer : ";
        cin.ignore();
        getline(cin, nom);
        auto it = contacts.begin();
        bool found = false;
        while (it != contacts.end()) {
            if (it->nom == nom) {
                it = contacts.erase(it);
                found = true;
                cout << "Contact supprime avec succes !" << endl;
                break;
            } else {
                ++it;
            }
        }
        if (!found) {
            cout << "Contact non trouvé." << endl;
        }
    }
};


#endif // __GESTIONCONTACT__

