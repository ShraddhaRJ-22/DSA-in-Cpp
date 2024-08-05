/*

 	*
   ***
  *****
 *******
*********

*/
#include<iostream>
using namespace std;

void print(int n) {
    for(int i = 0; i < n; i++) {
        // Spaces before stars
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Stars
        for(int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
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

