
#ifndef __CONTACT__

#define __CONTACT__

#include<string>

using namespace std;

class Contact {
public:
    string nom;
    string numero;

    Contact(string nom, string numero) {
        this->nom = nom;
        this->numero = numero;
    }
};



#endif // __CONTACT__
