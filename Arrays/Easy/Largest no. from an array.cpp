// Largest no. from an array
#include<iostream>
using namespace std;
int main()
{
	int nums[] = {10, 23, 84, 12};
	int size = 4;
	
	int largest = INT_MIN; // INT_MAX = - infinity
	for(int i = 0; i < size; i++){
		if(nums[i] > largest){
			largest = nums[i];
		}
	}
	
	cout<<"Largest: "<<largest<<endl;
	
	return 0;
}
