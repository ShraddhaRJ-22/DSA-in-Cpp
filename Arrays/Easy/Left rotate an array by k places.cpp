#include <iostream>
using namespace std;

void LeftRotateK(int arr[], int n, int k) {
    k = k % n;  // In case k > n

    int temp[n];  // Temporary array

    // Copy elements after k to the front
    for (int i = 0; i < n - k; i++) {
        temp[i] = arr[i + k];
    }

    // Copy first k elements to the end
    for (int i = n - k; i < n; i++) {
        temp[i] = arr[i - (n - k)];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    LeftRotateK(arr, n, k);

    // Output the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

