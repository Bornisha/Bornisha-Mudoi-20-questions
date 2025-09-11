// This code is developed by Bornisha Mudoi
#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    cout << "\nMultiplication Table of " << number << ":\n";

    // Generate and display the multiplication table up to 10
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}

