// Sorting Sentence (Leetcode 1859)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string sortingSentence(string s)
{
    vector<string> ans(10); // supports 1–9 indexed words
    string temp = "";
    int idx = 0, count = 0;

    while (idx < s.size()) {
        if (s[idx] == ' ') {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        } else {
            temp += s[idx];
        }
        idx++;
    }

    // Last word
    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    count++;

    // Build Result
    string result = "";
    for (int i = 1; i <= count; i++) {
        result += ans[i];
        if (i != count) result += ' ';
    }
    return result;
}

int main()
{
    string s;
    cout << "Enter Sentence: ";
    getline(cin, s);

    string sentence = sortingSentence(s);
    cout << "Sorted Sentence: " << sentence;

    return 0;
}

