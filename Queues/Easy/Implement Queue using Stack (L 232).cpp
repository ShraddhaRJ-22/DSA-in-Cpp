// Implement Queue using Stack (Leetcode 232)
#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> st1; // push
    stack<int> st2; // pop

    MyQueue() { }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if (empty()) return 0;
        else if (!st2.empty()) { // stack 2 not empty
            int element = st2.top();
            st2.pop();
            return element;
        }
        else {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
            int element = st2.top();
            st2.pop();
            return element;
        }
    }
    
    int peek() {
        if (empty()) return 0;
        if (!st2.empty()) return st2.top();
        else {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }
    
    bool empty() {
        return st1.empty() && st2.empty();
    }
};

int main() {
    MyQueue q;

    // Test the queue
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.peek() << endl; // 10
    cout << "Pop element: " << q.pop() << endl;   // 10
    cout << "Front element after pop: " << q.peek() << endl; // 20

    q.push(40);
    cout << "Pop element: " << q.pop() << endl;   // 20
    cout << "Pop element: " << q.pop() << endl;   // 30
    cout << "Pop element: " << q.pop() << endl;   // 40
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}

