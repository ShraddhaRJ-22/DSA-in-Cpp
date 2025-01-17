// Check if the array is Sorted
#include<iostream>
using namespace std;

bool Sorted_Array(int arr[], int n)
{
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1]) {
            return false; 
        }
    }
    return true; 
}

int main()
{
    int arr[] = {1, 2, 775, 89, 93};
    int n = 5;
    
    if (Sorted_Array(arr, n)) {
        cout << "The array is sorted" << endl;
    } else {
        cout << "The array is not sorted" << endl;
    }
    
    return 0;
}

