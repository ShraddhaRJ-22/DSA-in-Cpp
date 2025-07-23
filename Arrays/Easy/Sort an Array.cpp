// Sort an Array 
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;
        vector<int> temp;

        // Merge the two halves into temp[]
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            } else {
                temp.push_back(nums[j++]);
            }
        }

        // Copy the remaining elements
        while (i <= mid) temp.push_back(nums[i++]);
        while (j <= right) temp.push_back(nums[j++]);

        // Copy back to original array
        for (int k = left; k <= right; ++k) {
            nums[k] = temp[k - left];
        }
    }

    void mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

int main() {
    Solution sol;
    
    // Example input
    vector<int> nums = {5, 2, 3, 1};

    // Sorting
    vector<int> sorted = sol.sortArray(nums);

    // Output result
    cout << "Sorted Array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

