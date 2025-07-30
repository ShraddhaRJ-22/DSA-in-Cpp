// Longest Consecutive Sequence (Leetcode 128)
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        unordered_set<int> set;
        for (int i : nums) {
            set.insert(i);
        }

        int global_len = 0;
        for (int i : set) {
            // Check if it's the start of a sequence
            if (!set.count(i - 1)) {
                int curr_len = 1;
                int curr_Num = i;
                while (set.count(curr_Num + 1)) {
                    curr_len++;
                    curr_Num++;
                }
                global_len = max(curr_len, global_len);
            }
        }
        return global_len;
    }
};

int main() {
    Solution sol;
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements (space separated): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = sol.longestConsecutive(nums);
    cout << "Length of longest consecutive sequence: " << result << endl;

    return 0;
}

