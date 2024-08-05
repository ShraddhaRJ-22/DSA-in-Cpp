// Prefix and post fix operator in pointers

// (*++ptr) --> 1st move pointer ny 4 bytes & then dereference it.
// (++*ptr) --> 1st derefence & then increment the dereferenced value.
#include<iostream>
using namespace std;
int main()
{
	int arr[2] = {5, 19};
	int *ptr = &arr[0];
	
	cout<<ptr<<" "<<*ptr<<endl;
	cout<<(ptr + 1)<<" "<<*(ptr + 1)<<endl;
	
	cout<<(*ptr)++<<endl;
	
	cout<<endl;
	
	cout<<*ptr++<<endl;
	
	cout<<arr[0]<<" "<<arr[1]<<endl;
	cout<<ptr<<" "<<*ptr<<endl;
	return 0;
}
