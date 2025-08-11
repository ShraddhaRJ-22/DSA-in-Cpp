// String Compression (Leetcode 443)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();   
        int idx = 0;            

        for (int i = 0; i < n; i++) {
            char ch = chars[i]; 
            int count = 0;      

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            // Store the character itself in the result position
            chars[idx++] = ch;

            if (count > 1) {
                string str = to_string(count); // Convert number to string
                for (char dig : str) {
                    chars[idx++] = dig; // Store each digit separately
                }
            }

            i--;
        }

        // Resize vector to final compressed size
        chars.resize(idx);

        return idx;
    }
};

int main() {
    Solution obj;

    vector<char> chars = {'a','a','b','b','c','c','c'};

    int newLength = obj.compress(chars);

    cout << "Compressed length: " << newLength << endl;

    cout << "Compressed array: ";
    for (char c : chars) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}

