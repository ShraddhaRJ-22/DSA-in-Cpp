// Reverse of no. using while loop
#include<iostream>
using namespace std;            // Whenever n%10= lastdigit
int main()                       // similarly n%100= 2nd lastdigit
{                                //  234 = 432
	int n,int rev=0;                       
	cout<<"Enter n:",n;          
	cin>>n;                      
	while(n>0){
		int lastdigit=n%10;
		rev+= rev*10 + lastdigit;    // Finding the last digit
		n=n/10;
	}
	
	cout<<rev<<endl;
	return 0;
}
