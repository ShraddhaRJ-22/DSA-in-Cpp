// Isomorphic Strings (Leetcode 205)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len = s.size();
        char seen[128] = {}; // Mapping from s -> t

        for (int i = 0; i < len; i++) {
            char c = s[i];
            if (!seen[c]) {
                // Check if t[i] is already mapped from another character
                for (char mapped : seen)
                    if (mapped == t[i]) return false;
                seen[c] = t[i];
            }
            else if (seen[c] != t[i]) return false;
        }
        return true;
    }
};

int main() {
    Solution obj;
    string s, t;
    
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;
    
    bool result = obj.isIsomorphic(s, t);
    if (result)
        cout << "The strings are isomorphic." << endl;
    else
        cout << "The strings are NOT isomorphic." << endl;
    
    return 0;
}

