// Permutation in String (Leetcode 567)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        // Frequency of s1
        for (char c : s1) {
            freq1[c - 'a']++;
        }

        int windowSize = s1.length();

        // First window
        for (int i = 0; i < windowSize; i++) {
            freq2[s2[i] - 'a']++;
        }

        if (memcmp(freq1, freq2, sizeof(freq1)) == 0) return true;

        // Sliding window
        for (int i = windowSize; i < s2.length(); i++) {
            freq2[s2[i] - 'a']++;               // add new char
            freq2[s2[i - windowSize] - 'a']--;  // remove old char

            if (memcmp(freq1, freq2, sizeof(freq1)) == 0) return true;
        }

        return false;
    }
};

int main() {
    Solution sol;
    cout << boolalpha << sol.checkInclusion("ab", "eidbaooo") << endl; // true
    cout << boolalpha << sol.checkInclusion("ab", "eidboaoo") << endl; // false
}

