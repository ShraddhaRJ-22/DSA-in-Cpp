/*
		A B C D E
		A B C D
		A B C
		A B
		A

*/
#include<iostream>
using namespace std;

void print(int n)
{
	for(int i=0;i<n;i++){
		for(char ch='A';ch<='A'+(n-i-1);ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	print(n);
	return 0;
}
