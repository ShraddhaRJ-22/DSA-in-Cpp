/* Arrays: - Data Structure which stores a collection of homogenous(Same Type) items.
		   Contigous(Consecutive blocks of memory) memory.
		   - Its a non-primitive datatype.
		   1. 1-D array
           2. 2-D array
*/
#include<iostream>
using namespace std;
// 1-D array

int main()
{
	int array[] = {1,2,3,4};
	int size = sizeof(array)/sizeof(array[0]);
	
	for(int idx=0;idx<size;idx++){
		cout<<array[idx]<<endl;
	}
	
	// for each loop  -->  It traverses through every element
	for(int ele : array){
		cout<<ele<<endl;
	}
	return 0;
}
