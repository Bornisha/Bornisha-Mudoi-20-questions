//This code is developed by Bornisha Mudoi
#include <iostream>
using namespace std;

int main() {
    int m, n;

    // Input matrix size
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    // Declare 2D array
    int matrix[m][n];

    // Input matrix elements
    cout << "Enter elements of the matrix (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Print matrix
    cout << "\nThe matrix is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;

}
