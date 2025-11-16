//classe livre
#include <iostream>
class Livre {
private:
    std::string titre;
    std::string auteur;
    double prix;
public:
    Livre() : titre("Inconnu"), auteur("Inconnu"), prix(0) {}
    Livre(std::string t, std::string a, double p) : titre(t), auteur(a), prix(p) {}
    Livre(const Livre& l) : titre(l.titre), auteur(l.auteur), prix(l.prix) {}
    ~Livre() { std::cout << "Destruction de " << titre << std::endl; }
    void afficher() {
        std::cout << "Titre : " << titre << ", Auteur : " << auteur << ", Prix : " << prix << std::endl;
    }
};
int main() {
    Livre l1;
    Livre l2("C++", "Bjarne", 25.5);
    Livre l3(l2);
    l1.afficher();
    l2.afficher();
    l3.afficher();
    return 0;
}