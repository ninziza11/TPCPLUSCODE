//classe voiture
#include <iostream>
#include <string>
class Voiture {
private:
    std::string marque;
    std::string modele;
    static int compteur;
public:
    Voiture(const std::string& m, const std::string& mod) : marque(m), modele(mod) {
        compteur++;
    }
    static void afficherCompteur() {
        std::cout << "Nombre de voitures créées : " << compteur << std::endl;
    }
};
int Voiture::compteur = 0;
int main() {
    Voiture v1("Toyota", "Corolla");
    Voiture v2("Honda", "Civic");
    Voiture::afficherCompteur();
    return 0;
}