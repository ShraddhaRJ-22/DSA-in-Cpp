// Half- number-pyramid
#include<iostream>
using namespace std;
void print(int n)
{
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	
	print(n);
	return 0;
}
