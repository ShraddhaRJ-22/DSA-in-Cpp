// Best time to buy and sell Stock (leetcode 121)
#include <iostream>
#include <vector>
#include <algorithm> // for max() and min()
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
            bestBuy = min(bestBuy, prices[i]);
        }

        return maxProfit;
    }
};

int main() {
    Solution sol;
    vector<int> prices;
    int n, input;

    cout << "Enter number of days: ";
    cin >> n;

    cout << "Enter stock prices for each day:\n";
    for (int i = 0; i < n; ++i) {
        cin >> input;
        prices.push_back(input);
    }

    int result = sol.maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;

    return 0;
}

