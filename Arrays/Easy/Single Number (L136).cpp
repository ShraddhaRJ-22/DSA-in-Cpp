// Single Number (Leetcode 136)
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int num : nums) {
            ans ^= num;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums;
    int n, input;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements (where every element appears twice except one):" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        nums.push_back(input);
    }

    int result = sol.singleNumber(nums);
    cout << "Single number is: " << result << endl;

    return 0;
}

