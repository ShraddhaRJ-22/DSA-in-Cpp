// Pow (x, n) => Leetcode 50
#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long long N = n; // convert to long long to handle -2^31
    if (N < 0) {
        x = 1 / x;
        N = -N;
    }

    double ans = 1.0;
    while (N > 0) {
        if (N % 2 == 1) {
            ans *= x;
        }
        x *= x;
        N /= 2;
    }

    return ans;
}

int main() {
    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    double result = myPow(x, n);
    cout << "Result of pow(" << x << ", " << n << ") is: " << result << endl;

    return 0;
}

