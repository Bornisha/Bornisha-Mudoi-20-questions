#include <iostream>
using namespace std;

// Recursive function to calculate factorial
long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

// Iterative function to calculate factorial
long long factorialLoop(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " using loop = " << factorialLoop(num) << endl;
        cout << "Factorial of " << num << " using recursion = " << factorialRecursive(num) << endl;
    }

    return 0;
}