// Sliding window Maximum
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

        // Sliding window
        for(int i = k; i < nums.size(); i++){
            res.push_back(nums[dq.front()]); // max of prev window

            // Remove out-of-window elements
            while(!dq.empty() && dq.front() <= i - k){
                dq.pop_front();
            }

            // Maintain decreasing order
            while(!dq.empty() && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]); // max of last window

        return res;
    }
};

int main() {
    Solution obj;
    int n, k;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter window size (k): ";
    cin >> k;

    vector<int> result = obj.maxSlidingWindow(nums, k);

    cout << "Sliding Window Maximums: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

