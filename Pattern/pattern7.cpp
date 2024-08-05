/*

*********
 *******
  *****
   ***
    *
    
*/
#include<iostream>
using namespace std;

void print(int n) {
    for(int i = 0; i < n; i++) {
        // Spaces before stars
        for(int j=0;j<i;j++) {
            cout << " ";
        }
        // Stars
        for(int j = 0; j < 2*n-(2*i+1); j++) {
            cout << "*";
        }
        for(int j=0;j<i;j++){
        	cout<<" ";
		}
        // Move to the next line
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;  // Take the number of rows as input from the user
    print(n);
    return 0;
}

