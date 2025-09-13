//This code is developed by Bornisha Mudoi
#include <iostream>
#include <cmath>   // For sqrt()

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    double arr[n], sum = 0.0, mean, variance = 0.0, stddev;

    // Input numbers
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculate mean
    mean = sum / n;

    // Calculate variance
    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= n;   // population variance (use n-1 for sample variance)

    // Standard deviation
    stddev = sqrt(variance);

    cout << "Mean = " << mean << endl;
    cout << "Standard Deviation = " << stddev << endl;

    return 0;

}
