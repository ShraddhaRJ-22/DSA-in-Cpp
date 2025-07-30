// Largest Rectangle in Histogram (Leetcode 84)
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n);
        vector<int> right(n);
        stack<int> s;

        // Nearest smaller to right
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            right[i] = s.empty() ? n : s.top();  // right boundary
            s.push(i);
        }

        // Clear stack
        while (!s.empty()) s.pop();

        // Nearest smaller to left
        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top();  // left boundary
            s.push(i);
        }

        // Calculate max area
        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            int currArea = heights[i] * width;
            maxArea = max(maxArea, currArea);
        }

        return maxArea;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter number of histogram bars: ";
    cin >> n;

    vector<int> heights(n);
    cout << "Enter heights of bars: ";
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int maxArea = sol.largestRectangleArea(heights);
    cout << "Largest rectangle area in histogram: " << maxArea << endl;

    return 0;
}

