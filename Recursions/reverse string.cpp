// Reverse a String
#include<iostream>
using namespace std;

string reverseString(string str) {
    if(str.empty()) return "";  // Base case: empty string
    return reverseString(str.substr(1)) + str[0];  // Recursive case
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    cout << "Reversed string: " << reverseString(str) << endl;
    
    return 0;
}

