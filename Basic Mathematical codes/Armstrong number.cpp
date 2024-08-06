// Armstrong number                 i.e  153 --> 1^3+5^3+3^3 = 153
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:",n;
	cin>>n;
	
	int sum=0;
	int originaln=n;
	while(n>0){
		int lastdigit= n%10;
		sum+= pow(lastdigit,3);
		n=n/10;		
	}
	if(originaln==sum){
		cout<<"Armstrong no."<<endl;
	}
	else{
		cout<<"Non-Armstrong no."<<endl;
	}
}
