// Next Permutation (Leetcode 31)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int pivot = -1;
        int n = A.size();

        // Step 1: Find the pivot
        for(int i = n - 2; i >= 0; i--) {
            if(A[i] < A[i + 1]) {
                pivot = i;
                break;
            }
        }

        // Step 2: Find the element just greater than A[pivot] and swap
        if(pivot != -1) {
            for(int i = n - 1; i > pivot; i--) {
                if(A[i] > A[pivot]) {
                    swap(A[i], A[pivot]);
                    break;
                }
            }
        }

        // Step 3: Reverse the suffix
        reverse(A.begin() + pivot + 1, A.end());
    }
};

int main() {
    Solution sol;
    vector<int> A;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A.push_back(x);
    }

    sol.nextPermutation(A);

    cout << "Next permutation: ";
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

