// Find the index at which the smallest & largest element is stored in an array
#include<iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

int main() {
    int array[] = {45, 62, 89, -14, 10};
    int size = 5;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_index = -1;
    int largest_index = -1;

    for (int i = 0; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
            smallest_index = i;
        }
        if (array[i] > largest) {
            largest = array[i];
            largest_index = i;
        }
    }

    cout << smallest_index << " is the index of the smallest element (" << smallest << ") in the array." << endl;
    cout << largest_index << " is the index of the largest element (" << largest << ") in the array." << endl;

    return 0;
}

