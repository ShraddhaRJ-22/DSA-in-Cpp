// Print all Elements in Queue
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    queue<int> q;

    // Add some elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    vector<int> ans;

    // Store elements while popping
    while (!q.empty()) {
        ans.push_back(q.front());
        q.pop();
    }

    // Push them back into queue and print
    for (int i = 0; i < ans.size(); i++) {
        q.push(ans[i]);
        cout << ans[i] << " ";
    }
    cout << endl;

    // (Optional) Verify queue is intact
    int n = q.size();
    while (n--) {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
    cout << endl;

    return 0;
}

