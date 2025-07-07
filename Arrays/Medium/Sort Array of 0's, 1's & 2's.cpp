// Sort Array of 0's, 1's and 2's
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();

        int low = 0, mid = 0, high = n - 1;
        while(mid <= high){
            if(arr[mid] == 0){
                swap(arr[low], arr[mid]);
                mid++; low++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else{ // arr[mid] == 2
                swap(arr[high], arr[mid]);
                high--;
            }
        }
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    Solution s;
    s.sortColors(nums);

    cout << "Sorted colors: ";
    for(int num : nums) {
        cout << num << " ";
    }

    return 0;
}

