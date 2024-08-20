// Factorial using Recursion
#include<iostream>
using namespace std;

int F(int n)
{
	if(n == 1) return 1;
	else{
		int ans = n * F(n-1);
		return ans;
	}
}

int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	cout<<"Factorial = "<<F(n)<<endl;
	return 0;
}
