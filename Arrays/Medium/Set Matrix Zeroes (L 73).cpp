// Set Matrix Zeroes (L 73)
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> x, y;

        // Store row and column indices of zero elements
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }

        // Set entire rows to zero
        for (int i = 0; i < x.size(); i++) {
            int index = x[i];
            for (int j = 0; j < n; j++) {
                matrix[index][j] = 0;
            }
        }

        // Set entire columns to zero
        for (int i = 0; i < y.size(); i++) {
            int index = y[i];
            for (int j = 0; j < m; j++) {
                matrix[j][index] = 0;
            }
        }
    }
};

int main() {
    // Sample matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    // Create object and call method
    Solution obj;
    obj.setZeroes(matrix);

    // Display updated matrix
    cout << "Matrix after setting zeroes:\n";
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

