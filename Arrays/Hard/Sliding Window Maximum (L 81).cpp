// Sliding window Maximum (Leetcode 81)
#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> res;

        // Analyze 1st Window
        for(int i = 0; i < k; i++){
            while(!dq.empty() && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        // Calculate Sliding window max
        for(int i = k; i < nums.size(); i++){
            res.push_back(nums[dq.front()]); // max of previous window

            // Remove elements out of this window
            while(!dq.empty() && dq.front() <= i - k){
                dq.pop_front();
            }

            // Remove smaller elements
            while(!dq.empty() && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }

            dq.push_back(i);
        }

        // Add max of last window
        res.push_back(nums[dq.front()]);
        return res;
    }
};

int main() {
    Solution sol;

    // Sample input
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    // Get result
    vector<int> result = sol.maxSlidingWindow(nums, k);

    // Output result
    cout << "Max of each window: ";
    for(int num : result){
        cout << num << " ";
    }

    return 0;
}

