#include<iostream>
using namespace std;

void process(int *arr, int n){
	// inside this funct we have access of same array
	for(int i=0;i<n;i++){
		cout<<*(arr + 1)<<endl;
	}
}

int main()
{
	int arr[3] = {7, 3, 8};
	process(arr, 3);
	
	return 0;
}

// Output should be 7 3 8
