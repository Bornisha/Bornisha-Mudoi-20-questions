//This code is developed by Bornisha Mudoi
#include <iostream>
#include <cmath> // for sqrt()

using namespace std;

int main() {
    double a, b, c;

    // Input sides of the triangle
    cout << "Enter the lengths of the three sides of the triangle:\n";
    cin >> a >> b >> c;

    // Check if valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Calculate semi-perimeter
        double s = (a + b + c) / 2;

        // Calculate area using Heron's formula
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "The area of the triangle is: " << area << endl;
    } else {
        cout << "Invalid triangle. The sum of any two sides must be greater than the third side." << endl;
    }

    return 0;
}

