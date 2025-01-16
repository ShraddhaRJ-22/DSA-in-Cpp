// Reverse an Array
#include <iostream>
#include <utility> // For std::swap

using namespace std;

int main() {
    // Initialize the array and its length
    int Arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(Arr) / sizeof(Arr[0]); // Calculate length of the array

    // Reverse the array
    for (int i = 0; i < len / 2; ++i) {
        swap(Arr[i], Arr[len - i - 1]); // Swap elements
    }

    // Print the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < len; ++i) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    return 0;
}

