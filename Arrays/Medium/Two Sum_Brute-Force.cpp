// Two Sum - Brute Force
#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1, 3, 6, 7};
	int n = 4;
	int target;
	cout << "Enter Target: ";
	cin >> target;

	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(arr[i] + arr[j] == target) {
				cout << "["<<i<<","<<j<<"]";
				return 0; 
			}
		}
	}

	cout << "No pair found with given target.";
	return 0;
}

