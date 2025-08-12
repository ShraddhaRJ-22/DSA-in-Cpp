// Largest Odd Number in string (Leetcode 1903)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) { // If odd
                return num.substr(0, i + 1);
            }
        }
        return ""; // No odd digit found
    }
};

int main() {
    Solution obj;
    string num;
    
    cout << "Enter a numeric string: ";
    cin >> num;
    
    string result = obj.largestOddNumber(num);
    
    if (result != "")
        cout << "Largest odd number: " << result << endl;
    else
        cout << "No odd number found in the string." << endl;
    
    return 0;
}

