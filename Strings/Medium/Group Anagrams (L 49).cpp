// Group Anagrams (Leetcode 49)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        // Store the values of map
        map<string,vector<string>> mp;
        for(int i = 0; i < str.size(); i++){
            string s = str[i];
            sort(s.begin(), s.end());
            mp[s].push_back(str[i]);
        }
        // Storing answer
        vector<vector<string>> ans(mp.size());
        int idx = 0;
        for(auto x : mp){
            auto temp = x.second;
            for(auto x : temp){
                ans[idx].push_back(x);
            }
            idx ++;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> result = sol.groupAnagrams(words);

    cout << "Grouped Anagrams:\n";
    for(auto group : result){
        cout << "[ ";
        for(auto word : group){
            cout << word << " ";
        }
        cout << "]\n";
    }

    return 0;
}

