// Print all divisors
#include <iostream>
#include <cmath>

using namespace std;

int countDivisors(int n) {
    int divisors = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            // Check if divisors are equal to avoid counting twice
            if (i == n / i) {
                divisors++;
            } else {
                divisors += 2;
            }
        }
    }
    return divisors;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int divisorCount = countDivisors(num);
    cout << "Number of divisors of " << num << " is: " << divisorCount << endl;

    return 0;
}
