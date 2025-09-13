#include <iostream>
using namespace std;

int main() {
    float basic, hra, da, other, total;

    // Input from user
    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter HRA (House Rent Allowance): ";
    cin >> hra;

    cout << "Enter DA (Dearness Allowance): ";
    cin >> da;

    cout << "Enter Other Allowances: ";
    cin >> other;

    // Total Salary Calculation
    total = basic + hra + da + other;

    // Display result
    cout << "\n------ Salary Details ------" << endl;
    cout << "Basic Salary     : " << basic << endl;
    cout << "HRA              : " << hra << endl;
    cout << "DA               : " << da << endl;
    cout << "Other Allowances : " << other << endl;
    cout << "-----------------------------" << endl;
    cout << "Total Salary     : " << total << endl;

    return 0;
}