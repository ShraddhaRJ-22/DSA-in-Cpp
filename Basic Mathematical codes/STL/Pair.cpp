#include <iostream>   // for input-output
#include <utility>    // for std::pair
using namespace std;

void explainPair() {
    // Simple pair
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // Nested pair
    pair<int, pair<int, int>> nestedPair = {1, {3, 4}};
    cout << nestedPair.first << " " << nestedPair.second.first << " " << nestedPair.second.second << endl;

    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
}

int main() {
    explainPair(); // Call the function
    return 0;
}

