#ifndef __GESTIONCONTACT__

#include<iostream>
#include<string>


#define __GESTIONCONTACT__

class GestionContact {
private:
    vector<Contact> contacts;

public:
    void ajoutContact() {
        string nom, numero;
        cout << "Entrez le nom du contact : ";
        cin.ignore();
        getline(cin, nom);
        cout << "Entrez le num�ro de t�l�phone : ";
        getline(cin, numero);
        contacts.push_back(Contact(nom, numero));
        cout << "Contact ajout� avec succ�s !" << endl;
    }

    void afficherContacts() {
        if (contacts.empty()) {
            cout << "La liste de contacts est vide." << endl;
        } else {
            cout << "Liste des contacts :" << endl;
            for (const auto& contact : contacts) {
                cout << "Nom : " << contact.nom << ", Num�ro de t�l�phone : " << contact.numero << endl;
            }
        }
    }

    void rechercherContacts() {
        string nom;
        cout << "Entrez le nom du contact � rechercher : ";
        cin.ignore();
        getline(cin, nom);
        bool found = false;
        for (const auto& contact : contacts) {
            if (contact.nom == nom) {
                cout << "Nom : " << contact.nom << ", Num�ro de t�l�phone : " << contact.numero << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Contact non trouv�." << endl;
        }
    }

    void supprimerContact() {
        string nom;
        cout << "Entrez le nom du contact � supprimer : ";
        cin.ignore();
        getline(cin, nom);
        auto it = contacts.begin();
        bool found = false;
        while (it != contacts.end()) {
            if (it->nom == nom) {
                it = contacts.erase(it);
                found = true;
                cout << "Contact supprim� avec succ�s !" << endl;
                break;
            } else {
                ++it;
            }
        }
        if (!found) {
            cout << "Contact non trouv�." << endl;
        }
    }
};


#endif // __GESTIONCONTACT__
