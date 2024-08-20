// print Array using recursion
#include <iostream>
using namespace std;

void f(int *arr, int idx, int n) {
    if (idx >= n) return; 
    cout << arr[idx] << endl;
    f(arr, idx + 1, n); 
}

int main() {
    int n = 5;
    int arr[] = {4, 5, 8, 2, 9};
    
    f(arr, 0, n); 
    return 0;
}

