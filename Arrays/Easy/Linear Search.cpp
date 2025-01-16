// Linear Search
#include <iostream>
using namespace std;

void LinearSearch(int arr[], int size, int n) {
    bool found = false; // Initialize a flag to track if the number is found

    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            cout << n << " is found at index " << i << endl;
            found = true; // Set the flag to true if the number is found
            break;        // Exit the loop once the number is found
        }
    }

    // If the number is not found, print this message
    if (!found) {
        cout << n << " is not present in the Array" << endl;
    }
}

int main() {
    int arr[] = {10, 56, 87, 9, 14, 90}; // Sample array
    int n;

    cout << "Enter the number to be searched: ";
    cin >> n;

    // Call the LinearSearch function
    LinearSearch(arr, 6, n);

    return 0;
}
6
