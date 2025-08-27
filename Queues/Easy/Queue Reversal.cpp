// Queue Reversal
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	queue<int> q;
	stack<int> st;
	
	// Add elements into the Queue
	q.push(12);
	q.push(13);
	q.push(14);
	q.push(15);
	q.push(16);
	
	while(!q.empty()){
		st.push(q.front());
		q.pop();
	} while(!st.empty()){
		q.push(st.top());
		st.pop();
	}
	
	// Print reversed queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    
    return 0;
}
