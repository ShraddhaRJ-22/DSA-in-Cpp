// Count Digits
#include <iostream>
using namespace std;

int main() {
    int number, digitCount = 0;

    cout << "Enter a number: ";
    cin >> number;

    // Handling negative numbers
    if (number < 0) {
        number = -number;
    }

    // Special case for 0
    if (number == 0) {
        digitCount = 1;
    } 
	else 
	{
        int temp = number;
        while (temp > 0) {
            temp /= 10;
            ++digitCount;
        }
    }

    cout << "Number of digits in " << number << " is: " << digitCount << endl;

    return 0;
}
