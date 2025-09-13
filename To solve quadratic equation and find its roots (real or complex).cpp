// This code is developed by Bornisha Mudoi
#include <iostream>
#include <cmath>   // for sqrt and abs
#include <complex> // for complex numbers
using namespace std;

int main() {
    double a, b, c;
    cout << "Quadratic equation format: ax^2 + bx + c = 0" << endl;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } 
    else if (discriminant == 0) {
        // One real root (double root)
        double root = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root = " << root << endl;
    } 
    else {
        // Complex roots
        complex<double> root1((-b) / (2 * a), sqrt(abs(discriminant)) / (2 * a));
        complex<double> root2((-b) / (2 * a), -sqrt(abs(discriminant)) / (2 * a));
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }

    return 0;

}
