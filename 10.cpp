#include <iostream>
#include <cmath>

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {
        if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
            throw "All sides must be greater than 0";
        }
        if (side1 + side2 <= side3 || side2 + side3 <= side1 || side3 + side1 <= side2) {
            throw "Sum of any two sides must be greater than the third side";
        }
    }

    double area() {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double area(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    try {
        Triangle t1(3, 4, 5);  // Right-angled triangle
        std::cout << "Area of right-angled triangle: " << t1.area(3, 4) << std::endl;

        Triangle t2(4, 5, 6);  // Any type of triangle
        std::cout << "Area of any type of triangle using Heron's formula: " << t2.area() << std::endl;

        Triangle t3(0, 4, 5);  // Invalid side
    } catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;
    }

    return 0;
}
