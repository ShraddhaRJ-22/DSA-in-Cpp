// Palindrome for Numbers
#include<iostream>
using namespace std;

bool isPalindrome(int number)
{
	int originalNumber = number;
	int reversedNumber = 0;
	while(number > 0){
		int digit = number % 10;
		reversedNumber = reversedNumber * 10 + digit;
		number /= 10;
	}
	return originalNumber == reversedNumber;
}
int main()
{
	int num;
	cout<<"Enter any number: ";
	cin>>num;
	
	if(isPalindrome(num)){
		cout<<"Entered number is a palindrome";
	}
	else{
		cout<<"Entered number is not a palindrome";
	}
	
	return 0;
}
/* 
Example :

number = 121

1. Initialiation:   
	originalNumber = 121
    reversedNumber = 0
                    
2. 1st Iteration:  
	digit = 121 % 10 = 1
	reversedNumber = 0 * 10 + 1 = 1
	number = 121 / 10 = 12
				   
3. 2nd Iteration:  
	digit = 12 % 10 = 2
	reversedNumber = 1 * 10 + 2 = 12
	number = 12 / 10 = 1
				   
4. 3rd Iteration:  
	digit = 1 % 10 = 1
	reversedNumber = 12 * 10 + 1 = 121
	number = 1 / 10 = 0
				   
	reversedNumber = 121
	
*/
