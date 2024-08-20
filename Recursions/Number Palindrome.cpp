// Check whether the Number is Palindrome or not
#include<iostream>
using namespace std;

bool f(int num, int *temp)
{
    // Base case: when num is a single digit
    if(num >= 0 && num <= 9) {
        int lastDigitOfTemp = (*temp) % 10;
        (*temp) /= 10;
        return (num == lastDigitOfTemp);
    }

    // Recursive check for the next digit
    bool result = (f(num / 10, temp) && (num % 10) == ((*temp) % 10));
    (*temp) /= 10;
    return result;
}

int main()
{
    int num = 12621;
    int AnotherNum = num;
    int *temp = &AnotherNum;
    if(f(num, temp))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}

