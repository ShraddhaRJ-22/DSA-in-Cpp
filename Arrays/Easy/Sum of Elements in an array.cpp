// Calculate the sum of all elements in the g1 array
#include<iostream>
using namespace std;
int main()
{
	int array[] = {2,4,6,8,10,23,5};
	int size = sizeof(array)/sizeof(array[0]);
	
	int sum = 0;
	for(int i=0;i<size;i++){
		sum += array[i];
	}
	cout<<"Sum of Elements: "<<sum<<endl;
	
	return 0;
	
}
