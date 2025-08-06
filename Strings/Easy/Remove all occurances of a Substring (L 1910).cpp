// Remove all occurances of a Substring (Leetcode 1910)
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length() > 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s, part;

    cout << "Enter the main string: ";
    getline(cin, s);

    cout << "Enter the substring to remove: ";
    getline(cin, part);

    string result = sol.removeOccurrences(s, part);

    cout << "Result after removing occurrences: " << result << endl;

    return 0;
}

