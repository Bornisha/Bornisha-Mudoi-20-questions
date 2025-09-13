#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, digit;

    cout << "Enter a positive integer: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;   // get the last digit
        sum += digit;       // add digit to sum
        num = num / 10;     // remove the last digit
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}