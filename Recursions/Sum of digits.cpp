// Given an integer find out the sum of its digits using Recursion
#include<iostream>
using namespace std;

int Function(int n){
	if(n >= 0 && n <= 9){
		return n; 
	}
	return Function(n/10) + (n%10);
}

int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	cout<<"Result = "<<Function(n)<<endl;
	return 0;
}
