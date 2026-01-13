#include <iostream>
using namespace std;

// Recursive function to reverse array
void reverseArray(int arr[], int start, int end) {
    // Base case
    if (start >= end) return;

    // Swap elements
    swap(arr[start], arr[end]);

    // Recursive call
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];  // Declare array of size n

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

	cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    reverseArray(arr, 0, n - 1); // n-1 = last valid index

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
