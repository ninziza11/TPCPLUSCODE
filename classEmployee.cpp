//la classe mployee
#include <iostream>
class Employe {
protected:
    std::string nom;
    double salaireBase;
public:
    Employe(std::string n, double s) : nom(n), salaireBase(s) {}
    virtual double calculerSalaire() = 0;
    virtual ~Employe() {}
};
class Ingenieur : public Employe {
public:
    Ingenieur(std::string n, double s) : Employe(n, s) {}
    double calculerSalaire() override { return salaireBase * 1.2; }
};
class Commercial : public Employe {
public:
    Commercial(std::string n, double s) : Employe(n, s) {}
    double calculerSalaire() override { return salaireBase * 1.1; }
};
int main() {
    Employe* tab[] = {new Ingenieur("Jean", 1000), new Commercial("Paul", 800)};
    for (auto e : tab) {
        std::cout << "Salaire : " << e->calculerSalaire() << std::endl;
        delete e;
    }
    return 0;
}