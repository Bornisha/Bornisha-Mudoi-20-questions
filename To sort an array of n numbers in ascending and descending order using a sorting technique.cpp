#include <iostream>
using namespace std;

// Bubble Sort function
void bubbleSort(int arr[], int n, bool ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Ascending order
            if (ascending && arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
            // Descending order
            else if (!ascending && arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort ascending
    bubbleSort(arr, n, true);
    cout << "\nArray in Ascending Order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Sort descending
    bubbleSort(arr, n, false);
    cout << "\nArray in Descending Order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}