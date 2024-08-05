/* Pointer Arithmetic --> Increment
					  --> Decrement
					  
	* Increment of a poiter value:
		It refers to shift in memory location that pointer is pointing to. Shift is dependent
		on the size of type of variable. (datatype size)
*/
#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	int *ptr = &x;
	
	cout<<"Size of x is "<<sizeof(x)<<endl;
	
	cout<<ptr<<" "<<(ptr + 1)<<endl;	
	
	double dec = 20.05;
	double *ptr_dec = &dec;
	
	cout<<"Size of dec is "<<sizeof(dec)<<endl;
	
	cout<<ptr_dec<<" "<<(ptr_dec + 2)<<endl;
	
	return 0;
}
