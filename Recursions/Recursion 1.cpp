// Recursion
// Factorial
#include<iostream>
using namespace std;
int f(int n){
	if(n == 1) return 1;
	int ans = n * f(n-1);
	return ans;
}
int main()
{
	int result = f(4);
	cout<<result<<endl;
	return 0;
}
