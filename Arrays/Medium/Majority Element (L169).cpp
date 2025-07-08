// Majority Element (>n/2 times) Leetcode 169
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        int element = 0;

        for(int i = 0; i < n; i++){
            if(count == 0){
                count = 1;
                element = arr[i];
            }
            else if(arr[i] == element){
                count++;
            }
            else{
                count--;
            }
        }

        int count1 = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == element) count1++;
        }

        if(count1 > n / 2){
            return element;
        }
        return -1; // No majority element
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};  // Example input

    int result = sol.majorityElement(arr);

    if(result != -1)
        cout << "Majority element is: " << result << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}

