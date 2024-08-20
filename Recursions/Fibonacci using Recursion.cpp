// Fibonacci series using Recursion
#include <iostream>
using namespace std;

void printFibonacci(int n, int a = 0, int b = 1) {
    if (n < 0) return;  

    cout << a << " "; 
    if (n > 0) {
        printFibonacci(n - 1, b, a + b);
    }
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci terms to print: ";
    cin >> n;
    
    printFibonacci(n);
    cout << endl;
    return 0;
}

