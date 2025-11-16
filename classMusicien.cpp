//classe musicien,chanteur
#include <iostream>
#include <string>
class Musicien {
protected:
    std::string nom;
    std::string instrument;
public:
    Musicien(const std::string& n, const std::string& i) : nom(n), instrument(i) {}
    void afficher() const {
        std::cout << "Musicien : " << nom << ", Instrument : " << instrument << std::endl;
    }
};
class Chanteur {
protected:
    std::string nom;
    std::string tessiture;
public:
    Chanteur(const std::string& n, const std::string& t) : nom(n), tessiture(t) {}
    void afficher() const {
        std::cout << "Chanteur : " << nom << ", Tessiture : " << tessiture << std::endl;
    }
};
class Artiste : public Musicien, public Chanteur {
public:
    Artiste(const std::string& n, const std::string& i, const std::string& t)
        : Musicien(n, i), Chanteur(n, t) {}
    void afficherInfos() const {
        Musicien::afficher();
        Chanteur::afficher();
    }
};
int main() {
    Artiste a("John", "Guitare", "Ténor");
    a.afficherInfos();
    return 0;
}