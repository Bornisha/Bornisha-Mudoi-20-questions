#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the number of terms (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;  // add reciprocal of i
    }

    cout << "Sum of series up to " << n << " terms = " << sum << endl;
    return 0;
}