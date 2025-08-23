// Find all Anagrams in the String (Leetcode 438)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        if(n < m) return {};

        vector<int> res;
        vector<int> freqP(26, 0), freqS(26, 0);

        // Count frequency of pattern string p
        for(char c : p) freqP[c - 'a']++;

        // Sliding window on string s
        for(int i = 0; i < n; i++) {
            // add current char into window
            freqS[s[i] - 'a']++;

            // remove char that is out of window
            if(i >= m) {
                freqS[s[i - m] - 'a']--;
            }

            // if window matches pattern frequency
            if(freqS == freqP) {
                res.push_back(i - m + 1);
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    string s = "cbaebabacd", p = "abc";

    vector<int> ans = sol.findAnagrams(s, p);

    cout << "Anagram indices: ";
    for(int idx : ans) cout << idx << " ";
    cout << endl;

    return 0;
}

