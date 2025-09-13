//This code is developed by Bornisha Mudoi
#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to compute sine series sum
double sineSeries(double x, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int power = 2 * i + 1;
        double term = pow(-1, i) * pow(x, power) / factorial(power);
        sum += term;
    }
    return sum;
}

// Function to print Fibonacci series
void fibonacci(int n) {
    long long a = 0, b = 1;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    double x;
    cout << "Enter value of x (in radians): ";
    cin >> x;
    cout << "Enter number of terms (n): ";
    cin >> n;

    double result = sineSeries(x, n);
    cout << "Sum of sine series upto " << n << " terms: " << result << endl;

    fibonacci(n);

    return 0;

}
