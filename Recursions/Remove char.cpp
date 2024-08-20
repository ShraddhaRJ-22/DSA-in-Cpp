// Remove all the occurences of 'a' from the string s = 'abcax'
#include<iostream>
using namespace std;

string f(string &s, int idx, int n)
{
    if (idx == n) 
        return "";
    else {
        // Check if the current character is 'a'
        if (s[idx] == 'a') {
            return f(s, idx + 1, n); // Skip 'a' and continue with the rest of the string
        } else {
            return s[idx] + f(s, idx + 1, n); // Include the current character and continue
        }
    }
}

int main()
{
    int n = 5;
    string s = "abcax";
    cout << "String without 'a' becomes " << f(s, 0, n) << endl;
    return 0;
}

