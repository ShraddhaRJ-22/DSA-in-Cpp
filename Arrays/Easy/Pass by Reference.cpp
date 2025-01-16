/* Pass by Reference
            --> In C++ a reference is an alternative name for an object or function, & its
            address of the object or function it refers to. For sake of understanding
            we are calling it address here.
*/

// Change the array
#include<iostream>
using namespace std;

void changeArray(int arr[], int size){
	for(int i = 0; i < size; i++){
		arr[i] = 2 * arr[i];
	}
}

int main()
{
	int arr[] = {1, 2, 3};
	changeArray(arr, 3);
	
	for(int i = 0; i < 3; i++){
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	
	return 0;
}
