/*
1234567
 123456
  12345
   1234
    123
     12
      1
*/
#include<iostream>
using namespace std;

void print(int n) {
    for(int i = 0; i < n; i++) {
        
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        
        for(int j = 1; j <= n - i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;  
    print(n);
    return 0;
}

