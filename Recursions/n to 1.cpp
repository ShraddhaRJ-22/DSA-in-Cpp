// Print from n to 1
#include<iostream>
using namespace std;

void printn(int n) {
    if(n == 0) return;  
    cout << n << endl; 
	printn(n - 1); 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printn(n);
    return 0;
}

