//This code is developed by Bornisha Mudoi
#include <iostream>
#include <cmath>
using namespace std;

// Define the function here (user can modify this function)
double f(double x) {
    // Example: f(x) = x^2 + 1
    return (x * x + 1);
}

int main() {
    double a, b;   // limits of integration
    int n;         // number of intervals (must be even)

    cout << "Enter lower limit (a): ";
    cin >> a;
    cout << "Enter upper limit (b): ";
    cin >> b;
    cout << "Enter number of intervals (n, even): ";
    cin >> n;

    if (n % 2 != 0) {
        cout << "Error: Number of intervals must be even." << endl;
        return 1;
    }

    double h = (b - a) / n;
    double sum = f(a) + f(b);

    // Apply Simpson's 1/3 Rule
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0) {
            sum += 2 * f(x);
        } else {
            sum += 4 * f(x);
        }
    }

    double result = (h / 3) * sum;

    cout << "Approximate integral value = " << result << endl;

    return 0;

}
