//classe personne
#include <iostream>
class Personne {
protected:
    std::string nom;
    int age;
public:
    Personne(std::string n, int a) : nom(n), age(a) {}
    virtual void afficher() {
        std::cout << "Nom : " << nom << ", Age : " << age;
    }
};
class Etudiant : public Personne {
private:
    std::string niveau;
public:
    Etudiant(std::string n, int a, std::string niv) : Personne(n, a), niveau(niv) {}
    void afficher() override {
        Personne::afficher();
        std::cout << ", Niveau : " << niveau << std::endl;
    }
};
int main() {
    Etudiant et("Pierre", 20, "L2");
    et.afficher();
    return 0;
}