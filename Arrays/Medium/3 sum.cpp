// 3 sum (2 pointers) => optimal approach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end()); // important step

        for(int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicates

            int j = i + 1;
            int k = n - 1;

            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k]; // moved inside loop

                if(sum < 0) {
                    j++;
                } else if(sum > 0) {
                    k--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    // Skip duplicates for j and k
                    while(j < k && nums[j] == nums[j - 1]) j++;
                    while(j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = sol.threeSum(nums);

    cout << "Triplets that sum to 0:\n";
    for(const auto& triplet : result) {
        for(int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

