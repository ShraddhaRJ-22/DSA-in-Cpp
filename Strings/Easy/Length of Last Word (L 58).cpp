// Length of Last Word (Leetcode 58)
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') i--;

        // Count length of last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        return length;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Length of last word: " << sol.lengthOfLastWord(s) << endl;
    return 0;
}

