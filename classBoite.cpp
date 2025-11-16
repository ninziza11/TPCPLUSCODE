//10.remplage class
#include <iostream>
#include <string>
template <typename T>
class Boite {
private:
    T contenu;
public:
    Boite(const T& c) : contenu(c) {}
    void afficher() const {
        std::cout << "Contenu : " << contenu << std::endl;
    }
};
int main() {
    Boite<int> bi(5);
    Boite<std::string> bs("Hello");
    Boite<double> bd(3.14);
    bi.afficher();
    bs.afficher();
    bd.afficher();
    return 0;
}