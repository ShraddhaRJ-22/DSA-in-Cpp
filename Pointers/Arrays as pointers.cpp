// Here Array acts as pointer 
// (arr + 0) --> index value
// (arr + 1) --> 1t index value

#include<iostream>
using namespace std;
int main()
{
	int arr[3] = {12, 10 , 3};
	int *ptr = &arr[0];
	
	cout<<ptr<<" "<<arr<<" "<<*arr<<endl;
	cout<<*(arr + 0)<<" "<<*(arr + 1)<<" "<<*(arr + 2)<<endl;
	
	return 0;
}
