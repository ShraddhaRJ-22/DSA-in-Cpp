// Move all Zeroes to the End
#include<iostream>
using namespace std;

void moveZeroesToEnd(int arr[], int n) {
    int j = 0; // index to place the next non-zero element
    
    // Move all non-zero elements to the beginning
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }
    
    // Fill the remaining positions with 0
    while(j < n) {
        arr[j++] = 0;
    }
}

int main() {
    int arr[] = {1, 0, 3, 4, 0, 6, 0, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveZeroesToEnd(arr, n);

    cout << "The Final Array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

