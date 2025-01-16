// Find the Maximum value out of all elements in the array
#include<iostream>
using namespace std;
int main()
{
	int array[] = {3,23,34,100,45,67,89};
	int size = sizeof(array)/sizeof(array[0]);
	
	int max = array[0];
	for(int i=1;i<size;i++){
		if(array[i]>max){
			max = array[i];
		}
	}
	
	cout<<"Max Value: "<<max<<endl;
	return 0;
}

