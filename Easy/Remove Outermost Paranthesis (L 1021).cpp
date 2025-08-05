// Remove outermost paranthesis
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int open = 0;

        for (char c : s) {
            if (c == '(') {
                if (open > 0) ans += c; // skip outermost '('
                open++;
            } else {
                open--;
                if (open > 0) ans += c; // skip outermost ')'
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter parentheses string: ";
    cin >> s;
    
    string result = sol.removeOuterParentheses(s);
    cout << "Result: " << result << endl;

    return 0;
}

