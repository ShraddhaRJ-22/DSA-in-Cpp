// Palindrome for Strings
#include<iostream>
#include<cstring>  
using namespace std;

int main()
{
    int h, l = 0;
    char str[20];
    bool isPalindrome = true;

    cout << "Enter the String: ";
    cin >> str;

    h = strlen(str) - 1;
    
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "\nEntered String is a Palindrome." << endl;
    }
    else
    {
        cout << "\nEntered String is not a Palindrome." << endl;
    }

    return 0;
}

