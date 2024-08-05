// Half Pyramid
#include<iostream>
using namespace std;
void print_pyramid(int n)
{
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter the size of Half Pyramid: ";
	cin>>n;
	
	print_pyramid(n);
	
}
