#include <iostream>
using namespace std;

int missingNumber(int nums[], int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int nums[] = {3, 0, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "Missing number: " << missingNumber(nums, size) << endl;
    return 0;
}

