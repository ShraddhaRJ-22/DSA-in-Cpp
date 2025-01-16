// Find the smallest number from an array
#include<iostream>
using namespace std;
int main()
{
	int nums[] = {10, 23, 90, -4, 0};
	int size = 5;
	
	int smallest = INT_MAX; // INT_MAX = + infinity
	for(int i = 0; i < size; i++){
		if(nums[i] < smallest){
			smallest = nums[i];
		}
	}
	
	// instead of if part we can also write
	// smallest = min(nums[i], smallest) where min is a built in function
	
	cout<<"Smallest: "<<smallest<<endl;
	
	return 0;
}
