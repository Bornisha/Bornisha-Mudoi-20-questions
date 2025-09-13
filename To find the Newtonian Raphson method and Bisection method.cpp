//This code is developed by Bornisha Mudoi
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Define the function f(x) here (user can edit as needed)
double f(double x) {
    // Example: x^3 - x - 2
    return pow(x, 3) - x - 2;
}

// Derivative of the function (needed for Newton-Raphson)
double f_derivative(double x) {
    // Derivative of x^3 - x - 2 is 3x^2 - 1
    return 3 * pow(x, 2) - 1;
}

// Bisection Method
void bisection(double a, double b, double tol, int max_iter) {
    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval: f(a) and f(b) must have opposite signs.\n";
        return;
    }

    double c;
    for (int i = 1; i <= max_iter; i++) {
        c = (a + b) / 2;

        cout << "Iteration " << i << ": c = " << c << ", f(c) = " << f(c) << endl;

        if (fabs(f(c)) <= tol) {
            cout << "Root found by Bisection = " << c << endl;
            return;
        }

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }
    cout << "Root (approx) after " << max_iter << " iterations = " << c << endl;
}

// Newton-Raphson Method
void newton_raphson(double x0, double tol, int max_iter) {
    double x = x0;

    for (int i = 1; i <= max_iter; i++) {
        double fx = f(x);
        double fdx = f_derivative(x);

        if (fabs(fdx) < 1e-10) {
            cout << "Derivative near zero. Method fails.\n";
            return;
        }

        double x_new = x - fx / fdx;

        cout << "Iteration " << i << ": x = " << x_new << ", f(x) = " << f(x_new) << endl;

        if (fabs(x_new - x) <= tol) {
            cout << "Root found by Newton-Raphson = " << x_new << endl;
            return;
        }

        x = x_new;
    }
    cout << "Root (approx) after " << max_iter << " iterations = " << x << endl;
}

int main() {
    double a, b, x0;
    double tol;
    int max_iter;

    cout << "Equation is hardcoded inside f(x). Edit function f(x) as needed.\n";
    cout << "Enter interval [a, b] for Bisection method: ";
    cin >> a >> b;

    cout << "Enter initial guess for Newton-Raphson: ";
    cin >> x0;

    cout << "Enter tolerance (e.g., 1e-6): ";
    cin >> tol;

    cout << "Enter maximum iterations: ";
    cin >> max_iter;

    cout << fixed << setprecision(6);

    cout << "\n--- Bisection Method ---\n";
    bisection(a, b, tol, max_iter);

    cout << "\n--- Newton-Raphson Method ---\n";
    newton_raphson(x0, tol, max_iter);

    return 0;

}
