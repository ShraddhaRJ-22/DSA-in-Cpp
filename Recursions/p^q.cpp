// Given two numbers p & q, find the value of p^q using a recursive function
#include<iostream>
using namespace std;

int f(int p,int q)
{
	if(q == 0) return 1;
	return p * f(p, q-1);
}

int main()
{
	int p, q;
	cout<<"Enter p and q : ";
	cin>>p>>q;
	
	cout << p << " ^ " << q << " = " << f(p, q) << endl;
	return 0;
}
