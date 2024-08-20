// Check whether the String is Palindrome or not
#include<iostream>
using namespace std;

bool isPalindrome(string &s, int start, int end) {
    // Base case: If the string is empty or has one character, it's a palindrome
    if (start >= end)
        return true;

    if (s[start] != s[end])
        return false;

    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    string s = "madam";

    if (isPalindrome(s, 0, s.length() - 1))
        cout << s << " is a palindrome." << endl;
    else
        cout << s << " is not a palindrome." << endl;

    return 0;
}

