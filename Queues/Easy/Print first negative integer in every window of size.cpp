// Print first negative integer in every window of size
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {2, -3, -4, -2, 7, 8, 9, -10};
    int n = 8;
    int k = 3;

    queue<int> q;  // store indexes of negative numbers
    vector<int> ans;

    // Process first window
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) q.push(i);
    }

    // Process rest of the windows
    for (int i = k; i <= n; i++) {
        // If queue is not empty, front index is the first negative number
        if (!q.empty()) ans.push_back(arr[q.front()]);
        else ans.push_back(0); // no negative in this window

        // Remove elements that are out of this window
        while (!q.empty() && q.front() <= i - k) {
            q.pop();
        }

        // Add current element (if negative)
        if (i < n && arr[i] < 0) {
            q.push(i);
        }
    }

    // Print result
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}

