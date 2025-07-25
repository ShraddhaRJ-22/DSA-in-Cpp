// Find Duplicate (Leetcode 287)
#include<iostream>
using namespace std;
int Find_Duplicate(int arr[])
{
	int slow = arr[0], fast = arr[0];
	
	do{
		slow = arr[slow]; // +1
		fast = arr[arr[fast]]; // +2
	} while(slow != fast);
	
	slow = arr[0];
	while(slow != fast){
		slow = arr[slow]; //+1
		fast = arr[fast]; //+1
	}
	return slow;
}
int main()
{
	int arr[] = {1, 2, 3, 3, 4};
	int n = 5;
	
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int duplicate = Find_Duplicate(arr);
	
	cout<<"The Duplicate element is "<<duplicate<<endl;
	
	return 0;
}
