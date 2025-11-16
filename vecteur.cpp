//8.vecteur2d class implementation
#include <iostream>
class Vecteur2D {
private:
    double x, y;
public:
    Vecteur2D(double x = 0, double y = 0) : x(x), y(y) {}
    Vecteur2D operator+(const Vecteur2D& v) const {
        return Vecteur2D(x + v.x, y + v.y);
    }
    Vecteur2D operator-(const Vecteur2D& v) const {
        return Vecteur2D(x - v.x, y - v.y);
    }
    friend std::ostream& operator<<(std::ostream& os, const Vecteur2D& v) {
        os << "(" << v.x << ", " << v.y << ")";
        return os;
    }
};
int main() {
    Vecteur2D v1(1, 2), v2(3, 4);
    std::cout << "v1 + v2 = " << v1 + v2 << std::endl;
    std::cout << "v1 - v2 = " << v1 - v2 << std::endl;
    return 0;
}