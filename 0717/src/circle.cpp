#include <math.h>

#include <iostream>
using namespace std;

class Circle {
   private:
    double radius;
    double area;

   public:
    Circle(double r);
    ~Circle();
    double getRadius() { return radius; }
    double getArea() { return area; }
};

Circle::Circle(double r) : radius(r) { area = r * r * M_PI; }

Circle::~Circle() {}

int main() {
    int r;
    while (cin >> r) {
        Circle c(r);
        cout << c.getArea() << "\n";
    }
    return 0;
}