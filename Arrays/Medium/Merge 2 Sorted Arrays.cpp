// Merge 2 Sorted Arrays (Leetcode 88)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int idx = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        while(i >= 0 && j >= 0){
            if(A[i] > B[j]){
                A[idx--] = A[i--];
            } else {
                A[idx--] = B[j--];
            }
        }

        // Copy remaining elements from B, if any
        while(j >= 0){
            A[idx--] = B[j--];
        }
    }
};

int main() {
    Solution sol;
    int m, n;

    cout << "Enter the number of elements in array A (excluding extra space): ";
    cin >> m;

    cout << "Enter the number of elements in array B: ";
    cin >> n;

    vector<int> A(m + n), B(n);

    cout << "Enter elements of array A in sorted order: ";
    for(int i = 0; i < m; i++) {
        cin >> A[i];
    }

    cout << "Enter elements of array B in sorted order: ";
    for(int i = 0; i < n; i++) {
        cin >> B[i];
    }

    sol.merge(A, m, B, n);

    cout << "Merged array: ";
    for(int i = 0; i < m + n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

