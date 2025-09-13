#include <iostream>
using namespace std;

int main() {
    double a1, b1, c1;
    double a2, b2, c2;

    cout << "Enter coefficients for equation 1 (a1 b1 c1): ";
    cin >> a1 >> b1 >> c1;
    cout << "Enter coefficients for equation 2 (a2 b2 c2): ";
    cin >> a2 >> b2 >> c2;

    // Determinants
    double D  = a1 * b2 - a2 * b1;   // main determinant
    double Dx = c1 * b2 - c2 * b1;   // determinant for x
    double Dy = a1 * c2 - a2 * c1;   // determinant for y

    if (D != 0) {
        double x = Dx / D;
        double y = Dy / D;
        cout << "Unique solution found:" << endl;
        cout << "x = " << x << ", y = " << y << endl;
    } else {
        if (Dx == 0 && Dy == 0) {
            cout << "The system has infinitely many solutions." << endl;
        } else {
            cout << "The system has no solution." << endl;
        }
    }

    return 0;
}