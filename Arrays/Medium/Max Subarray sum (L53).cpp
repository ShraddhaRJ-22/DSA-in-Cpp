// Max Subarray Sum -- Kadanes Algorithm
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;

        for(int val : nums){
            currSum += val;
            maxSum = max(currSum, maxSum);

            if(currSum < 0){
                currSum = 0;
            }
        }

        return maxSum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  // Example input
    cout << "Maximum Subarray Sum is: " << sol.maxSubArray(nums) << endl;

    return 0;
}

