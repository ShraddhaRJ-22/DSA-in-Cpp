// Sum of array elements
#include<iostream>
using namespace std;

int f(int *arr, int idx, int n)
{
	if(idx == n - 1){
		return arr[idx];
	}
	return arr[idx] + f(arr, idx + 1, n);
}
int main()
{
	int arr[] = {1, 5, 7, 3, 6};
	int n = 5;
	
	cout<<"Sum of Elements in the Array is "<<f(arr, 0, n)<<endl;
	return 0;
}
