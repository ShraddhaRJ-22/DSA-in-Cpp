// Time Needed to buy Tickets (Leetcode 2073)
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;

        // Push indices into queue
        for (int i = 0; i < tickets.size(); i++) {
            q.push(i);
        }

        int time = 0;

        // Process the queue until tickets[k] becomes 0
        while (tickets[k] != 0) {
            tickets[q.front()]--;  // person buys one ticket

            if (tickets[q.front()] > 0) // if still needs tickets
                q.push(q.front());      // send them to end of queue

            q.pop(); // remove front
            time++;
        }

        return time;
    }
};

int main() {
    Solution obj;

    // Example input
    vector<int> tickets = {2, 3, 2};  // tickets required by each person
    int k = 2;                        // position of the person we care about

    int result = obj.timeRequiredToBuy(tickets, k);

    cout << "Time required for person at index " << k << " to finish buying: " << result << endl;

    return 0;
}

