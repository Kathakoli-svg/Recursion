#include <iostream>
using namespace std;

// Recursive function to print array in reverse
void reverse(int arr[], int index, int n) {
    if (index == n) return;          // Base case: stop when index reaches size
    reverse(arr, index + 1, n); // Go deeper first
    cout << arr[index] << " ";       // Print while unwinding
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Reversed array (printed using recursion): ";
    reverse(arr, 0, n); // This n is size of array
    cout << endl;

    return 0;
}
