#include<iostream>  //-------- Preprocessor Directive: Used to include files
// Header File<isotream>: Used for taking input & printing Output 
using namespace std;
int main()  // Execution of code begins from main function
{ // Indicate start and end of a function
	int a;
	int b;
	cout<<"\n Enter the Digit:",a;
	cin>>a;
	cout<<"\n Enter the Digit:",b;
	cin>>b;
	if(a>b)
	{
		cout<<"\n a is greater than b";
	}
	else{
		cout<<"b is greater than a";
	}
	return 0;  // Exit the Function and shows no errors in above
}
