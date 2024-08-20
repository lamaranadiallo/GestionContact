# Gestionnaire de Contacts

Ce projet est une application console simple de gestion de contacts développée en C++. Elle permet aux utilisateurs de gérer une liste de contacts avec des fonctionnalités de base.

## Fonctionnalités

- **Ajouter un contact**
- **Afficher la liste des contacts**
- **Rechercher un contact**
- **Supprimer un contact**

## Prérequis

- Compilateur C++ (GCC, Clang, MSVC, etc.)
- CMake (optionnel, pour la compilation)

## Compilation et Exécution

### Avec CMake

1. Clonez le dépôt :
   ```bash
   git clone https://github.com/votre-nom/gestionnaire-contacts.git
   cd gestionnaire-contacts
   ```

2. Compilez le projet :
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

3. Exécutez l'application :
   ```bash
   ./gestionnaire_contacts
   ```

### Sans CMake

1. Compilez manuellement :
   ```C++
   g++ -std=c++11 main.cpp contact.cpp -o gestionnaire_contacts
   ```

2. Exécutez l'application :
   ```C++
   ./gestionnaire_contacts
   ```

## Utilisation

Une fois lancée, l'application affiche un menu avec les options suivantes :

```
|      Gestionnaire de contact         |
|:-------------------------------------|
<<<<<<< HEAD
| 1     | Ajouter un contacte          |
| 2     | Afficher liste des contactes |
| 3     | Rechercher un contacte       |
| 4     | Supprimer un contacte        |
| 5     | Quitter                      | 
=======
| 1     | Ajouter un contact           |
| 2     | Afficher liste des contacts  |
| 3     | Rechercher un contact        |
| 4     | Supprimer un contact         |
| 5     | Quitter                      | 
```

Choisissez une option en entrant le numéro correspondant.

## Structure du Projet

- `main.cpp` : Point d'entrée de l'application
- `contact.h` : Déclaration de la classe Contact
- `contact.cpp` : Implémentation de la classe Contact
- `CMakeLists.txt` : Fichier de configuration CMake (si utilisé)

## Contribution

Les contributions sont les bienvenues ! N'hésitez pas à ouvrir une issue ou à soumettre une pull request.
>>>>>>> master
