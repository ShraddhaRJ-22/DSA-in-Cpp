// Valid Palindrome (Leetcode 125)
#include <iostream>
#include <string>
#include <cctype> // for tolower and isalnum
using namespace std;

class Solution {
public:
    bool isAlphaNum(char c) {
        return (c >= '0' && c <= '9') || (tolower(c) >= 'a' && tolower(c) <= 'z');
    }

    bool isPalindrome(string s) {
        int start = 0, end = s.length() - 1;

        while (start < end) {
            // Skip non-alphanumeric characters
            while (start < end && !isAlphaNum(s[start])) start++;
            while (start < end && !isAlphaNum(s[end])) end--;

            // Compare characters
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};

int main() {
    Solution sol;

    string input;
    cout << "Enter a string: ";
    getline(cin, input);  // Use getline to include spaces and punctuation

    if (sol.isPalindrome(input)) {
        cout << "The string is a palindrome (ignoring non-alphanumeric characters)." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }

    return 0;
}

