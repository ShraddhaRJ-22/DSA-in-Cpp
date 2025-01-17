// Remove Duplicates from the Sorted array
#include <iostream>
using namespace std;

int RemoveDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n; 
    }

    int index = 1; 

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) { 
            arr[index] = arr[i];   
            index++;
        }
    }

    return index; 
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = RemoveDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

