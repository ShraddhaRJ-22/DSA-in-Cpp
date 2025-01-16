#include <iostream>
using namespace std;
// in C++ +infinity = INT_MAX;
void findMinMax(int arr[], int n, int &min, int &max) {
    int i;

    // If the array has an even number of elements
    if (n % 2 == 0) {
        if (arr[0] > arr[1]) {
            max = arr[0];
            min = arr[1];
        } else {
            max = arr[1];
            min = arr[0];
        }
        i = 2; // Start comparing from the 2nd pair
    } else {
        // If the array has an odd number of elements
        max = min = arr[0];
        i = 1; // Start comparing from the 1st element
    }

    // Compare in pairs
    while (i < n - 1) {
        if (arr[i] > arr[i + 1]) {
            if (arr[i] > max) max = arr[i];
            if (arr[i + 1] < min) min = arr[i + 1];
        } else {
            if (arr[i + 1] > max) max = arr[i + 1];
            if (arr[i] < min) min = arr[i];
        }
        i += 2; // Move to the next pair
    }
}

int main() {
    int arr[] = {12, 11, 15, 6, 7, 3, 18, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, n, min, max);

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}

