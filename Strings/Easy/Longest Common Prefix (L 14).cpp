// Longest Common Prefix (Leetcode 14)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        for (int i = 0; i < strs[0].size(); ++i) {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); ++j) {
                if (i >= strs[j].size() || strs[j][i] != ch) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0]; // all characters matched
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    cin.ignore(); // to clear the newline character after entering n

    vector<string> strs(n);
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; ++i) {
        getline(cin, strs[i]);
    }

    string result = sol.longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << (result.empty() ? "None" : result) << endl;

    return 0;
}

