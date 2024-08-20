// Print from 1 to n Natural numbers
#include<iostream>
using namespace std;

void printn(int n) {
    if(n == 0) return;
    printn(n - 1);  
    cout << n << endl;  
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printn(n);
    return 0;
}

