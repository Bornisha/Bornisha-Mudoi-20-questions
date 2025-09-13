#include <iostream>
using namespace std;

int main() {
    char choice;
    double temp, converted;

    cout << "Temperature Conversion Program" << endl;
    cout << "Enter 'C' if you are providing Celsius or 'F' if you are providing Fahrenheit: ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        converted = (temp * 9.0 / 5.0) + 32.0; // Celsius → Fahrenheit
        cout << "Temperature in Fahrenheit: " << converted << " °F" << endl;
    } 
    else if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        converted = (temp - 32.0) * 5.0 / 9.0; // Fahrenheit → Celsius
        cout << "Temperature in Celsius: " << converted << " °C" << endl;
    } 
    else {
        cout << "Invalid choice! Please enter either 'C' or 'F'." << endl;
    }

    return 0;
}