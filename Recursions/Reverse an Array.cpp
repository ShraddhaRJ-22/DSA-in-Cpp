// Reverse an Array
#include<iostream>
using namespace std;

void f(int *arr, int idx, int n)
{
    if (idx == n) 
        return;
    else {
        f(arr, idx + 1, n); 
        cout << arr[idx] << " "; 
    }
}

int main()
{
    int n = 5;
    int arr[] = {3, 2, 5, 9, 7};
    
    cout << "Reversed Array is: ";
    f(arr, 0, n); // Start the recursion
    cout << endl;

    return 0;
}

