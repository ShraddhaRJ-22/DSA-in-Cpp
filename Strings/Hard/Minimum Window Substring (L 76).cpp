// Minimum Window Substring (Leetcode 76)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";

        unordered_map<char, int> need, window;
        for (char c : t) need[c]++;   // frequency of chars in t

        int have = 0, required = need.size();
        int left = 0, right = 0;
        int minLen = INT_MAX, startIdx = 0;

        while (right < s.size()) {
            char c = s[right];
            window[c]++;

            if (need.count(c) && window[c] == need[c]) {
                have++;
            }

            // try shrinking from left if all requirements met
            while (have == required) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    startIdx = left;
                }

                // pop from left
                char leftChar = s[left];
                window[leftChar]--;
                if (need.count(leftChar) && window[leftChar] < need[leftChar]) {
                    have--;
                }
                left++;
            }
            right++;
        }

        return (minLen == INT_MAX) ? "" : s.substr(startIdx, minLen);
    }
};
int main() {
    Solution sol;
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << sol.minWindow(s, t) << endl; // Output: "BANC"
    
    return 0;
}

