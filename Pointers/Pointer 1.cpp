/* Pointers : (Day 1) 

	data-type * ptr_name

	- Introduction to pointers 
		= Special type of variables (ptr var) which store addresses
	
	- Storing the address of an object in a pointer:
		= Address of operator (&_variable)
		
	- Accessing an object through a pointer
		= Derefence operator --> * i.e [cout<<*ptr;s]
	
	- Call-by-reference using pointers
*/
#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	float y = 7.90;
	
	// create a pointer that can store address of x
	int *ptr = &x;
	cout<<"Adress stored inside ptr: "<<ptr<<endl;
	cout<<"Value present at the address stored in ptr: "<<*ptr<<endl; // dereference
	
	cout<<endl;
	
	float *ptrf = &y;
	cout<<"Adress stored inside ptrf: "<<ptrf<<endl;
	cout<<"Value present at the address stored in ptrf: "<<*ptrf<<endl;	
	return 0;
}
