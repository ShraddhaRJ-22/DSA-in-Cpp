// Binary Serach
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int n) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2; 

        if (arr[mid] == n) {
            return mid; 
        } else if (arr[mid] < n) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    int arr[] = {9, 10, 14, 56, 87, 90}; 
    int n;

    cout << "Enter the number to be searched: ";
    cin >> n;

    int result = BinarySearch(arr, 6, n);

    if (result != -1) {
        cout << n << " is found at index " << result << endl;
    } else {
        cout << n << " is not present in the array" << endl;
    }

    return 0;
}

