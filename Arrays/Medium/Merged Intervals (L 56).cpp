// Merged Intervals (Leetcode 56)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        if (intervals.size() == 0) {
            return mergedIntervals;
        }

        // Sort the intervals by starting time
        sort(intervals.begin(), intervals.end());

        // Initialize the first interval
        vector<int> tempInterval = intervals[0];

        for (auto it : intervals) {
            // If current interval overlaps with tempInterval
            if (it[0] <= tempInterval[1]) {
                tempInterval[1] = max(it[1], tempInterval[1]);
            } else {
                mergedIntervals.push_back(tempInterval);
                tempInterval = it;
            }
        }

        // Add the last interval
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> merged = sol.merge(intervals);

    cout << "Merged intervals:\n";
    for (auto interval : merged) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }

    return 0;
}

