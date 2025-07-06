// Subarray sum Equals k --- leetcode 560
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        vector<int> prefixSum(n, 0);

        // Calculate PrefixSum
        prefixSum[0] = arr[0];
        for(int i = 1; i < n; i++){
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }

        unordered_map<int, int> m; // prefixSum -> frequency

        for(int j = 0; j < n; j++){
            if(prefixSum[j] == k) count++;

            int val = prefixSum[j] - k;
            if(m.find(val) != m.end()){
                count += m[val];
            }

            m[prefixSum[j]]++;
        }

        return count;
    }
};

int main() {
    Solution s;
    vector<int> arr = {1, 1, 1};
    int k = 2;
    cout << "Number of subarrays with sum " << k << " = " << s.subarraySum(arr, k) << endl;
    return 0;
}

