//la classe pour forme,cercle
#include <iostream>
#include <cmath>
class Forme {
public:
    virtual double aire() = 0;
};
class Cercle : public Forme {
private:
    double rayon;
public:
    Cercle(double r) : rayon(r) {}
    double aire() override { return M_PI * rayon * rayon; }
};
class Rectangle : public Forme {
private:
    double l, h;
public:
    Rectangle(double ll, double hh) : l(ll), h(hh) {}
    double aire() override { return l * h; }
};
int main() {
    Forme* tab[] = {new Cercle(3), new Rectangle(4, 5)};
    for (auto f : tab) std::cout << "Aire : " << f->aire() << std::endl;
    return 0;
}