//classe pour compte bancaire
#include <iostream>
class Rectangle {
private:
    double largeur;
    double hauteur;
public:
    Rectangle(double l, double h) : largeur(l), hauteur(h) {}
    double surface() {
        return largeur * hauteur;
    }
};
int main() {
    Rectangle rect1(4, 5);
    Rectangle rect2(3, 6);
    std::cout << "Surface rect1 : " << rect1.surface() << std::endl;
    std::cout << "Surface rect2 : " << rect2.surface() << std::endl;
    return 0;
}