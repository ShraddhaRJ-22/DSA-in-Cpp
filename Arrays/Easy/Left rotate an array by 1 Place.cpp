// Left rotate an array by 1 place
#include<iostream>
using namespace std;
void left_rotate(int n, int arr[])
{
	int temp = arr[0];
	for(int i = 1; i < n; i++){
		arr[i - 1] = arr[i];
	}
	arr[n - 1] = temp;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = 5;
	
	left_rotate(n, arr);
	
	cout<<"The Left rotated array is : ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
