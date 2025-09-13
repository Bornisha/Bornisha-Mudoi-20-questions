//This code is developed by Bornisha Mudoi
#include <iostream>
#include <cmath>  // for pow() function
using namespace std;

int main() {
    double principal, rate, time;
    
    // Input from user
    cout << "Enter Principal: ";
    cin >> principal;
    cout << "Enter Rate of Interest (%): ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    // Simple Interest formula: (P * R * T) / 100
    double simpleInterest = (principal * rate * time) / 100.0;

    // Compound Interest formula: A = P * (1 + R/100)^T
    double amount = principal * pow((1 + rate / 100.0), time);
    double compoundInterest = amount - principal;

    // Output results
    cout << "\nSimple Interest = " << simpleInterest << endl;
    cout << "Compound Interest = " << compoundInterest << endl;

    return 0;

}
