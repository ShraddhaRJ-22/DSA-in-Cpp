#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    stack<int> st;
    
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    
    int k;
    cin >> k;   // Example: if k = 3
    
    int n = q.size();
    
    // Step 1: Push first k elements into stack
    for (int i = 0; i < k; i++) {
        st.push(q.front());
        q.pop();
    }
    
    // Step 2: Push stack elements back into queue
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    
    // Step 3: Move remaining (n-k) elements to back to maintain order
    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }
    
    // Print final queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    
    return 0;
}

