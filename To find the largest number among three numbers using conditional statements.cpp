#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Taking input
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Using conditional statements
    if (a >= b && a >= c) {
        cout << "The largest number is: " << a << endl;
    } 
    else if (b >= a && b >= c) {
        cout << "The largest number is: " << b << endl;
    } 
    else {
        cout << "The largest number is: " << c << endl;
    }

    return 0;
}