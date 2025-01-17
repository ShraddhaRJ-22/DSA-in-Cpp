// Find Second largest element in the array 
#include<iostream>
using namespace std;

int num(int n, int arr[])
{
	int largest = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] > largest){
			largest = arr[i];
		}
	}
	
	int Second_largest = -1;
	for(int i = 0; i < n; i++){
		if(arr[i] > Second_largest && arr[i] != largest){
			Second_largest = arr[i];
		}
	}
	
	return Second_largest;
	
}
int main()
{
	int arr[] = {1, 5, 6, 12, 87, 9};
	int n = 6;
	
	int secondLargest = num(n, arr);
	cout<<secondLargest<<" is the Second Largest element"<<endl;
	
	return 0;
}
