// Longest Substring without repeating characters (Leetcode 3)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> count(256, false); // track characters
        int first = 0, sec = 0, len = 0;

        while (sec < s.size()) {
            while (count[s[sec]]) { // if char already exists in window
                count[s[first]] = false;
                first++;
            }
            count[s[sec]] = true;
            len = max(len, sec - first + 1);
            sec++;
        }
        return len;
    }
};

int main() {
    Solution sol;

    string s;
    cout << "Enter a string: ";
    cin >> s;   // NOTE: will stop at spaces (use getline if you want spaces)

    int ans = sol.lengthOfLongestSubstring(s);
    cout << "Length of longest substring without repeating characters: " << ans << endl;

    return 0;
}

